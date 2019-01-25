module Vale.AsLowStar.Test
open Interop.Base
module ME = X64.Memory
module IA = Interop.Assumptions
module V = X64.Vale.Decls
module IX64 = Interop.X64
module VSig = Vale.AsLowStar.ValeSig
module LSig = Vale.AsLowStar.LowStarSig
module W = Vale.AsLowStar.Wrapper
module VS = X64.Vale.State
module MS = X64.Machine_s
(* A little utility to trigger normalization in types *)
let as_t (#a:Type) (x:normal a) : a = x
let as_normal_t (#a:Type) (x:a) : normal a = x

////////////////////////////////////////////////////////////////////////////////
//First a little standalone, toy experiment
[@__reduce__] unfold
let b64 = buf_t TUInt64
[@__reduce__] unfold
let t64_mod = TD_Buffer TUInt64 default_bq
[@__reduce__] unfold
let t64_no_mod = TD_Buffer TUInt64 ({modified=false; strict_disjointness=false; taint=MS.Secret})

[@__reduce__] unfold
let dom : IX64.arity_ok td =
  let y = [t64_mod;t64_no_mod] in
  assert_norm (List.length y = 2);
  y

assume val n : IX64.max_slots
assume val pre : VSig.vale_pre n dom
assume val post : VSig.vale_post n dom
assume val v: VSig.vale_sig pre post
assume val c: V.va_code

[@__reduce__]
let call_c_t = IX64.as_lowstar_sig_t_weak Interop.down_mem c n dom [] _ _ (W.mk_prediction c dom [] (v c IA.win))
let call_c : call_c_t = IX64.wrap_weak Interop.down_mem c n dom (W.mk_prediction c dom [] (v c IA.win))
let call_c_normal_t : normal call_c_t = as_normal_t #call_c_t call_c
//You can ask emacs to show you the type of call_c_normal_t ...

////////////////////////////////////////////////////////////////////////////////
//Now memcpy
module VM = Vale_memcpy

[@__reduce__] unfold
let vm_dom = dom
open X64.MemoryAdapters
(* Need to rearrange the order of arguments *)
[@__reduce__] unfold
let vm_pre : VSig.vale_pre 24 vm_dom =
  fun (c:V.va_code)
    (dst:b64)
    (src:b64)
    (va_s0:V.va_state)
    (sb:IX64.stack_buffer 24) ->
      VM.va_pre c va_s0 IA.win (as_vale_buffer sb) (as_vale_buffer dst) (as_vale_buffer src)

[@__reduce__] unfold
let vm_post : VSig.vale_post 24 vm_dom =
  fun (c:V.va_code)
    (dst:b64)
    (src:b64)
    (va_s0:V.va_state)
    (sb:IX64.stack_buffer 24)
    (va_s1:V.va_state)
    (f:V.va_fuel) ->
      VM.va_post c va_s0 va_s1 f IA.win (as_vale_buffer sb) (as_vale_buffer dst) (as_vale_buffer src)

module VS = X64.Vale.State
#set-options "--print_effect_args"

(* The vale lemma doesn't quite suffice to prove the modifies clause
   expected of the interop layer;
   So, that's assumed for now ... to be fixed *)
[@__reduce__] unfold
let vm_lemma'
    (code:V.va_code)
    (_win:bool)
    (dst:b64)
    (src:b64)
    (va_s0:V.va_state)
    (sb:IX64.stack_buffer 24)
 : Ghost (V.va_state & V.va_fuel)
     (requires
       vm_pre code dst src va_s0 sb)
     (ensures (fun (va_s1, f) ->
       V.eval_code code va_s0 f va_s1 /\
       VSig.vale_calling_conventions va_s0 va_s1 /\
       vm_post code dst src va_s0 sb va_s1 f /\
       (ME.buffer_readable VS.(va_s1.mem) (as_vale_buffer src) /\
        ME.buffer_readable VS.(va_s1.mem) (as_vale_buffer dst)) /\       
       ME.modifies (ME.loc_union (ME.loc_buffer (as_vale_buffer sb))
                   (ME.loc_union (ME.loc_buffer (as_vale_buffer dst))
                                 ME.loc_none)) va_s0.VS.mem va_s1.VS.mem
 ))
 =  let va_s1, f = VM.va_lemma_memcpy code va_s0 IA.win (as_vale_buffer sb) (as_vale_buffer dst) (as_vale_buffer src) in
    assert (ME.modifies (ME.loc_buffer (as_vale_buffer dst)) va_s0.VS.mem va_s1.VS.mem);
    //modifies clause in the postcondition should follow automatically by weakening
    //but seems to require a bunch of hand-holding
    ME.loc_includes_union_l (ME.loc_buffer (as_vale_buffer dst)) ME.loc_none (ME.loc_buffer (as_vale_buffer dst));

    let l = (ME.loc_union (ME.loc_buffer (as_vale_buffer dst))
                                      ME.loc_none) in
    assert (ME.modifies l va_s0.VS.mem va_s1.VS.mem);
    ME.loc_includes_union_l (ME.loc_buffer (as_vale_buffer sb)) l l;
    assert (ME.modifies (ME.loc_union (ME.loc_buffer (as_vale_buffer sb)) l)
                        va_s0.VS.mem va_s1.VS.mem);
    assert (ME.buffer_readable VS.(va_s1.mem) (as_vale_buffer dst));
    assert (ME.buffer_readable VS.(va_s1.mem) (as_vale_buffer src));    
    va_s1, f

(* Prove that vm_lemma' has the required type *)
let vm_lemma = as_t #(VSig.vale_sig vm_pre vm_post) vm_lemma'

let code_memcpy = VM.va_code_memcpy IA.win


(* Here's the type expected for the memcpy wrapper *)
[@__reduce__]
let lowstar_memcpy_t =
  IX64.as_lowstar_sig_t_weak
    Interop.down_mem
    code_memcpy
    24
    vm_dom
    []
    _
    _
    (W.mk_prediction code_memcpy vm_dom [] (vm_lemma code_memcpy IA.win))

(* And here's the memcpy wrapper itself *)
let lowstar_memcpy : lowstar_memcpy_t  =
  IX64.wrap_weak
    Interop.down_mem
    code_memcpy
    24
    vm_dom
    (W.mk_prediction code_memcpy vm_dom [] (vm_lemma code_memcpy IA.win))

let lowstar_memcpy_normal_t //: normal lowstar_memcpy_t
  = as_normal_t #lowstar_memcpy_t lowstar_memcpy
module B = LowStar.Monotonic.Buffer
open FStar.HyperStack.ST

module M = X64.Memory

let test (x:b64) = assert (V.buffer_length (as_vale_buffer x) == B.length x / 8)

module T = FStar.Tactics
#reset-options "--using_facts_from '* -FStar.Tactics -FStar.Reflection'"
module LBV = LowStar.BufferView
val lbv_as_seq_eq (#a #b:Type) (#rrel #rel:B.srel a) (x y: B.mbuffer a rrel rel) (v:LBV.view a b) (h:_)
  : Lemma
    (requires (B.length x == B.length y /\
               B.length x % LBV.View?.n v == 0 /\
               Seq.equal (LBV.as_seq h (LBV.mk_buffer_view x v))
                         (LBV.as_seq h (LBV.mk_buffer_view y v))))
    (ensures (Seq.equal (B.as_seq h x) (B.as_seq h y)))
let lbv_as_seq_eq #a #b #rrel #rel x y v h =
  let vx = LBV.mk_buffer_view x v in 
  let vy = LBV.mk_buffer_view y v in
  LBV.as_buffer_mk_buffer_view x v;
  LBV.as_buffer_mk_buffer_view y v;  
  assert (LBV.as_buffer vx === x);
  assert (LBV.as_buffer vy === y);
  let aux (i:nat{i < B.length x})
    : Lemma (Seq.index (B.as_seq h x) i == Seq.index (B.as_seq h y) i)
    = admit()
  in
  FStar.Classical.forall_intro aux


let loc_disjoint_sym (x y:ME.loc)
   : Lemma (ME.loc_disjoint x y <==> ME.loc_disjoint y x)
           [SMTPat (ME.loc_disjoint x y)]
   = admit()

//#reset-options "--print_implicits"
let memcpy_test (dst:b8{B.length dst % 8 == 0}) (src:b8{B.length src % 8 == 0})
  : Stack unit
    (requires fun h0 ->
      B.live h0 dst /\
      B.live h0 src /\
      B.disjoint dst src /\
      B.length dst == 16 /\
      B.length src == 16)
    (ensures fun h0 _ h1 ->
      B.modifies (B.loc_buffer dst) h0 h1 /\
      B.live h1 src /\
      B.live h1 dst /\
      B.as_seq h1 dst == B.as_seq h1 src)
//  by (T.dump "A") (* in case you want to look at the VC *)
  = let _ = lowstar_memcpy_normal_t dst src () in //This is a call to the interop wrapper
    let h1 = get () in
    lbv_as_seq_eq dst src Views.view64 h1 //And a lemma to rephrase the Vale postcondition 
                                          //with equalities of buffer views
                                          //back to equalities of buffers


(*
   Some things to fix up
   
   -- Supporting return values

*)
