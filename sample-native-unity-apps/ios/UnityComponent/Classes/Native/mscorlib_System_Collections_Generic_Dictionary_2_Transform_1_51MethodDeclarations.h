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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>
struct Transform_1_t3066;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m24915_gshared (Transform_1_t3066 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m24915(__this, ___object, ___method, method) (( void (*) (Transform_1_t3066 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m24915_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m24916_gshared (Transform_1_t3066 * __this, int32_t ___key, VirtualButtonData_t861  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m24916(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t3066 *, int32_t, VirtualButtonData_t861 , const MethodInfo*))Transform_1_Invoke_m24916_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m24917_gshared (Transform_1_t3066 * __this, int32_t ___key, VirtualButtonData_t861  ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m24917(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3066 *, int32_t, VirtualButtonData_t861 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m24917_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m24918_gshared (Transform_1_t3066 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m24918(__this, ___result, method) (( int32_t (*) (Transform_1_t3066 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m24918_gshared)(__this, ___result, method)
