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

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2318;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2623;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object[]
struct ObjectU5BU5D_t146;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m14272_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1__ctor_m14272(__this, method) (( void (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1__ctor_m14272_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m14274_gshared (Queue_1_t2318 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m14274(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2318 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m14274_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m14276_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m14276(__this, method) (( bool (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m14276_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m14278_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m14278(__this, method) (( Object_t * (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m14278_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14280_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14280(__this, method) (( Object_t* (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14280_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m14282_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m14282(__this, method) (( Object_t * (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m14282_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C" void Queue_1_Clear_m14283_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_Clear_m14283(__this, method) (( void (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_Clear_m14283_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m14285_gshared (Queue_1_t2318 * __this, ObjectU5BU5D_t146* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m14285(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2318 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))Queue_1_CopyTo_m14285_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m14286_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m14286(__this, method) (( Object_t * (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_Dequeue_m14286_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m14288_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_Peek_m14288(__this, method) (( Object_t * (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_Peek_m14288_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m14289_gshared (Queue_1_t2318 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m14289(__this, ___item, method) (( void (*) (Queue_1_t2318 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m14289_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m14291_gshared (Queue_1_t2318 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m14291(__this, ___new_size, method) (( void (*) (Queue_1_t2318 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m14291_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m14293_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m14293(__this, method) (( int32_t (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_get_Count_m14293_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2319  Queue_1_GetEnumerator_m14295_gshared (Queue_1_t2318 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m14295(__this, method) (( Enumerator_t2319  (*) (Queue_1_t2318 *, const MethodInfo*))Queue_1_GetEnumerator_m14295_gshared)(__this, method)
