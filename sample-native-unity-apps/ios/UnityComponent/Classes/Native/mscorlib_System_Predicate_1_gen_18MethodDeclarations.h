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

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2550;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17259_gshared (Predicate_1_t2550 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17259(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2550 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17259_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17260_gshared (Predicate_1_t2550 * __this, UIVertex_t308  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17260(__this, ___obj, method) (( bool (*) (Predicate_1_t2550 *, UIVertex_t308 , const MethodInfo*))Predicate_1_Invoke_m17260_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17261_gshared (Predicate_1_t2550 * __this, UIVertex_t308  ___obj, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17261(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2550 *, UIVertex_t308 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17261_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17262_gshared (Predicate_1_t2550 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17262(__this, ___result, method) (( bool (*) (Predicate_1_t2550 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17262_gshared)(__this, ___result, method)
