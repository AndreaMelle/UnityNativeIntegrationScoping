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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Hash128.h"

// System.Void UnityEngine.Hash128::.ctor(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
extern "C" void Hash128__ctor_m2859 (Hash128_t548 * __this, uint32_t ___u32_0, uint32_t ___u32_1, uint32_t ___u32_2, uint32_t ___u32_3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Hash128::ToString()
extern "C" String_t* Hash128_ToString_m2860 (Hash128_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Hash128::Internal_Hash128ToString(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
extern "C" String_t* Hash128_Internal_Hash128ToString_m2861 (Object_t * __this /* static, unused */, uint32_t ___d0, uint32_t ___d1, uint32_t ___d2, uint32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
