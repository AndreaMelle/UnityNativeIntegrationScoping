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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
struct DefaultComparer_t3084;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m25187_gshared (DefaultComparer_t3084 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25187(__this, method) (( void (*) (DefaultComparer_t3084 *, const MethodInfo*))DefaultComparer__ctor_m25187_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25188_gshared (DefaultComparer_t3084 * __this, TargetSearchResult_t938  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25188(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3084 *, TargetSearchResult_t938 , const MethodInfo*))DefaultComparer_GetHashCode_m25188_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25189_gshared (DefaultComparer_t3084 * __this, TargetSearchResult_t938  ___x, TargetSearchResult_t938  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25189(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3084 *, TargetSearchResult_t938 , TargetSearchResult_t938 , const MethodInfo*))DefaultComparer_Equals_m25189_gshared)(__this, ___x, ___y, method)
