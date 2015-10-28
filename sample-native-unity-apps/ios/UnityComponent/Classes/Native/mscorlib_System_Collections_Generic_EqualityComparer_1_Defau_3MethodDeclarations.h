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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2646;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m18759_gshared (DefaultComparer_t2646 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18759(__this, method) (( void (*) (DefaultComparer_t2646 *, const MethodInfo*))DefaultComparer__ctor_m18759_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18760_gshared (DefaultComparer_t2646 * __this, Vector3_t130  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18760(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2646 *, Vector3_t130 , const MethodInfo*))DefaultComparer_GetHashCode_m18760_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18761_gshared (DefaultComparer_t2646 * __this, Vector3_t130  ___x, Vector3_t130  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18761(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2646 *, Vector3_t130 , Vector3_t130 , const MethodInfo*))DefaultComparer_Equals_m18761_gshared)(__this, ___x, ___y, method)
