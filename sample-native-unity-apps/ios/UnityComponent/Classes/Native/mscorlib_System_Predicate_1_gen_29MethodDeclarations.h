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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2668;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19058_gshared (Predicate_1_t2668 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m19058(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2668 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m19058_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19059_gshared (Predicate_1_t2668 * __this, Vector2_t211  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m19059(__this, ___obj, method) (( bool (*) (Predicate_1_t2668 *, Vector2_t211 , const MethodInfo*))Predicate_1_Invoke_m19059_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19060_gshared (Predicate_1_t2668 * __this, Vector2_t211  ___obj, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m19060(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2668 *, Vector2_t211 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m19060_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19061_gshared (Predicate_1_t2668 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m19061(__this, ___result, method) (( bool (*) (Predicate_1_t2668 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m19061_gshared)(__this, ___result, method)
