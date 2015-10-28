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

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2871;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t2870;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>[]
struct KeyValuePair_2U5BU5D_t3375;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct IEnumerator_1_t3376;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1387;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2876;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct ValueCollection_t2880;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m21579_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21579(__this, method) (( void (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2__ctor_m21579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21581_gshared (Dictionary_2_t2871 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21581(__this, ___comparer, method) (( void (*) (Dictionary_2_t2871 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21581_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21583_gshared (Dictionary_2_t2871 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21583(__this, ___capacity, method) (( void (*) (Dictionary_2_t2871 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21583_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21585_gshared (Dictionary_2_t2871 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21585(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2871 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2__ctor_m21585_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21587_gshared (Dictionary_2_t2871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21587(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21587_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21589_gshared (Dictionary_2_t2871 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21589(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2871 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21589_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21591_gshared (Dictionary_2_t2871 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21591(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2871 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21591_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21593_gshared (Dictionary_2_t2871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21593(__this, ___key, method) (( bool (*) (Dictionary_2_t2871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21593_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21595_gshared (Dictionary_2_t2871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21595(__this, ___key, method) (( void (*) (Dictionary_2_t2871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21595_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21597_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21597(__this, method) (( bool (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21597_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21599_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21599(__this, method) (( Object_t * (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21599_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21601_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21601(__this, method) (( bool (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21601_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21603_gshared (Dictionary_2_t2871 * __this, KeyValuePair_2_t2873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21603(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2871 *, KeyValuePair_2_t2873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21603_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21605_gshared (Dictionary_2_t2871 * __this, KeyValuePair_2_t2873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21605(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2871 *, KeyValuePair_2_t2873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21605_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21607_gshared (Dictionary_2_t2871 * __this, KeyValuePair_2U5BU5D_t3375* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21607(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2871 *, KeyValuePair_2U5BU5D_t3375*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21607_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21609_gshared (Dictionary_2_t2871 * __this, KeyValuePair_2_t2873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21609(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2871 *, KeyValuePair_2_t2873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21609_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21611_gshared (Dictionary_2_t2871 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21611(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2871 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21611_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21613_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21613(__this, method) (( Object_t * (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21613_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21615_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21615(__this, method) (( Object_t* (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21615_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21617_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21617(__this, method) (( Object_t * (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21617_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21619_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21619(__this, method) (( int32_t (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_get_Count_m21619_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m21621_gshared (Dictionary_2_t2871 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21621(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2871 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21621_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21623_gshared (Dictionary_2_t2871 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21623(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2871 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21623_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21625_gshared (Dictionary_2_t2871 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21625(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2871 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21625_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21627_gshared (Dictionary_2_t2871 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21627(__this, ___size, method) (( void (*) (Dictionary_2_t2871 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21627_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21629_gshared (Dictionary_2_t2871 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2871 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21629_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2873  Dictionary_2_make_pair_m21631_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21631(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2873  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21631_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m21633_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21633(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21633_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m21635_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21635(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21635_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21637_gshared (Dictionary_2_t2871 * __this, KeyValuePair_2U5BU5D_t3375* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21637(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2871 *, KeyValuePair_2U5BU5D_t3375*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21637_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21639_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21639(__this, method) (( void (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_Resize_m21639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21641_gshared (Dictionary_2_t2871 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21641(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2871 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m21641_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21643_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21643(__this, method) (( void (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_Clear_m21643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21645_gshared (Dictionary_2_t2871 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21645(__this, ___key, method) (( bool (*) (Dictionary_2_t2871 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21645_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21647_gshared (Dictionary_2_t2871 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21647(__this, ___value, method) (( bool (*) (Dictionary_2_t2871 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21647_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21649_gshared (Dictionary_2_t2871 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21649(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2871 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2_GetObjectData_m21649_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21651_gshared (Dictionary_2_t2871 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21651(__this, ___sender, method) (( void (*) (Dictionary_2_t2871 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21651_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21653_gshared (Dictionary_2_t2871 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21653(__this, ___key, method) (( bool (*) (Dictionary_2_t2871 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21653_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21655_gshared (Dictionary_2_t2871 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21655(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2871 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21655_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Keys()
extern "C" KeyCollection_t2876 * Dictionary_2_get_Keys_m21657_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21657(__this, method) (( KeyCollection_t2876 * (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_get_Keys_m21657_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Values()
extern "C" ValueCollection_t2880 * Dictionary_2_get_Values_m21658_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21658(__this, method) (( ValueCollection_t2880 * (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_get_Values_m21658_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m21660_gshared (Dictionary_2_t2871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21660(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2871 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21660_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21662_gshared (Dictionary_2_t2871 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21662(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2871 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21662_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21664_gshared (Dictionary_2_t2871 * __this, KeyValuePair_2_t2873  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21664(__this, ___pair, method) (( bool (*) (Dictionary_2_t2871 *, KeyValuePair_2_t2873 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21664_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2878  Dictionary_2_GetEnumerator_m21666_gshared (Dictionary_2_t2871 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21666(__this, method) (( Enumerator_t2878  (*) (Dictionary_2_t2871 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21666_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1388  Dictionary_2_U3CCopyToU3Em__0_m21668_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21668(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21668_gshared)(__this /* static, unused */, ___key, ___value, method)
