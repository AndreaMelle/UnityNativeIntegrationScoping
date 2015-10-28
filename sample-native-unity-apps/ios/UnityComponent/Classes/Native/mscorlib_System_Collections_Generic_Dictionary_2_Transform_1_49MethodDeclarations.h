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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>
struct Transform_1_t3044;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m24795_gshared (Transform_1_t3044 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m24795(__this, ___object, ___method, method) (( void (*) (Transform_1_t3044 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m24795_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1388  Transform_1_Invoke_m24796_gshared (Transform_1_t3044 * __this, int32_t ___key, TrackableResultData_t860  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m24796(__this, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Transform_1_t3044 *, int32_t, TrackableResultData_t860 , const MethodInfo*))Transform_1_Invoke_m24796_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m24797_gshared (Transform_1_t3044 * __this, int32_t ___key, TrackableResultData_t860  ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m24797(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3044 *, int32_t, TrackableResultData_t860 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m24797_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1388  Transform_1_EndInvoke_m24798_gshared (Transform_1_t3044 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m24798(__this, ___result, method) (( DictionaryEntry_t1388  (*) (Transform_1_t3044 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m24798_gshared)(__this, ___result, method)
