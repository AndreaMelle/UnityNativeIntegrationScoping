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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Object>
struct Transform_1_t2882;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21745_gshared (Transform_1_t2882 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21745(__this, ___object, ___method, method) (( void (*) (Transform_1_t2882 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21745_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m21746_gshared (Transform_1_t2882 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21746(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2882 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m21746_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21747_gshared (Transform_1_t2882 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21747(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2882 *, int32_t, Object_t *, AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21747_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m21748_gshared (Transform_1_t2882 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21748(__this, ___result, method) (( Object_t * (*) (Transform_1_t2882 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21748_gshared)(__this, ___result, method)
