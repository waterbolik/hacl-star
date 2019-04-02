/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: /home/jonathan/Code/kremlin/krml -bundle Hacl.Spec.*,Spec.*[rename=Hacl_Spec] -bundle Hacl.Poly1305.Field32xN.Lemmas[rename=Hacl_Lemmas] -bundle Lib.*[rename=Hacl_Lib] -drop Lib.IntVector.Intrinsics -add-include "libintvector.h" -add-include "evercrypt_targetconfig.h" -drop EverCrypt.TargetConfig -bundle Test,Test.*,Hacl.Test.* -bundle EverCrypt.BCrypt -bundle EverCrypt.OpenSSL -bundle MerkleTree.Spec,MerkleTree.Spec.*,MerkleTree.New.High,MerkleTree.New.High.* -bundle Vale.Stdcalls.*,Interop,Interop.*,Fadd_stdcalls,Cpuid_stdcalls,Fswap_stdcalls,Fmul_stdcalls,Fsqr_stdcalls,Fsub_stdcalls,Poly_stdcalls,Sha_stdcalls,GCMencrypt_stdcalls,GCMencryptOpt_stdcalls,AES_stdcalls,AEShash_stdcalls,GCMencryptOpt256_stdcalls,GCMdecrypt_stdcalls[rename=Vale] -bundle Fadd_inline,Fmul_inline,Fsqr_inline,Fswap_inline[rename=Vale_Inline] -bundle FStar.Tactics.CanonCommMonoid,FStar.Tactics.CanonCommSemiring,FStar.Tactics.CanonCommSwaps[rename=Unused] -bundle FastUtil_helpers,FastHybrid_helpers,FastSqr_helpers,FastMul_helpers[rename=Unused2] -bundle Opaque_s,Map16,Test.Vale_memcpy,Fast_defs,Interop_Printer,Memcpy[rename=Unused3] -bundle X64.*,Arch.*,Words.*,Vale.*,Collections.*,Collections,SHA_helpers[rename=Unused4] -bundle Prop_s,Types_s,Words_s,Views,AES_s,Workarounds,Math.*,Interop,TypesNative_s[rename=Unused5] -bundle GF128_s,GF128,Poly1305.*,GCTR,GCTR_s,GHash_s,GCM_helpers,GHash[rename=Unused6] -bundle AES_helpers,AES256_helpers,GCM_s,GCM,Interop_assumptions[rename=Unused7] -library Vale.Stdcalls.* -static-header Vale_Inline -library Fadd_inline -library Fmul_inline -library Fswap_inline -library Fsqr_inline -no-prefix Vale.Stdcalls.* -no-prefix Fadd_inline -no-prefix Fmul_inline -no-prefix Fswap_inline -no-prefix Fsqr_inline -no-prefix EverCrypt.Vale -add-include "curve25519-inline.h" -no-prefix MerkleTree.New.Low -no-prefix MerkleTree.New.Low.Serialization -fparentheses -fno-shadow -fcurly-braces -bundle EverCrypt -bundle Hacl.Hash.MD5+Hacl.Hash.Core.MD5+Hacl.Hash.SHA1+Hacl.Hash.Core.SHA1+Hacl.Hash.SHA2+Hacl.Hash.Core.SHA2+Hacl.Hash.Core.SHA2.Constants=Hacl.Hash.*[rename=Hacl_Hash] -bundle Hacl.Impl.SHA3+Hacl.SHA3=[rename=Hacl_SHA3] -bundle Hacl.Poly1305_32+Hacl.Poly1305_128+Hacl.Poly1305_256=Hacl.Poly1305.*,Hacl.Impl.Poly1305,Hacl.Impl.Poly1305.*[rename=Hacl_Poly1305] -bundle Hacl.Impl.Chacha20=Hacl.Impl.Chacha20.*[rename=Hacl_Chacha20] -bundle Hacl.Curve25519_51+Hacl.Curve25519_64=Hacl.Impl.Curve25519.*[rename=Hacl_Curve25519] -bundle Hacl.Impl.Chacha20Poly1305=Hacl.Impl.Chacha20Poly1305.*[rename=Hacl_Chacha20Poly1305] -bundle LowStar.* -bundle Prims,C.Failure,C,C.String,C.Loops,Spec.Loops,C.Endianness,FStar.*[rename=Hacl_Kremlib] -bundle EverCrypt.Spec.* -bundle MerkleTree.New.Low+MerkleTree.New.Low.Serialization=[rename=MerkleTree] -bundle Test,Test.*,WindowsHack -bundle EverCrypt.Hash+EverCrypt.Hash.Incremental=[rename=EverCrypt_Hash] -library EverCrypt.AutoConfig,EverCrypt.OpenSSL,EverCrypt.BCrypt -minimal -add-include "kremlin/internal/types.h" -add-include "kremlin/internal/target.h" -add-include "kremlin/lowstar_endianness.h" -add-include <string.h> -tmpdir dist/compact/ -skip-compilation obj/prims.krml obj/FStar_Pervasives_Native.krml obj/FStar_Pervasives.krml obj/Prop_s.krml obj/FStar_Exn.krml obj/FStar_Squash.krml obj/FStar_Classical.krml obj/FStar_FunctionalExtensionality.krml obj/FStar_Set.krml obj/FStar_Preorder.krml obj/FStar_Monotonic_Witnessed.krml obj/FStar_Ghost.krml obj/FStar_ErasedLogic.krml obj/FStar_StrongExcludedMiddle.krml obj/FStar_PropositionalExtensionality.krml obj/FStar_PredicateExtensionality.krml obj/FStar_TSet.krml obj/FStar_Monotonic_Heap.krml obj/FStar_Heap.krml obj/FStar_ST.krml obj/FStar_All.krml obj/FStar_Map.krml obj/FStar_List_Tot_Base.krml obj/FStar_List_Tot_Properties.krml obj/FStar_List_Tot.krml obj/FStar_Seq_Base.krml obj/FStar_Mul.krml obj/FStar_Calc.krml obj/FStar_Seq_Properties.krml obj/FStar_Seq.krml obj/FStar_Math_Lib.krml obj/FStar_Math_Lemmas.krml obj/FStar_BitVector.krml obj/FStar_UInt.krml obj/FStar_UInt32.krml obj/FStar_UInt8.krml obj/FStar_Monotonic_HyperHeap.krml obj/FStar_Monotonic_HyperStack.krml obj/FStar_HyperStack.krml obj/FStar_HyperStack_ST.krml obj/FStar_Universe.krml obj/FStar_GSet.krml obj/FStar_ModifiesGen.krml obj/FStar_Range.krml obj/FStar_Reflection_Types.krml obj/FStar_Tactics_Types.krml obj/FStar_Tactics_Result.krml obj/FStar_Tactics_Effect.krml obj/FStar_Tactics_Util.krml obj/FStar_Reflection_Data.krml obj/FStar_Reflection_Const.krml obj/FStar_Char.krml obj/FStar_List.krml obj/FStar_String.krml obj/FStar_Order.krml obj/FStar_Reflection_Basic.krml obj/FStar_Reflection_Derived.krml obj/FStar_Tactics_Builtins.krml obj/FStar_Reflection_Formula.krml obj/FStar_Reflection_Derived_Lemmas.krml obj/FStar_Reflection.krml obj/FStar_Tactics_Derived.krml obj/FStar_Tactics_Logic.krml obj/FStar_Tactics.krml obj/FStar_BigOps.krml obj/LowStar_Monotonic_Buffer.krml obj/LowStar_Buffer.krml obj/LowStar_Modifies.krml obj/LowStar_ModifiesPat.krml obj/LowStar_BufferView_Down.krml obj/LowStar_BufferView_Up.krml obj/LowStar_BufferView.krml obj/BufferViewHelpers.krml obj/FStar_UInt64.krml obj/FStar_UInt16.krml obj/Words_s.krml obj/Collections_Seqs_s.krml obj/Words_Four_s.krml obj/Words_Two_s.krml obj/Words_Seq_s.krml obj/Opaque_s.krml obj/Types_s.krml obj/X64_Machine_s.krml obj/AES_s.krml obj/Math_Poly2_Defs_s.krml obj/Math_Poly2_s.krml obj/Math_Poly2_Bits_s.krml obj/Vale_Set.krml obj/FStar_HyperStack_All.krml obj/FStar_Kremlin_Endianness.krml obj/FStar_Int.krml obj/FStar_Int64.krml obj/FStar_Int63.krml obj/FStar_Int32.krml obj/FStar_Int16.krml obj/FStar_Int8.krml obj/FStar_UInt63.krml obj/FStar_Int_Cast.krml obj/FStar_UInt128.krml obj/Spec_Hash_Definitions.krml obj/Spec_Hash_Lemmas0.krml obj/Spec_Hash_PadFinish.krml obj/Spec_Loops.krml obj/Spec_SHA2_Constants.krml obj/Spec_SHA2.krml obj/X64_CryptoInstructions_s.krml obj/X64_CPU_Features_s.krml obj/X64_Bytes_Semantics_s.krml obj/FStar_Float.krml obj/FStar_BaseTypes.krml obj/X64_Taint_Semantics_s.krml obj/LowStar_ImmutableBuffer.krml obj/Util_Meta.krml obj/Words_Two.krml obj/Collections_Seqs.krml obj/TypesNative_s.krml obj/Arch_TypesNative.krml obj/Words_Seq.krml obj/Arch_Types.krml obj/Views.krml obj/Interop_Types.krml obj/Interop_Base.krml obj/X64_Bytes_Semantics.krml obj/Interop.krml obj/Fast_lemmas_internal.krml obj/Fast_defs.krml obj/FStar_Tactics_CanonCommSwaps.krml obj/FStar_Algebra_CommMonoid.krml obj/FStar_Tactics_CanonCommMonoid.krml obj/FStar_Tactics_CanonCommSemiring.krml obj/FastUtil_helpers.krml obj/FastHybrid_helpers.krml obj/Fast_lemmas_external.krml obj/Map16.krml obj/X64_Vale_Xmms.krml obj/X64_Vale_Regs.krml obj/FStar_IO.krml obj/X64_Stack_i.krml obj/X64_Stack_Sems.krml obj/X64_Memory.krml obj/X64_BufferViewStore.krml obj/X64_Memory_Sems.krml obj/X64_Vale_State.krml obj/X64_Vale_StateLemmas.krml obj/X64_Vale_Lemmas.krml obj/X64_Print_s.krml obj/X64_Vale_Decls.krml obj/X64_Vale_QuickCode.krml obj/X64_Vale_QuickCodes.krml obj/X64_Taint_Semantics.krml obj/X64_Vale_InsLemmas.krml obj/X64_Vale_InsBasic.krml obj/X64_Vale_InsMem.krml obj/X64_Vale_InsVector.krml obj/X64_Vale_InsStack.krml obj/X64_FastHybrid.krml obj/FastSqr_helpers.krml obj/X64_FastSqr.krml obj/FastMul_helpers.krml obj/X64_FastMul.krml obj/X64_FastWide.krml obj/X64_FastUtil.krml obj/Interop_Assumptions.krml obj/Interop_X64.krml obj/X64_Print_Inline_s.krml obj/X64_MemoryAdapters.krml obj/Vale_AsLowStar_ValeSig.krml obj/Vale_AsLowStar_LowStarSig.krml obj/Vale_AsLowStar_MemoryHelpers.krml obj/Vale_AsLowStar_Wrapper.krml obj/Vale_Stdcalls_Fadd.krml obj/Fadd_stdcalls.krml obj/Fsqr_inline.krml obj/X64_Stack.krml obj/X64_Vale_InsAes.krml obj/Math_Poly2_Defs.krml obj/Math_Poly2.krml obj/Math_Poly2_Lemmas.krml obj/Math_Poly2_Bits.krml obj/Math_Poly2_Words.krml obj/GF128_s.krml obj/GF128.krml obj/X64_GF128_Mul.krml obj/FStar_BV.krml obj/FStar_Reflection_Arith.krml obj/FStar_Tactics_BV.krml obj/Vale_Bv_s.krml obj/Math_Bits.krml obj/Vale_Tactics.krml obj/X64_Poly1305_Bitvectors.krml obj/Math_Lemmas_Int.krml obj/FStar_Tactics_Canon.krml obj/Poly1305_Spec_s.krml obj/X64_Poly1305_Math.krml obj/Workarounds.krml obj/GCTR_s.krml obj/GCM_helpers.krml obj/GHash_s.krml obj/OptPublic.krml obj/GHash.krml obj/X64_GHash.krml obj/GCTR.krml obj/AES_helpers.krml obj/X64_AESCTR.krml obj/X64_AESCTRplain.krml obj/AES256_helpers.krml obj/X64_AES256.krml obj/X64_AES128.krml obj/X64_AES.krml obj/X64_GCTR.krml obj/GCM_s.krml obj/GCM.krml obj/X64_GCMencrypt.krml obj/Test_Vale_memcpy.krml obj/Lib_LoopCombinators.krml obj/FStar_Int_Cast_Full.krml obj/Lib_IntTypes.krml obj/Lib_Sequence.krml obj/Spec_SHA3_Constants.krml obj/Spec_SHA1.krml obj/Spec_MD5.krml obj/Spec_Hash.krml obj/Spec_Hash_Incremental.krml obj/Spec_Hash_Lemmas.krml obj/LowStar_BufferOps.krml obj/C_Loops.krml obj/C_Endianness.krml obj/Hacl_Hash_Lemmas.krml obj/Hacl_Hash_Definitions.krml obj/Hacl_Hash_PadFinish.krml obj/Hacl_Hash_MD.krml obj/SHA_helpers.krml obj/X64_Vale_InsSha.krml obj/X64_SHA.krml obj/Vale_Stdcalls_Sha.krml obj/Simplify_Sha.krml obj/Sha_stdcalls.krml obj/Hacl_Hash_Core_SHA2_Constants.krml obj/Hacl_Hash_Core_SHA2.krml obj/Hacl_Hash_SHA2.krml obj/Hacl_Hash_Core_SHA1.krml obj/Hacl_Hash_SHA1.krml obj/Hacl_Hash_Core_MD5.krml obj/Hacl_Hash_MD5.krml obj/C.krml obj/C_String.krml obj/C_Failure.krml obj/FStar_Int128.krml obj/FStar_Int31.krml obj/FStar_UInt31.krml obj/FStar_Integers.krml obj/EverCrypt_StaticConfig.krml obj/X64_Cpuid.krml obj/X64_Cpuidstdcall.krml obj/Vale_Stdcalls_Cpuid.krml obj/Cpuid_stdcalls.krml obj/EverCrypt_TargetConfig.krml obj/EverCrypt_AutoConfig2.krml obj/EverCrypt_Helpers.krml obj/EverCrypt_Hash.krml obj/Lib_RawIntTypes.krml obj/Lib_Loops.krml obj/Lib_ByteSequence.krml obj/Hacl_Impl_Curve25519_Lemmas.krml obj/Spec_Curve25519_Lemmas.krml obj/Spec_Curve25519.krml obj/Hacl_Spec_Curve25519_Field51_Definition.krml obj/Hacl_Spec_Curve25519_Field51_Lemmas.krml obj/Hacl_Spec_Curve25519_Field51.krml obj/Lib_Buffer.krml obj/Hacl_Impl_Curve25519_Field51.krml obj/LowStar_Vector.krml obj/LowStar_Regional.krml obj/LowStar_RVector.krml obj/Hacl_Spec_Curve25519_AddAndDouble.krml obj/Hacl_Spec_Curve25519_Field64_Definition.krml obj/Hacl_Spec_Curve25519_Field64_Lemmas.krml obj/Hacl_Spec_Curve25519_Field64_Core.krml obj/Hacl_Spec_Curve25519_Field64.krml obj/Vale_Stdcalls_Fswap.krml obj/Fswap_stdcalls.krml obj/Fswap_inline.krml obj/Vale_Stdcalls_Fsqr.krml obj/Fsqr_stdcalls.krml obj/Vale_Stdcalls_Fmul.krml obj/Fmul_stdcalls.krml obj/Fmul_inline.krml obj/Vale_Stdcalls_Fsub.krml obj/Fsub_stdcalls.krml obj/Fadd_inline.krml obj/Hacl_Impl_Curve25519_Field64_Core.krml obj/Hacl_Impl_Curve25519_Field64.krml obj/Hacl_Impl_Curve25519_Fields.krml obj/Lib_ByteBuffer.krml obj/Hacl_Impl_Curve25519_AddAndDouble.krml obj/Lib_IntVector_Intrinsics.krml obj/Lib_IntVector.krml obj/X64_PolyOps.krml obj/Vale_Stdcalls_Aes.krml obj/Spec_Chacha20.krml obj/Hacl_Impl_Chacha20_Core32.krml obj/Hacl_Impl_Chacha20.krml obj/Spec_Poly1305.krml obj/Hacl_Spec_Poly1305_Vec.krml obj/Lib_Unlib.krml obj/X64_Poly1305_Util.krml obj/X64_Poly1305.krml obj/Vale_Stdcalls_Poly.krml obj/Poly_stdcalls.krml obj/FStar_Endianness.krml obj/Arch_BufferFriend.krml obj/Hacl_Impl_Poly1305_Lemmas.krml obj/Hacl_Spec_Poly1305_Field32xN.krml obj/Hacl_Poly1305_Field32xN_Lemmas.krml obj/Hacl_Spec_Poly1305_Field32xN_Lemmas.krml obj/Hacl_Impl_Poly1305_Field32xN.krml obj/Hacl_Impl_Poly1305_Fields.krml obj/Hacl_Spec_Poly1305_Equiv.krml obj/Hacl_Impl_Poly1305.krml obj/Spec_Chacha20Poly1305.krml obj/Hacl_Impl_Chacha20Poly1305_PolyCore.krml obj/Hacl_Impl_Chacha20Poly1305_Poly.krml obj/Hacl_Impl_Chacha20Poly1305.krml obj/FStar_Dyn.krml obj/EverCrypt_Vale.krml obj/EverCrypt_Specs.krml obj/EverCrypt_OpenSSL.krml obj/EverCrypt_Hacl.krml obj/EverCrypt_BCrypt.krml obj/EverCrypt_Cipher.krml obj/Hacl_Spec_Curve25519_Finv.krml obj/Hacl_Impl_Curve25519_Finv.krml obj/Hacl_Impl_Curve25519_Generic.krml obj/Hacl_Curve25519_51.krml obj/Hacl_Curve25519_64.krml obj/EverCrypt_Curve25519.krml obj/Hacl_Poly1305_32.krml obj/Poly1305_Equiv.krml obj/X64_Poly1305_CallingFromLowStar.krml obj/Hacl_Poly1305_128.krml obj/Hacl_Poly1305_256.krml obj/EverCrypt_Poly1305.krml obj/EverCrypt_HMAC.krml obj/EverCrypt_HKDF.krml obj/EverCrypt.krml obj/MerkleTree_Spec.krml obj/Gcm_simplify.krml obj/Vale_Stdcalls_GCMencrypt.krml obj/GCMencrypt_stdcalls.krml obj/MerkleTree_New_High.krml obj/LowStar_Regional_Instances.krml obj/MerkleTree_New_Low.krml obj/MerkleTree_New_Low_Serialization.krml obj/X64_Leakage_s.krml obj/X64_Leakage_Helpers.krml obj/X64_GCMdecrypt.krml obj/Vale_Stdcalls_GCMdecrypt.krml obj/GCMdecrypt_stdcalls.krml obj/X64_AESopt2.krml obj/X64_AESGCM.krml obj/X64_GCMencryptOpt.krml obj/Vale_Stdcalls_GCMencryptOpt.krml obj/GCMencryptOpt256_stdcalls.krml obj/GCMencryptOpt_stdcalls.krml obj/X64_GF128_Init.krml obj/Vale_Stdcalls_AesHash.krml obj/AEShash_stdcalls.krml obj/AES_stdcalls.krml obj/Spec_AEAD.krml obj/EverCrypt_AEAD.krml obj/MerkleTree_New_High_Correct_Base.krml obj/MerkleTree_New_High_Correct_Rhs.krml obj/MerkleTree_New_High_Correct_Path.krml obj/MerkleTree_New_High_Correct_Flushing.krml obj/MerkleTree_New_High_Correct_Insertion.krml obj/MerkleTree_New_High_Correct.krml obj/EverCrypt_Hash_Incremental.krml obj/Test_Hash.krml obj/Operator.krml obj/Spec_SHA3.krml obj/Hacl_Impl_SHA3.krml obj/TestLib.krml obj/EverCrypt_Chacha20Poly1305.krml obj/Hacl_SHA3.krml obj/Lib_PrintBuffer.krml obj/Hacl_Test_CSHAKE.krml obj/Spec_Hash_Test.krml obj/X64_Leakage_Ins_Xmm.krml obj/X64_Leakage_Ins.krml obj/X64_Leakage.krml obj/Test_Vectors_Chacha20Poly1305.krml obj/Test_Memcpy.krml obj/Lib_RandomBuffer.krml obj/Test_Vectors_Aes128.krml obj/Collections_Lists.krml obj/Hacl_Hash_Agile.krml obj/Hacl_Test_SHA3.krml obj/Test_Vectors_Curve25519.krml obj/Spec_Chacha20Poly1305_Test.krml obj/Test_Vectors_Poly1305.krml obj/Test_Args.krml obj/Vale_AsLowStar_Test.krml obj/Spec_SHA3_Test.krml obj/Test_Lowstarize.krml obj/Test_Vectors.krml obj/Test_Vectors_Aes128Gcm.krml obj/Spec_Curve25519_Test.krml obj/Test.krml obj/Spec_Chacha20_Test.krml obj/X64_AESopt.krml -silent -ccopt -Wno-unused -warn-error @4-6 -fparentheses Hacl_AES.c Hacl_Ed25519.c Lib_RandomBuffer.c Lib_PrintBuffer.c evercrypt_vale_stubs.c -o libevercrypt.a
  F* version: 28a5baa2
  KreMLin version: f534ac02
 */


#ifndef __EverCrypt_Hash_H
#define __EverCrypt_Hash_H

#include "Hacl_Kremlib.h"
#include "Hacl_Hash.h"
#include "EverCrypt_AutoConfig2.h"
#include "Hacl_Spec.h"
#include "libintvector.h"
#include "evercrypt_targetconfig.h"
#include "curve25519-inline.h"
#include "kremlin/internal/types.h"
#include "kremlin/internal/target.h"
#include "kremlin/lowstar_endianness.h"
#include <string.h>

typedef Spec_Hash_Definitions_hash_alg EverCrypt_Hash_alg;

C_String_t EverCrypt_Hash_string_of_alg(Spec_Hash_Definitions_hash_alg uu___0_6);

typedef Spec_Hash_Definitions_hash_alg EverCrypt_Hash_broken_alg;

typedef Spec_Hash_Definitions_hash_alg EverCrypt_Hash_alg13;

uint32_t EverCrypt_Hash_tagLen(Spec_Hash_Definitions_hash_alg a);

uint32_t EverCrypt_Hash_blockLen(Spec_Hash_Definitions_hash_alg a);

typedef void *EverCrypt_Hash_e_alg;

#define EverCrypt_Hash_MD5_s 0
#define EverCrypt_Hash_SHA1_s 1
#define EverCrypt_Hash_SHA2_224_s 2
#define EverCrypt_Hash_SHA2_256_s 3
#define EverCrypt_Hash_SHA2_384_s 4
#define EverCrypt_Hash_SHA2_512_s 5

typedef uint8_t EverCrypt_Hash_state_s_tags;

typedef struct EverCrypt_Hash_state_s_s
{
  EverCrypt_Hash_state_s_tags tag;
  union {
    uint32_t *case_MD5_s;
    uint32_t *case_SHA1_s;
    uint32_t *case_SHA2_224_s;
    uint32_t *case_SHA2_256_s;
    uint64_t *case_SHA2_384_s;
    uint64_t *case_SHA2_512_s;
  }
  ;
}
EverCrypt_Hash_state_s;

bool
EverCrypt_Hash_uu___is_MD5_s(
  Spec_Hash_Definitions_hash_alg uu____259,
  EverCrypt_Hash_state_s projectee
);

uint32_t
*EverCrypt_Hash___proj__MD5_s__item__p(
  Spec_Hash_Definitions_hash_alg uu____287,
  EverCrypt_Hash_state_s projectee
);

bool
EverCrypt_Hash_uu___is_SHA1_s(
  Spec_Hash_Definitions_hash_alg uu____310,
  EverCrypt_Hash_state_s projectee
);

uint32_t
*EverCrypt_Hash___proj__SHA1_s__item__p(
  Spec_Hash_Definitions_hash_alg uu____338,
  EverCrypt_Hash_state_s projectee
);

bool
EverCrypt_Hash_uu___is_SHA2_224_s(
  Spec_Hash_Definitions_hash_alg uu____361,
  EverCrypt_Hash_state_s projectee
);

uint32_t
*EverCrypt_Hash___proj__SHA2_224_s__item__p(
  Spec_Hash_Definitions_hash_alg uu____389,
  EverCrypt_Hash_state_s projectee
);

bool
EverCrypt_Hash_uu___is_SHA2_256_s(
  Spec_Hash_Definitions_hash_alg uu____412,
  EverCrypt_Hash_state_s projectee
);

uint32_t
*EverCrypt_Hash___proj__SHA2_256_s__item__p(
  Spec_Hash_Definitions_hash_alg uu____440,
  EverCrypt_Hash_state_s projectee
);

bool
EverCrypt_Hash_uu___is_SHA2_384_s(
  Spec_Hash_Definitions_hash_alg uu____463,
  EverCrypt_Hash_state_s projectee
);

uint64_t
*EverCrypt_Hash___proj__SHA2_384_s__item__p(
  Spec_Hash_Definitions_hash_alg uu____491,
  EverCrypt_Hash_state_s projectee
);

bool
EverCrypt_Hash_uu___is_SHA2_512_s(
  Spec_Hash_Definitions_hash_alg uu____514,
  EverCrypt_Hash_state_s projectee
);

uint64_t
*EverCrypt_Hash___proj__SHA2_512_s__item__p(
  Spec_Hash_Definitions_hash_alg uu____542,
  EverCrypt_Hash_state_s projectee
);

/*

  val create_in :a: alg -> r: HS.rid
  -> ST (state a)
      (requires (fun _ -> HyperStack.ST.is_eternal_region r))
      (ensures
        (fun h0 s h1 ->
            invariant s h1 /\ M.(modifies loc_none h0 h1) /\
            fresh_loc (footprint s h1) h0 h1 /\
            M.(loc_includes (loc_region_only true r) (footprint s h1)) /\
            freeable h1 s))
*/
EverCrypt_Hash_state_s *EverCrypt_Hash_create_in(Spec_Hash_Definitions_hash_alg a);

/*

  val create :a: alg
  -> ST (state a)
      (requires fun h0 -> True)
      (ensures
        fun h0 s h1 ->
          invariant s h1 /\ M.(modifies loc_none h0 h1) /\
          fresh_loc (footprint s h1) h0 h1 /\ freeable h1 s)
*/
EverCrypt_Hash_state_s *EverCrypt_Hash_create(Spec_Hash_Definitions_hash_alg a);

/*

  val init :#a: e_alg
  -> (let a = Ghost.reveal a in
      s: state a
        -> ST unit
            (requires invariant s)
            (ensures
              fun h0 _ h1 ->
                invariant s h1 /\ repr s h1 == acc0 #a /\
                M.(modifies (footprint s h0) h0 h1) /\
                footprint s h0 == footprint s h1 /\ preserves_freeable s h0 h1))
*/
void EverCrypt_Hash_init(EverCrypt_Hash_state_s *s);

/*

  val update :#a: e_alg
  -> (let a = Ghost.reveal a in
      s: state a -> block: uint8_p{B.length block = block_length a}
        -> Stack unit
            (requires
              fun h0 ->
                invariant s h0 /\ B.live h0 block /\
                M.(loc_disjoint (footprint s h0) (loc_buffer block)))
            (ensures
              fun h0 _ h1 ->
                M.(modifies (footprint s h0) h0 h1) /\
                footprint s h0 == footprint s h1 /\ invariant s h1 /\
                repr s h1 == compress (repr s h0) (B.as_seq h0 block) /\
                preserves_freeable s h0 h1))
*/
void EverCrypt_Hash_update(EverCrypt_Hash_state_s *s, uint8_t *block1);

/*

  val update_multi :#a: e_alg
  -> (let a = Ghost.reveal a in
      
          s: state a ->
          blocks: uint8_p{B.length blocks % block_length a = 0} ->
          len: UInt32.t{v len = B.length blocks}
        -> Stack unit
            (requires
              fun h0 ->
                invariant s h0 /\ B.live h0 blocks /\
                M.(loc_disjoint (footprint s h0) (loc_buffer blocks)))
            (ensures
              fun h0 _ h1 ->
                M.(modifies (footprint s h0) h0 h1) /\
                footprint s h0 == footprint s h1 /\ invariant s h1 /\
                repr s h1 == compress_many (repr s h0) (B.as_seq h0 blocks) /\
                preserves_freeable s h0 h1))
*/
void EverCrypt_Hash_update_multi(EverCrypt_Hash_state_s *s, uint8_t *blocks, uint32_t len1);

/*

  val update_last :#a: e_alg
  -> (let a = Ghost.reveal a in
      
          s: state a ->
          last: uint8_p{B.length last < block_length a} ->
          total_len:
            uint64_t
              { v total_len < max_input_length a /\
                (v total_len - B.length last) % block_length a = 0 }
        -> Stack unit
            (requires
              fun h0 ->
                invariant s h0 /\ B.live h0 last /\
                M.(loc_disjoint (footprint s h0) (loc_buffer last)))
            (ensures
              fun h0 _ h1 ->
                invariant s h1 /\
                (B.length last +
                  Seq.length (Spec.Hash.PadFinish.pad a (v total_len))) %
                block_length a =
                0 /\
                repr s h1 ==
                compress_many (repr s h0)
                  (Seq.append (B.as_seq h0 last)
                      (Spec.Hash.PadFinish.pad a (v total_len))) /\
                M.(modifies (footprint s h0) h0 h1) /\
                footprint s h0 == footprint s h1 /\ preserves_freeable s h0 h1))
*/
void EverCrypt_Hash_update_last(EverCrypt_Hash_state_s *s, uint8_t *last1, uint64_t total_len);

/*

  val finish :#a: e_alg
  -> (let a = Ghost.reveal a in
      s: state a -> dst: uint8_p{B.length dst = hash_length a}
        -> Stack unit
            (requires
              fun h0 ->
                invariant s h0 /\ B.live h0 dst /\
                M.(loc_disjoint (footprint s h0) (loc_buffer dst)))
            (ensures
              fun h0 _ h1 ->
                invariant s h1 /\ M.(modifies (loc_buffer dst) h0 h1) /\
                footprint s h0 == footprint s h1 /\
                B.as_seq h1 dst == extract (repr s h0) /\
                preserves_freeable s h0 h1))
*/
void EverCrypt_Hash_finish(EverCrypt_Hash_state_s *s, uint8_t *dst);

/*

  val free :#a: e_alg
  -> (let a = Ghost.reveal a in
      s: state a
        -> ST unit
            (requires fun h0 -> freeable h0 s /\ invariant s h0)
            (ensures
              fun h0 _ h1 -> let open M in modifies (footprint s h0) h0 h1))
*/
void EverCrypt_Hash_free(EverCrypt_Hash_state_s *s);

/*

  val copy :#a: e_alg
  -> (let a = Ghost.reveal a in
      s_src: state a -> s_dst: state a
        -> Stack unit
            (requires
              (fun h0 ->
                  invariant s_src h0 /\ invariant s_dst h0 /\
                  B.(loc_disjoint (footprint s_src h0) (footprint s_dst h0))))
            (ensures
              fun h0 _ h1 ->
                M.(modifies (footprint s_dst h0) h0 h1) /\
                footprint s_dst h0 == footprint s_dst h1 /\
                preserves_freeable s_dst h0 h1 /\ invariant s_dst h1 /\
                repr s_dst h1 == repr s_src h0))
*/
void EverCrypt_Hash_copy(EverCrypt_Hash_state_s *s_src, EverCrypt_Hash_state_s *s_dst);

/*

  val hash :
    a: alg ->
    dst: uint8_p{B.length dst = hash_length a} ->
    input: uint8_p ->
    len: uint32_t{B.length input = v len /\ v len < max_input_length a}
  -> Stack unit
      (requires
        fun h0 ->
          B.live h0 dst /\ B.live h0 input /\
          M.(loc_disjoint (loc_buffer input) (loc_buffer dst)))
      (ensures
        fun h0 _ h1 ->
          M.(modifies (loc_buffer dst) h0 h1) /\
          B.as_seq h1 dst == Spec.Hash.hash a (B.as_seq h0 input))
*/
void
EverCrypt_Hash_hash(
  Spec_Hash_Definitions_hash_alg a,
  uint8_t *dst,
  uint8_t *input,
  uint32_t len1
);

typedef struct EverCrypt_Hash_Incremental_state_s
{
  EverCrypt_Hash_state_s *hash_state;
  uint8_t *buf;
  uint64_t total_len;
}
EverCrypt_Hash_Incremental_state;

bool
EverCrypt_Hash_Incremental_uu___is_State(
  Spec_Hash_Definitions_hash_alg a,
  EverCrypt_Hash_Incremental_state projectee
);

EverCrypt_Hash_state_s
*EverCrypt_Hash_Incremental___proj__State__item__hash_state(
  Spec_Hash_Definitions_hash_alg a,
  EverCrypt_Hash_Incremental_state projectee
);

uint8_t
*EverCrypt_Hash_Incremental___proj__State__item__buf(
  Spec_Hash_Definitions_hash_alg a,
  EverCrypt_Hash_Incremental_state projectee
);

uint64_t
EverCrypt_Hash_Incremental___proj__State__item__total_len(
  Spec_Hash_Definitions_hash_alg a,
  EverCrypt_Hash_Incremental_state projectee
);

/*

  val create_in :a: Hash.alg -> r: HS.rid
  -> ST (state a)
      (requires (fun _ -> HyperStack.ST.is_eternal_region r))
      (ensures
        (fun h0 s h1 ->
            hashes h1 s S.empty /\ B.(modifies (footprint s h1) h0 h1) /\
            Hash.fresh_loc (footprint s h1) h0 h1 /\
            B.(loc_includes (loc_region_only true r) (footprint s h1)) /\
            freeable s h1))
*/
EverCrypt_Hash_Incremental_state
EverCrypt_Hash_Incremental_create_in(Spec_Hash_Definitions_hash_alg a);

/*

  val update :
    a: Hash.alg ->
    s: state a ->
    prev: G.erased bytes ->
    data: B.buffer UInt8.t ->
    len: UInt32.t
  -> Stack (state a)
      (requires fun h0 -> update_pre a s prev data len h0)
      (ensures fun h0 s' h1 -> update_post a s s' prev data len h0 h1)
*/
EverCrypt_Hash_Incremental_state
EverCrypt_Hash_Incremental_update(
  Spec_Hash_Definitions_hash_alg a,
  EverCrypt_Hash_Incremental_state s,
  uint8_t *data,
  uint32_t len1
);

/*

  val finish :a: Hash.alg -> finish_st a
*/
void
EverCrypt_Hash_Incremental_finish(
  Spec_Hash_Definitions_hash_alg a,
  EverCrypt_Hash_Incremental_state s,
  uint8_t *dst
);

#define __EverCrypt_Hash_H_DEFINED
#endif
