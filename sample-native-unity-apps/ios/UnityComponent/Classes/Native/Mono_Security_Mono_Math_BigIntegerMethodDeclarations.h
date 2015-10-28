#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Math.BigInteger
struct BigInteger_t1475;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1204;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C" void BigInteger__ctor_m8242 (BigInteger_t1475 * __this, int32_t ___sign, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C" void BigInteger__ctor_m8243 (BigInteger_t1475 * __this, BigInteger_t1475 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C" void BigInteger__ctor_m8244 (BigInteger_t1475 * __this, BigInteger_t1475 * ___bi, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C" void BigInteger__ctor_m8245 (BigInteger_t1475 * __this, ByteU5BU5D_t836* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C" void BigInteger__ctor_m8246 (BigInteger_t1475 * __this, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C" void BigInteger__cctor_m8247 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C" RandomNumberGenerator_t1204 * BigInteger_get_Rng_m8248 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C" BigInteger_t1475 * BigInteger_GenerateRandom_m8249 (Object_t * __this /* static, unused */, int32_t ___bits, RandomNumberGenerator_t1204 * ___rng, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C" BigInteger_t1475 * BigInteger_GenerateRandom_m8250 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C" int32_t BigInteger_BitCount_m8251 (BigInteger_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C" bool BigInteger_TestBit_m8252 (BigInteger_t1475 * __this, int32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C" void BigInteger_SetBit_m8253 (BigInteger_t1475 * __this, uint32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C" void BigInteger_SetBit_m8254 (BigInteger_t1475 * __this, uint32_t ___bitNum, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C" int32_t BigInteger_LowestSetBit_m8255 (BigInteger_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C" ByteU5BU5D_t836* BigInteger_GetBytes_m8256 (BigInteger_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C" String_t* BigInteger_ToString_m8257 (BigInteger_t1475 * __this, uint32_t ___radix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C" String_t* BigInteger_ToString_m8258 (BigInteger_t1475 * __this, uint32_t ___radix, String_t* ___characterSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C" void BigInteger_Normalize_m8259 (BigInteger_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C" void BigInteger_Clear_m8260 (BigInteger_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C" int32_t BigInteger_GetHashCode_m8261 (BigInteger_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C" String_t* BigInteger_ToString_m8262 (BigInteger_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C" bool BigInteger_Equals_m8263 (BigInteger_t1475 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C" BigInteger_t1475 * BigInteger_ModInverse_m8264 (BigInteger_t1475 * __this, BigInteger_t1475 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1475 * BigInteger_ModPow_m8265 (BigInteger_t1475 * __this, BigInteger_t1475 * ___exp, BigInteger_t1475 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C" BigInteger_t1475 * BigInteger_GeneratePseudoPrime_m8266 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C" void BigInteger_Incr2_m8267 (BigInteger_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C" BigInteger_t1475 * BigInteger_op_Implicit_m8268 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C" BigInteger_t1475 * BigInteger_op_Implicit_m8269 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1475 * BigInteger_op_Addition_m8270 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1475 * BigInteger_op_Subtraction_m8271 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t BigInteger_op_Modulus_m8272 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1475 * BigInteger_op_Modulus_m8273 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1475 * BigInteger_op_Division_m8274 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1475 * BigInteger_op_Multiply_m8275 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1475 * BigInteger_op_LeftShift_m8276 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1475 * BigInteger_op_RightShift_m8277 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Equality_m8278 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Inequality_m8279 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Equality_m8280 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Inequality_m8281 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThan_m8282 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThan_m8283 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThanOrEqual_m8284 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThanOrEqual_m8285 (Object_t * __this /* static, unused */, BigInteger_t1475 * ___bi1, BigInteger_t1475 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
