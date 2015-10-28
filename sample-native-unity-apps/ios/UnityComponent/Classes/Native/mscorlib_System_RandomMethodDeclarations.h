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

// System.Random
struct Random_t1258;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Random::.ctor()
extern "C" void Random__ctor_m8049 (Random_t1258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
extern "C" void Random__ctor_m14058 (Random_t1258 * __this, int32_t ___Seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
extern "C" double Random_Sample_m14059 (Random_t1258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32,System.Int32)
extern "C" int32_t Random_Next_m14060 (Random_t1258 * __this, int32_t ___minValue, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
