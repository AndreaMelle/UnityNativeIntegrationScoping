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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2406;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2623;
// System.Collections.IEnumerator
struct IEnumerator_t103;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m15288_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1__ctor_m15288(__this, method) (( void (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1__ctor_m15288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m15289_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m15289(__this, method) (( bool (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m15289_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m15290_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m15290(__this, method) (( Object_t * (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m15290_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m15291_gshared (Stack_1_t2406 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m15291(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2406 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m15291_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15292_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15292(__this, method) (( Object_t* (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15292_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m15293_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m15293(__this, method) (( Object_t * (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m15293_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m15294_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1_Peek_m15294(__this, method) (( Object_t * (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1_Peek_m15294_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m15295_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1_Pop_m15295(__this, method) (( Object_t * (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1_Pop_m15295_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m15296_gshared (Stack_1_t2406 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m15296(__this, ___t, method) (( void (*) (Stack_1_t2406 *, Object_t *, const MethodInfo*))Stack_1_Push_m15296_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m15297_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m15297(__this, method) (( int32_t (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1_get_Count_m15297_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2408  Stack_1_GetEnumerator_m15298_gshared (Stack_1_t2406 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m15298(__this, method) (( Enumerator_t2408  (*) (Stack_1_t2406 *, const MethodInfo*))Stack_1_GetEnumerator_m15298_gshared)(__this, method)
