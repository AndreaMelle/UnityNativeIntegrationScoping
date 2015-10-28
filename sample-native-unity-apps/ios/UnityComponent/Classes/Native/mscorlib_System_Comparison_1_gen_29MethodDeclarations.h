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

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2682;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m19219_gshared (Comparison_1_t2682 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m19219(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2682 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m19219_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m19220_gshared (Comparison_1_t2682 * __this, Vector4_t386  ___x, Vector4_t386  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m19220(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2682 *, Vector4_t386 , Vector4_t386 , const MethodInfo*))Comparison_1_Invoke_m19220_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m19221_gshared (Comparison_1_t2682 * __this, Vector4_t386  ___x, Vector4_t386  ___y, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m19221(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2682 *, Vector4_t386 , Vector4_t386 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m19221_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m19222_gshared (Comparison_1_t2682 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m19222(__this, ___result, method) (( int32_t (*) (Comparison_1_t2682 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m19222_gshared)(__this, ___result, method)
