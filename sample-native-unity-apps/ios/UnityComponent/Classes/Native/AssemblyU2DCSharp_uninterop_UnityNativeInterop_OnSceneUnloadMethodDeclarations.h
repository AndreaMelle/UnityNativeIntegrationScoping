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

// uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent
struct OnSceneUnloadRequestEvent_t31;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent::.ctor(System.Object,System.IntPtr)
extern "C" void OnSceneUnloadRequestEvent__ctor_m87 (OnSceneUnloadRequestEvent_t31 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent::Invoke()
extern "C" void OnSceneUnloadRequestEvent_Invoke_m88 (OnSceneUnloadRequestEvent_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnSceneUnloadRequestEvent_t31(Il2CppObject* delegate);
// System.IAsyncResult uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnSceneUnloadRequestEvent_BeginInvoke_m89 (OnSceneUnloadRequestEvent_t31 * __this, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent::EndInvoke(System.IAsyncResult)
extern "C" void OnSceneUnloadRequestEvent_EndInvoke_m90 (OnSceneUnloadRequestEvent_t31 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
