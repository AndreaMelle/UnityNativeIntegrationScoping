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

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t414;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2076_gshared (UnityAction_1_t414 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m2076(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t414 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m2076_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m16318_gshared (UnityAction_1_t414 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m16318(__this, ___arg0, method) (( void (*) (UnityAction_1_t414 *, float, const MethodInfo*))UnityAction_1_Invoke_m16318_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m16319_gshared (UnityAction_1_t414 * __this, float ___arg0, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m16319(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t414 *, float, AsyncCallback_t34 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m16319_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m16320_gshared (UnityAction_1_t414 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m16320(__this, ___result, method) (( void (*) (UnityAction_1_t414 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m16320_gshared)(__this, ___result, method)
