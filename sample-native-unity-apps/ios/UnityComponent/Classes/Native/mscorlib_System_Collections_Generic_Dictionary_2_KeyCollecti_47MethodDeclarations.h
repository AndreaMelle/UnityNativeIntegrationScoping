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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t3165;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3160;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2623;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object[]
struct ObjectU5BU5D_t146;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_48.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m26385_gshared (KeyCollection_t3165 * __this, Dictionary_2_t3160 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m26385(__this, ___dictionary, method) (( void (*) (KeyCollection_t3165 *, Dictionary_2_t3160 *, const MethodInfo*))KeyCollection__ctor_m26385_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m26386_gshared (KeyCollection_t3165 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m26386(__this, ___item, method) (( void (*) (KeyCollection_t3165 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m26386_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m26387_gshared (KeyCollection_t3165 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m26387(__this, method) (( void (*) (KeyCollection_t3165 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m26387_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m26388_gshared (KeyCollection_t3165 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m26388(__this, ___item, method) (( bool (*) (KeyCollection_t3165 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m26388_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m26389_gshared (KeyCollection_t3165 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m26389(__this, ___item, method) (( bool (*) (KeyCollection_t3165 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m26389_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m26390_gshared (KeyCollection_t3165 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m26390(__this, method) (( Object_t* (*) (KeyCollection_t3165 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m26390_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m26391_gshared (KeyCollection_t3165 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m26391(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3165 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m26391_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m26392_gshared (KeyCollection_t3165 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m26392(__this, method) (( Object_t * (*) (KeyCollection_t3165 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m26392_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m26393_gshared (KeyCollection_t3165 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m26393(__this, method) (( bool (*) (KeyCollection_t3165 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m26393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m26394_gshared (KeyCollection_t3165 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m26394(__this, method) (( bool (*) (KeyCollection_t3165 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m26394_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m26395_gshared (KeyCollection_t3165 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m26395(__this, method) (( Object_t * (*) (KeyCollection_t3165 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m26395_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m26396_gshared (KeyCollection_t3165 * __this, ObjectU5BU5D_t146* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m26396(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3165 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m26396_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t3166  KeyCollection_GetEnumerator_m26397_gshared (KeyCollection_t3165 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m26397(__this, method) (( Enumerator_t3166  (*) (KeyCollection_t3165 *, const MethodInfo*))KeyCollection_GetEnumerator_m26397_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m26398_gshared (KeyCollection_t3165 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m26398(__this, method) (( int32_t (*) (KeyCollection_t3165 *, const MethodInfo*))KeyCollection_get_Count_m26398_gshared)(__this, method)
