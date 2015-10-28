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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3160;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2329;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3432;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3433;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1387;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t3165;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t3169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__36.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m26277_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26277(__this, method) (( void (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2__ctor_m26277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26278_gshared (Dictionary_2_t3160 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26278(__this, ___comparer, method) (( void (*) (Dictionary_2_t3160 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26278_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26280_gshared (Dictionary_2_t3160 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26280(__this, ___capacity, method) (( void (*) (Dictionary_2_t3160 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26280_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26282_gshared (Dictionary_2_t3160 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26282(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3160 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2__ctor_m26282_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26284_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26284(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26284_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26286_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26286(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3160 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26286_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26288_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26288(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3160 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26288_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26290_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26290(__this, ___key, method) (( bool (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26290_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26292_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26292(__this, ___key, method) (( void (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26292_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26294_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26294(__this, method) (( bool (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26294_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26296_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26296(__this, method) (( Object_t * (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26296_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26298_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26298(__this, method) (( bool (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26298_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26300_gshared (Dictionary_2_t3160 * __this, KeyValuePair_2_t3162  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26300(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3160 *, KeyValuePair_2_t3162 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26300_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26302_gshared (Dictionary_2_t3160 * __this, KeyValuePair_2_t3162  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26302(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3160 *, KeyValuePair_2_t3162 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26302_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26304_gshared (Dictionary_2_t3160 * __this, KeyValuePair_2U5BU5D_t3432* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26304(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3160 *, KeyValuePair_2U5BU5D_t3432*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26304_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26306_gshared (Dictionary_2_t3160 * __this, KeyValuePair_2_t3162  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26306(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3160 *, KeyValuePair_2_t3162 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26306_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26308_gshared (Dictionary_2_t3160 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26308(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3160 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26308_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26310_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26310(__this, method) (( Object_t * (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26310_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26312_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26312(__this, method) (( Object_t* (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26312_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26314_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26314(__this, method) (( Object_t * (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26314_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26316_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26316(__this, method) (( int32_t (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_get_Count_m26316_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m26318_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26318(__this, ___key, method) (( bool (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m26318_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26320_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26320(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3160 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m26320_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26322_gshared (Dictionary_2_t3160 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26322(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3160 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26322_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26324_gshared (Dictionary_2_t3160 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26324(__this, ___size, method) (( void (*) (Dictionary_2_t3160 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26324_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26326_gshared (Dictionary_2_t3160 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26326(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3160 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26326_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3162  Dictionary_2_make_pair_m26328_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26328(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3162  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m26328_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m26330_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26330(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m26330_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m26332_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26332(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m26332_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26334_gshared (Dictionary_2_t3160 * __this, KeyValuePair_2U5BU5D_t3432* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26334(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3160 *, KeyValuePair_2U5BU5D_t3432*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26334_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m26336_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26336(__this, method) (( void (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_Resize_m26336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26338_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26338(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3160 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m26338_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m26340_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26340(__this, method) (( void (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_Clear_m26340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26342_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26342(__this, ___key, method) (( bool (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m26342_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26344_gshared (Dictionary_2_t3160 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26344(__this, ___value, method) (( bool (*) (Dictionary_2_t3160 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m26344_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26346_gshared (Dictionary_2_t3160 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26346(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3160 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2_GetObjectData_m26346_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26348_gshared (Dictionary_2_t3160 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26348(__this, ___sender, method) (( void (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26348_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26350_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26350(__this, ___key, method) (( bool (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m26350_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26352_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26352(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3160 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m26352_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t3165 * Dictionary_2_get_Keys_m26354_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26354(__this, method) (( KeyCollection_t3165 * (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_get_Keys_m26354_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t3169 * Dictionary_2_get_Values_m26356_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26356(__this, method) (( ValueCollection_t3169 * (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_get_Values_m26356_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m26358_gshared (Dictionary_2_t3160 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26358(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26358_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m26360_gshared (Dictionary_2_t3160 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26360(__this, ___value, method) (( bool (*) (Dictionary_2_t3160 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26360_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26362_gshared (Dictionary_2_t3160 * __this, KeyValuePair_2_t3162  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26362(__this, ___pair, method) (( bool (*) (Dictionary_2_t3160 *, KeyValuePair_2_t3162 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26362_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t3167  Dictionary_2_GetEnumerator_m26364_gshared (Dictionary_2_t3160 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26364(__this, method) (( Enumerator_t3167  (*) (Dictionary_2_t3160 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26364_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1388  Dictionary_2_U3CCopyToU3Em__0_m26366_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m26366(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26366_gshared)(__this /* static, unused */, ___key, ___value, method)
