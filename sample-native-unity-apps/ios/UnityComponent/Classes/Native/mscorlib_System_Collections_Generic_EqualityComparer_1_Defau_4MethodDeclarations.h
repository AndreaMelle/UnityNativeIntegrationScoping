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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t2657;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m18910_gshared (DefaultComparer_t2657 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18910(__this, method) (( void (*) (DefaultComparer_t2657 *, const MethodInfo*))DefaultComparer__ctor_m18910_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18911_gshared (DefaultComparer_t2657 * __this, Color32_t418  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18911(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2657 *, Color32_t418 , const MethodInfo*))DefaultComparer_GetHashCode_m18911_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18912_gshared (DefaultComparer_t2657 * __this, Color32_t418  ___x, Color32_t418  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18912(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2657 *, Color32_t418 , Color32_t418 , const MethodInfo*))DefaultComparer_Equals_m18912_gshared)(__this, ___x, ___y, method)
