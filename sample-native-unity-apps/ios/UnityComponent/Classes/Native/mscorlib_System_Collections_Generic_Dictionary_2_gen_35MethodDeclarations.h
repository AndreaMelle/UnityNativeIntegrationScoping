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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2954;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2329;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t3390;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t3391;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1387;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t2959;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2963;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m22900_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m22900(__this, method) (( void (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2__ctor_m22900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22902_gshared (Dictionary_2_t2954 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22902(__this, ___comparer, method) (( void (*) (Dictionary_2_t2954 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22904_gshared (Dictionary_2_t2954 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m22904(__this, ___capacity, method) (( void (*) (Dictionary_2_t2954 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m22904_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22906_gshared (Dictionary_2_t2954 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22906(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2954 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2__ctor_m22906_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22908_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22908(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22908_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22910_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22910(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2954 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22910_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22912_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22912(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2954 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22912_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m22914_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m22914(__this, ___key, method) (( bool (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m22914_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22916_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22916(__this, ___key, method) (( void (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22916_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22918_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22918(__this, method) (( bool (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22918_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22920_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22920(__this, method) (( Object_t * (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22922_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22922(__this, method) (( bool (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22924_gshared (Dictionary_2_t2954 * __this, KeyValuePair_2_t2956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22924(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2954 *, KeyValuePair_2_t2956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22924_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22926_gshared (Dictionary_2_t2954 * __this, KeyValuePair_2_t2956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22926(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2954 *, KeyValuePair_2_t2956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22926_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22928_gshared (Dictionary_2_t2954 * __this, KeyValuePair_2U5BU5D_t3390* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22928(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2954 *, KeyValuePair_2U5BU5D_t3390*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22928_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22930_gshared (Dictionary_2_t2954 * __this, KeyValuePair_2_t2956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22930(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2954 *, KeyValuePair_2_t2956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22930_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22932_gshared (Dictionary_2_t2954 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22932(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2954 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22932_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22934_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22934(__this, method) (( Object_t * (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22934_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22936_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22936(__this, method) (( Object_t* (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22936_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22938_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22938(__this, method) (( Object_t * (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22938_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22940_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m22940(__this, method) (( int32_t (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_get_Count_m22940_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m22942_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m22942(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m22942_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22944_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m22944(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2954 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m22944_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22946_gshared (Dictionary_2_t2954 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m22946(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2954 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22946_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22948_gshared (Dictionary_2_t2954 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m22948(__this, ___size, method) (( void (*) (Dictionary_2_t2954 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22948_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22950_gshared (Dictionary_2_t2954 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22950(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2954 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22950_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2956  Dictionary_2_make_pair_m22952_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m22952(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2956  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m22952_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m22954_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m22954(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m22954_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m22956_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m22956(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m22956_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22958_gshared (Dictionary_2_t2954 * __this, KeyValuePair_2U5BU5D_t3390* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m22958(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2954 *, KeyValuePair_2U5BU5D_t3390*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22958_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m22960_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m22960(__this, method) (( void (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_Resize_m22960_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22962_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m22962(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2954 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m22962_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m22964_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m22964(__this, method) (( void (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_Clear_m22964_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22966_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m22966(__this, ___key, method) (( bool (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m22966_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22968_gshared (Dictionary_2_t2954 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m22968(__this, ___value, method) (( bool (*) (Dictionary_2_t2954 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m22968_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22970_gshared (Dictionary_2_t2954 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m22970(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2954 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2_GetObjectData_m22970_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22972_gshared (Dictionary_2_t2954 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22972(__this, ___sender, method) (( void (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m22972_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22974_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m22974(__this, ___key, method) (( bool (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m22974_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22976_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m22976(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2954 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m22976_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t2959 * Dictionary_2_get_Keys_m22978_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m22978(__this, method) (( KeyCollection_t2959 * (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_get_Keys_m22978_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t2963 * Dictionary_2_get_Values_m22980_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m22980(__this, method) (( ValueCollection_t2963 * (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_get_Values_m22980_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m22982_gshared (Dictionary_2_t2954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22982(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22982_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m22984_gshared (Dictionary_2_t2954 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22984(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t2954 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22984_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22986_gshared (Dictionary_2_t2954 * __this, KeyValuePair_2_t2956  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22986(__this, ___pair, method) (( bool (*) (Dictionary_2_t2954 *, KeyValuePair_2_t2956 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22986_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2961  Dictionary_2_GetEnumerator_m22988_gshared (Dictionary_2_t2954 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22988(__this, method) (( Enumerator_t2961  (*) (Dictionary_2_t2954 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22988_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1388  Dictionary_2_U3CCopyToU3Em__0_m22990_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22990(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22990_gshared)(__this /* static, unused */, ___key, ___value, method)
