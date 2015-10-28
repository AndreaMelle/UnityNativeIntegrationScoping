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

// System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Predicate_1_t1037;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m5882_gshared (Predicate_1_t1037 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m5882(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1037 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m5882_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m22679_gshared (Predicate_1_t1037 * __this, TrackableResultData_t860  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m22679(__this, ___obj, method) (( bool (*) (Predicate_1_t1037 *, TrackableResultData_t860 , const MethodInfo*))Predicate_1_Invoke_m22679_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m22680_gshared (Predicate_1_t1037 * __this, TrackableResultData_t860  ___obj, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m22680(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1037 *, TrackableResultData_t860 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22680_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m22681_gshared (Predicate_1_t1037 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m22681(__this, ___result, method) (( bool (*) (Predicate_1_t1037 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22681_gshared)(__this, ___result, method)
