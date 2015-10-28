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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2487;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2329;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3305;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3306;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1387;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2491;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m16356_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16356(__this, method) (( void (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2__ctor_m16356_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16357_gshared (Dictionary_2_t2487 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16357(__this, ___comparer, method) (( void (*) (Dictionary_2_t2487 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16357_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16358_gshared (Dictionary_2_t2487 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16358(__this, ___capacity, method) (( void (*) (Dictionary_2_t2487 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16358_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16359_gshared (Dictionary_2_t2487 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16359(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2487 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2__ctor_m16359_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16360_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16360(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16360_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16361_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16361(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16361_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16362_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16362(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16362_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16363_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16363(__this, ___key, method) (( bool (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16363_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16364_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16364(__this, ___key, method) (( void (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16364_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16365_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16365(__this, method) (( bool (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16365_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16366_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16366(__this, method) (( Object_t * (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16367_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16367(__this, method) (( bool (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16367_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16368_gshared (Dictionary_2_t2487 * __this, KeyValuePair_2_t2489  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16368(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2487 *, KeyValuePair_2_t2489 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16368_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16369_gshared (Dictionary_2_t2487 * __this, KeyValuePair_2_t2489  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16369(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2487 *, KeyValuePair_2_t2489 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16369_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16370_gshared (Dictionary_2_t2487 * __this, KeyValuePair_2U5BU5D_t3305* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16370(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2487 *, KeyValuePair_2U5BU5D_t3305*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16370_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16371_gshared (Dictionary_2_t2487 * __this, KeyValuePair_2_t2489  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16371(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2487 *, KeyValuePair_2_t2489 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16371_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16372_gshared (Dictionary_2_t2487 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16372(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2487 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16372_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16373_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16373(__this, method) (( Object_t * (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16373_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16374_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16374(__this, method) (( Object_t* (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16374_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16375_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16375(__this, method) (( Object_t * (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16375_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16376_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16376(__this, method) (( int32_t (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_get_Count_m16376_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16377_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16377(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16377_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16378_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16378(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2487 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16378_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16379_gshared (Dictionary_2_t2487 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16379(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2487 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16379_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16380_gshared (Dictionary_2_t2487 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16380(__this, ___size, method) (( void (*) (Dictionary_2_t2487 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16380_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16381_gshared (Dictionary_2_t2487 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16381(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2487 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16381_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2489  Dictionary_2_make_pair_m16382_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16382(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2489  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16382_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m16383_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16383(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m16383_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16384_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16384(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16384_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16385_gshared (Dictionary_2_t2487 * __this, KeyValuePair_2U5BU5D_t3305* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16385(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2487 *, KeyValuePair_2U5BU5D_t3305*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16385_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m16386_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16386(__this, method) (( void (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_Resize_m16386_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16387_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16387(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2487 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16387_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m16388_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16388(__this, method) (( void (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_Clear_m16388_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16389_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16389(__this, ___key, method) (( bool (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16389_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16390_gshared (Dictionary_2_t2487 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16390(__this, ___value, method) (( bool (*) (Dictionary_2_t2487 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16390_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16391_gshared (Dictionary_2_t2487 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16391(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2487 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2_GetObjectData_m16391_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16392_gshared (Dictionary_2_t2487 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16392(__this, ___sender, method) (( void (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16392_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16393_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16393(__this, ___key, method) (( bool (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16393_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16394_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16394(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2487 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16394_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2491 * Dictionary_2_get_Keys_m16395_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16395(__this, method) (( KeyCollection_t2491 * (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_get_Keys_m16395_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2495 * Dictionary_2_get_Values_m16396_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16396(__this, method) (( ValueCollection_t2495 * (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_get_Values_m16396_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16397_gshared (Dictionary_2_t2487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16397(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16397_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16398_gshared (Dictionary_2_t2487 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16398(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2487 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16398_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16399_gshared (Dictionary_2_t2487 * __this, KeyValuePair_2_t2489  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16399(__this, ___pair, method) (( bool (*) (Dictionary_2_t2487 *, KeyValuePair_2_t2489 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16399_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2493  Dictionary_2_GetEnumerator_m16400_gshared (Dictionary_2_t2487 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16400(__this, method) (( Enumerator_t2493  (*) (Dictionary_2_t2487 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16400_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1388  Dictionary_2_U3CCopyToU3Em__0_m16401_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16401(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16401_gshared)(__this /* static, unused */, ___key, ___value, method)
