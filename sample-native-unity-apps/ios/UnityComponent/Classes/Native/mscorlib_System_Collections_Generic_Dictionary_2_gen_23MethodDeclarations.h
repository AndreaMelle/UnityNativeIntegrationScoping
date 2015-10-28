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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Dictionary_2_t1098;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2457;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>[]
struct KeyValuePair_2U5BU5D_t3412;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>
struct IEnumerator_1_t3413;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1387;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct KeyCollection_t3047;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct ValueCollection_t3051;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor()
extern "C" void Dictionary_2__ctor_m6032_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m6032(__this, method) (( void (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2__ctor_m6032_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24676_gshared (Dictionary_2_t1098 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24676(__this, ___comparer, method) (( void (*) (Dictionary_2_t1098 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24676_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m24677_gshared (Dictionary_2_t1098 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m24677(__this, ___capacity, method) (( void (*) (Dictionary_2_t1098 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m24677_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24678_gshared (Dictionary_2_t1098 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24678(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1098 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2__ctor_m24678_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24679_gshared (Dictionary_2_t1098 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24679(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1098 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24679_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24680_gshared (Dictionary_2_t1098 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24680(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1098 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24680_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24681_gshared (Dictionary_2_t1098 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24681(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1098 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24681_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24682_gshared (Dictionary_2_t1098 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24682(__this, ___key, method) (( bool (*) (Dictionary_2_t1098 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24682_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24683_gshared (Dictionary_2_t1098 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24683(__this, ___key, method) (( void (*) (Dictionary_2_t1098 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24683_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24684_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24684(__this, method) (( bool (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24685_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24685(__this, method) (( Object_t * (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24685_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24686_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24686(__this, method) (( bool (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24687_gshared (Dictionary_2_t1098 * __this, KeyValuePair_2_t3045  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24687(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1098 *, KeyValuePair_2_t3045 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24687_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24688_gshared (Dictionary_2_t1098 * __this, KeyValuePair_2_t3045  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24688(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1098 *, KeyValuePair_2_t3045 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24688_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24689_gshared (Dictionary_2_t1098 * __this, KeyValuePair_2U5BU5D_t3412* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24689(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1098 *, KeyValuePair_2U5BU5D_t3412*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24689_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24690_gshared (Dictionary_2_t1098 * __this, KeyValuePair_2_t3045  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24690(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1098 *, KeyValuePair_2_t3045 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24690_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24691_gshared (Dictionary_2_t1098 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24691(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1098 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24691_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24692_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24692(__this, method) (( Object_t * (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24692_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24693_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24693(__this, method) (( Object_t* (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24693_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24694_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24694(__this, method) (( Object_t * (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24694_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m24695_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m24695(__this, method) (( int32_t (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_get_Count_m24695_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Item(TKey)
extern "C" TrackableResultData_t860  Dictionary_2_get_Item_m24696_gshared (Dictionary_2_t1098 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m24696(__this, ___key, method) (( TrackableResultData_t860  (*) (Dictionary_2_t1098 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m24696_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m24697_gshared (Dictionary_2_t1098 * __this, int32_t ___key, TrackableResultData_t860  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m24697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1098 *, int32_t, TrackableResultData_t860 , const MethodInfo*))Dictionary_2_set_Item_m24697_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24698_gshared (Dictionary_2_t1098 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24698(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1098 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24698_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24699_gshared (Dictionary_2_t1098 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24699(__this, ___size, method) (( void (*) (Dictionary_2_t1098 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24699_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24700_gshared (Dictionary_2_t1098 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24700(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1098 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24700_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3045  Dictionary_2_make_pair_m24701_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t860  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24701(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3045  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t860 , const MethodInfo*))Dictionary_2_make_pair_m24701_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m24702_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t860  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24702(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t860 , const MethodInfo*))Dictionary_2_pick_key_m24702_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_value(TKey,TValue)
extern "C" TrackableResultData_t860  Dictionary_2_pick_value_m24703_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t860  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24703(__this /* static, unused */, ___key, ___value, method) (( TrackableResultData_t860  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t860 , const MethodInfo*))Dictionary_2_pick_value_m24703_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24704_gshared (Dictionary_2_t1098 * __this, KeyValuePair_2U5BU5D_t3412* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24704(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1098 *, KeyValuePair_2U5BU5D_t3412*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24704_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Resize()
extern "C" void Dictionary_2_Resize_m24705_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24705(__this, method) (( void (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_Resize_m24705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m24706_gshared (Dictionary_2_t1098 * __this, int32_t ___key, TrackableResultData_t860  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m24706(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1098 *, int32_t, TrackableResultData_t860 , const MethodInfo*))Dictionary_2_Add_m24706_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Clear()
extern "C" void Dictionary_2_Clear_m24707_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m24707(__this, method) (( void (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_Clear_m24707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m24708_gshared (Dictionary_2_t1098 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m24708(__this, ___key, method) (( bool (*) (Dictionary_2_t1098 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m24708_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m24709_gshared (Dictionary_2_t1098 * __this, TrackableResultData_t860  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m24709(__this, ___value, method) (( bool (*) (Dictionary_2_t1098 *, TrackableResultData_t860 , const MethodInfo*))Dictionary_2_ContainsValue_m24709_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m24710_gshared (Dictionary_2_t1098 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m24710(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1098 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2_GetObjectData_m24710_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m24711_gshared (Dictionary_2_t1098 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m24711(__this, ___sender, method) (( void (*) (Dictionary_2_t1098 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m24711_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m24712_gshared (Dictionary_2_t1098 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m24712(__this, ___key, method) (( bool (*) (Dictionary_2_t1098 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m24712_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m24713_gshared (Dictionary_2_t1098 * __this, int32_t ___key, TrackableResultData_t860 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m24713(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1098 *, int32_t, TrackableResultData_t860 *, const MethodInfo*))Dictionary_2_TryGetValue_m24713_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Keys()
extern "C" KeyCollection_t3047 * Dictionary_2_get_Keys_m24714_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m24714(__this, method) (( KeyCollection_t3047 * (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_get_Keys_m24714_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Values()
extern "C" ValueCollection_t3051 * Dictionary_2_get_Values_m24715_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24715(__this, method) (( ValueCollection_t3051 * (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_get_Values_m24715_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m24716_gshared (Dictionary_2_t1098 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24716(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1098 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24716_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTValue(System.Object)
extern "C" TrackableResultData_t860  Dictionary_2_ToTValue_m24717_gshared (Dictionary_2_t1098 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24717(__this, ___value, method) (( TrackableResultData_t860  (*) (Dictionary_2_t1098 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24717_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24718_gshared (Dictionary_2_t1098 * __this, KeyValuePair_2_t3045  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24718(__this, ___pair, method) (( bool (*) (Dictionary_2_t1098 *, KeyValuePair_2_t3045 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24718_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetEnumerator()
extern "C" Enumerator_t3049  Dictionary_2_GetEnumerator_m24719_gshared (Dictionary_2_t1098 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24719(__this, method) (( Enumerator_t3049  (*) (Dictionary_2_t1098 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24719_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1388  Dictionary_2_U3CCopyToU3Em__0_m24720_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t860  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24720(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t860 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24720_gshared)(__this /* static, unused */, ___key, ___value, method)
