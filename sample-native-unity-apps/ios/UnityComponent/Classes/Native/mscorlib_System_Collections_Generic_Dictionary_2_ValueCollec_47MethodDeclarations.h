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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2963;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2954;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t3392;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// System.UInt16[]
struct UInt16U5BU5D_t1243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m23047_gshared (ValueCollection_t2963 * __this, Dictionary_2_t2954 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m23047(__this, ___dictionary, method) (( void (*) (ValueCollection_t2963 *, Dictionary_2_t2954 *, const MethodInfo*))ValueCollection__ctor_m23047_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23048_gshared (ValueCollection_t2963 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23048(__this, ___item, method) (( void (*) (ValueCollection_t2963 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23048_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23049_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23049(__this, method) (( void (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23049_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23050_gshared (ValueCollection_t2963 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23050(__this, ___item, method) (( bool (*) (ValueCollection_t2963 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23050_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23051_gshared (ValueCollection_t2963 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23051(__this, ___item, method) (( bool (*) (ValueCollection_t2963 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23051_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23052_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23052(__this, method) (( Object_t* (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23052_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m23053_gshared (ValueCollection_t2963 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m23053(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2963 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m23053_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23054_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23054(__this, method) (( Object_t * (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23054_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23055_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23055(__this, method) (( bool (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23055_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23056_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23056(__this, method) (( bool (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23056_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m23057_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m23057(__this, method) (( Object_t * (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m23057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m23058_gshared (ValueCollection_t2963 * __this, UInt16U5BU5D_t1243* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m23058(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2963 *, UInt16U5BU5D_t1243*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m23058_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2964  ValueCollection_GetEnumerator_m23059_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m23059(__this, method) (( Enumerator_t2964  (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_GetEnumerator_m23059_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m23060_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m23060(__this, method) (( int32_t (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_get_Count_m23060_gshared)(__this, method)
