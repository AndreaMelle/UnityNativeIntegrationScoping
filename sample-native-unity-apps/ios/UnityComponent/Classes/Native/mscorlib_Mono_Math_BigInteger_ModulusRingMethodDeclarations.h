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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1658;
// Mono.Math.BigInteger
struct BigInteger_t1659;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m10081 (ModulusRing_t1658 * __this, BigInteger_t1659 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m10082 (ModulusRing_t1658 * __this, BigInteger_t1659 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1659 * ModulusRing_Multiply_m10083 (ModulusRing_t1658 * __this, BigInteger_t1659 * ___a, BigInteger_t1659 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1659 * ModulusRing_Difference_m10084 (ModulusRing_t1658 * __this, BigInteger_t1659 * ___a, BigInteger_t1659 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1659 * ModulusRing_Pow_m10085 (ModulusRing_t1658 * __this, BigInteger_t1659 * ___a, BigInteger_t1659 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1659 * ModulusRing_Pow_m10086 (ModulusRing_t1658 * __this, uint32_t ___b, BigInteger_t1659 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
