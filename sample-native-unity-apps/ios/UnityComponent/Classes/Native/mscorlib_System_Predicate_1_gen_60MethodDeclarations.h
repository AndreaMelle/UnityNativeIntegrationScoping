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

// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t3085;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25190_gshared (Predicate_1_t3085 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25190(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3085 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25190_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25191_gshared (Predicate_1_t3085 * __this, TargetSearchResult_t938  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25191(__this, ___obj, method) (( bool (*) (Predicate_1_t3085 *, TargetSearchResult_t938 , const MethodInfo*))Predicate_1_Invoke_m25191_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25192_gshared (Predicate_1_t3085 * __this, TargetSearchResult_t938  ___obj, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25192(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3085 *, TargetSearchResult_t938 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25192_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25193_gshared (Predicate_1_t3085 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25193(__this, ___result, method) (( bool (*) (Predicate_1_t3085 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25193_gshared)(__this, ___result, method)
