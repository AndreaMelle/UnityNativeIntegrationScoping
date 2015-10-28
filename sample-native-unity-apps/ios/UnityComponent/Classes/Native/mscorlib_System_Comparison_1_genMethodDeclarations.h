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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t178;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1840_gshared (Comparison_1_t178 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1840(__this, ___object, ___method, method) (( void (*) (Comparison_1_t178 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1840_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15169_gshared (Comparison_1_t178 * __this, RaycastResult_t209  ___x, RaycastResult_t209  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15169(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t178 *, RaycastResult_t209 , RaycastResult_t209 , const MethodInfo*))Comparison_1_Invoke_m15169_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15170_gshared (Comparison_1_t178 * __this, RaycastResult_t209  ___x, RaycastResult_t209  ___y, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15170(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t178 *, RaycastResult_t209 , RaycastResult_t209 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15170_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15171_gshared (Comparison_1_t178 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15171(__this, ___result, method) (( int32_t (*) (Comparison_1_t178 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15171_gshared)(__this, ___result, method)
