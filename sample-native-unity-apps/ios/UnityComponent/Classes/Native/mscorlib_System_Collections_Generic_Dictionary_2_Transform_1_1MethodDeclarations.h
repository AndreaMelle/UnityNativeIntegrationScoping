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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t2342;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14514_gshared (Transform_1_t2342 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14514(__this, ___object, ___method, method) (( void (*) (Transform_1_t2342 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14514_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2330  Transform_1_Invoke_m14515_gshared (Transform_1_t2342 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14515(__this, ___key, ___value, method) (( KeyValuePair_2_t2330  (*) (Transform_1_t2342 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m14515_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14516_gshared (Transform_1_t2342 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14516(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2342 *, Object_t *, Object_t *, AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14516_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2330  Transform_1_EndInvoke_m14517_gshared (Transform_1_t2342 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14517(__this, ___result, method) (( KeyValuePair_2_t2330  (*) (Transform_1_t2342 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14517_gshared)(__this, ___result, method)
