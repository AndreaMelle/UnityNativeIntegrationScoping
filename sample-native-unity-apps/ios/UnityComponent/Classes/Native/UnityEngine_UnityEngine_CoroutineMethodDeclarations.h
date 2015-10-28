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

// UnityEngine.Coroutine
struct Coroutine_t303;
struct Coroutine_t303_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2462 (Coroutine_t303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2463 (Coroutine_t303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2464 (Coroutine_t303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t303_marshal(const Coroutine_t303& unmarshaled, Coroutine_t303_marshaled& marshaled);
extern "C" void Coroutine_t303_marshal_back(const Coroutine_t303_marshaled& marshaled, Coroutine_t303& unmarshaled);
extern "C" void Coroutine_t303_marshal_cleanup(Coroutine_t303_marshaled& marshaled);
