module Test.Vectors.Curve25519

module B = LowStar.Buffer

#set-options "--max_fuel 0 --max_ifuel 0"

let private_0: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x77uy; 0x07uy; 0x6duy; 0x0auy; 0x73uy; 0x18uy; 0xa5uy; 0x7duy; 0x3cuy; 0x16uy; 0xc1uy; 0x72uy; 0x51uy; 0xb2uy; 0x66uy; 0x45uy; 0xdfuy; 0x4cuy; 0x2fuy; 0x87uy; 0xebuy; 0xc0uy; 0x99uy; 0x2auy; 0xb1uy; 0x77uy; 0xfbuy; 0xa5uy; 0x1duy; 0xb9uy; 0x2cuy; 0x2auy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let private_0_len: (x:UInt32.t { UInt32.v x = B.length private_0 }) =
  32ul

let public0: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0xdeuy; 0x9euy; 0xdbuy; 0x7duy; 0x7buy; 0x7duy; 0xc1uy; 0xb4uy; 0xd3uy; 0x5buy; 0x61uy; 0xc2uy; 0xecuy; 0xe4uy; 0x35uy; 0x37uy; 0x3fuy; 0x83uy; 0x43uy; 0xc8uy; 0x5buy; 0x78uy; 0x67uy; 0x4duy; 0xaduy; 0xfcuy; 0x7euy; 0x14uy; 0x6fuy; 0x88uy; 0x2buy; 0x4fuy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let public0_len: (x:UInt32.t { UInt32.v x = B.length public0 }) =
  32ul

let result0: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x4auy; 0x5duy; 0x9duy; 0x5buy; 0xa4uy; 0xceuy; 0x2duy; 0xe1uy; 0x72uy; 0x8euy; 0x3buy; 0xf4uy; 0x80uy; 0x35uy; 0x0fuy; 0x25uy; 0xe0uy; 0x7euy; 0x21uy; 0xc9uy; 0x47uy; 0xd1uy; 0x9euy; 0x33uy; 0x76uy; 0xf0uy; 0x9buy; 0x3cuy; 0x1euy; 0x16uy; 0x17uy; 0x42uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let result0_len: (x:UInt32.t { UInt32.v x = B.length result0 }) =
  32ul

inline_for_extraction let valid0 = true

let private_1: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x5duy; 0xabuy; 0x08uy; 0x7euy; 0x62uy; 0x4auy; 0x8auy; 0x4buy; 0x79uy; 0xe1uy; 0x7fuy; 0x8buy; 0x83uy; 0x80uy; 0x0euy; 0xe6uy; 0x6fuy; 0x3buy; 0xb1uy; 0x29uy; 0x26uy; 0x18uy; 0xb6uy; 0xfduy; 0x1cuy; 0x2fuy; 0x8buy; 0x27uy; 0xffuy; 0x88uy; 0xe0uy; 0xebuy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let private_1_len: (x:UInt32.t { UInt32.v x = B.length private_1 }) =
  32ul

let public1: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x85uy; 0x20uy; 0xf0uy; 0x09uy; 0x89uy; 0x30uy; 0xa7uy; 0x54uy; 0x74uy; 0x8buy; 0x7duy; 0xdcuy; 0xb4uy; 0x3euy; 0xf7uy; 0x5auy; 0x0duy; 0xbfuy; 0x3auy; 0x0duy; 0x26uy; 0x38uy; 0x1auy; 0xf4uy; 0xebuy; 0xa4uy; 0xa9uy; 0x8euy; 0xaauy; 0x9buy; 0x4euy; 0x6auy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let public1_len: (x:UInt32.t { UInt32.v x = B.length public1 }) =
  32ul

let result1: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x4auy; 0x5duy; 0x9duy; 0x5buy; 0xa4uy; 0xceuy; 0x2duy; 0xe1uy; 0x72uy; 0x8euy; 0x3buy; 0xf4uy; 0x80uy; 0x35uy; 0x0fuy; 0x25uy; 0xe0uy; 0x7euy; 0x21uy; 0xc9uy; 0x47uy; 0xd1uy; 0x9euy; 0x33uy; 0x76uy; 0xf0uy; 0x9buy; 0x3cuy; 0x1euy; 0x16uy; 0x17uy; 0x42uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let result1_len: (x:UInt32.t { UInt32.v x = B.length result1 }) =
  32ul

inline_for_extraction let valid1 = true

let private_2: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x01uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let private_2_len: (x:UInt32.t { UInt32.v x = B.length private_2 }) =
  32ul

let public2: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x25uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let public2_len: (x:UInt32.t { UInt32.v x = B.length public2 }) =
  32ul

let result2: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x3cuy; 0x77uy; 0x77uy; 0xcauy; 0xf9uy; 0x97uy; 0xb2uy; 0x64uy; 0x41uy; 0x60uy; 0x77uy; 0x66uy; 0x5buy; 0x4euy; 0x22uy; 0x9duy; 0x0buy; 0x95uy; 0x48uy; 0xdcuy; 0x0cuy; 0xd8uy; 0x19uy; 0x98uy; 0xdduy; 0xcduy; 0xc5uy; 0xc8uy; 0x53uy; 0x3cuy; 0x79uy; 0x7fuy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let result2_len: (x:UInt32.t { UInt32.v x = B.length result2 }) =
  32ul

inline_for_extraction let valid2 = true

let private_3: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x01uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let private_3_len: (x:UInt32.t { UInt32.v x = B.length private_3 }) =
  32ul

let public3: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; 0xffuy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let public3_len: (x:UInt32.t { UInt32.v x = B.length public3 }) =
  32ul

let result3: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0xb3uy; 0x2duy; 0x13uy; 0x62uy; 0xc2uy; 0x48uy; 0xd6uy; 0x2fuy; 0xe6uy; 0x26uy; 0x19uy; 0xcfuy; 0xf0uy; 0x4duy; 0xd4uy; 0x3duy; 0xb7uy; 0x3fuy; 0xfcuy; 0x1buy; 0x63uy; 0x08uy; 0xeduy; 0xe3uy; 0x0buy; 0x78uy; 0xd8uy; 0x73uy; 0x80uy; 0xf1uy; 0xe8uy; 0x34uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let result3_len: (x:UInt32.t { UInt32.v x = B.length result3 }) =
  32ul

inline_for_extraction let valid3 = true

let private_4: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0xa5uy; 0x46uy; 0xe3uy; 0x6buy; 0xf0uy; 0x52uy; 0x7cuy; 0x9duy; 0x3buy; 0x16uy; 0x15uy; 0x4buy; 0x82uy; 0x46uy; 0x5euy; 0xdduy; 0x62uy; 0x14uy; 0x4cuy; 0x0auy; 0xc1uy; 0xfcuy; 0x5auy; 0x18uy; 0x50uy; 0x6auy; 0x22uy; 0x44uy; 0xbauy; 0x44uy; 0x9auy; 0xc4uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let private_4_len: (x:UInt32.t { UInt32.v x = B.length private_4 }) =
  32ul

let public4: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0xe6uy; 0xdbuy; 0x68uy; 0x67uy; 0x58uy; 0x30uy; 0x30uy; 0xdbuy; 0x35uy; 0x94uy; 0xc1uy; 0xa4uy; 0x24uy; 0xb1uy; 0x5fuy; 0x7cuy; 0x72uy; 0x66uy; 0x24uy; 0xecuy; 0x26uy; 0xb3uy; 0x35uy; 0x3buy; 0x10uy; 0xa9uy; 0x03uy; 0xa6uy; 0xd0uy; 0xabuy; 0x1cuy; 0x4cuy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let public4_len: (x:UInt32.t { UInt32.v x = B.length public4 }) =
  32ul

let result4: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0xc3uy; 0xdauy; 0x55uy; 0x37uy; 0x9duy; 0xe9uy; 0xc6uy; 0x90uy; 0x8euy; 0x94uy; 0xeauy; 0x4duy; 0xf2uy; 0x8duy; 0x08uy; 0x4fuy; 0x32uy; 0xecuy; 0xcfuy; 0x03uy; 0x49uy; 0x1cuy; 0x71uy; 0xf7uy; 0x54uy; 0xb4uy; 0x07uy; 0x55uy; 0x77uy; 0xa2uy; 0x85uy; 0x52uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let result4_len: (x:UInt32.t { UInt32.v x = B.length result4 }) =
  32ul

inline_for_extraction let valid4 = true

let private_5: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x01uy; 0x02uy; 0x03uy; 0x04uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let private_5_len: (x:UInt32.t { UInt32.v x = B.length private_5 }) =
  32ul

let public5: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let public5_len: (x:UInt32.t { UInt32.v x = B.length public5 }) =
  32ul

let result5: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let result5_len: (x:UInt32.t { UInt32.v x = B.length result5 }) =
  32ul

inline_for_extraction let valid5 = false

let private_6: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x02uy; 0x04uy; 0x06uy; 0x08uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let private_6_len: (x:UInt32.t { UInt32.v x = B.length private_6 }) =
  32ul

let public6: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0xe0uy; 0xebuy; 0x7auy; 0x7cuy; 0x3buy; 0x41uy; 0xb8uy; 0xaeuy; 0x16uy; 0x56uy; 0xe3uy; 0xfauy; 0xf1uy; 0x9fuy; 0xc4uy; 0x6auy; 0xdauy; 0x09uy; 0x8duy; 0xebuy; 0x9cuy; 0x32uy; 0xb1uy; 0xfduy; 0x86uy; 0x62uy; 0x05uy; 0x16uy; 0x5fuy; 0x49uy; 0xb8uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let public6_len: (x:UInt32.t { UInt32.v x = B.length public6 }) =
  32ul

let result6: (b: B.buffer UInt8.t { B.length b = 32 /\ B.recallable b }) =
  [@inline_let] let l = [ 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; 0x00uy; ] in
  assert_norm (List.Tot.length l = 32);
  B.gcmalloc_of_list HyperStack.root l

inline_for_extraction let result6_len: (x:UInt32.t { UInt32.v x = B.length result6 }) =
  32ul

inline_for_extraction let valid6 = false

noeq
type vector = | Vector:
  result: B.buffer UInt8.t { B.recallable result } ->
  result_len: UInt32.t { B.length result = UInt32.v result_len } ->
  public: B.buffer UInt8.t { B.recallable public } ->
  public_len: UInt32.t { B.length public = UInt32.v public_len } ->
  private_: B.buffer UInt8.t { B.recallable private_ } ->
  private__len: UInt32.t { B.length private_ = UInt32.v private__len } ->
  valid: bool ->
  vector

let vectors: (b: B.buffer vector { B.length b = 7 /\ B.recallable b }) =
  [@inline_let] let l = [ 
    Vector result0 result0_len public0 public0_len private_0 private_0_len valid0;
    Vector result1 result1_len public1 public1_len private_1 private_1_len valid1;
    Vector result2 result2_len public2 public2_len private_2 private_2_len valid2;
    Vector result3 result3_len public3 public3_len private_3 private_3_len valid3;
    Vector result4 result4_len public4 public4_len private_4 private_4_len valid4;
    Vector result5 result5_len public5 public5_len private_5 private_5_len valid5;
    Vector result6 result6_len public6 public6_len private_6 private_6_len valid6;
  ] in
  assert_norm (List.Tot.length l = 7);
  B.gcmalloc_of_list HyperStack.root l

let vectors_len: (x:UInt32.t { UInt32.v x = B.length vectors }) =
  7ul