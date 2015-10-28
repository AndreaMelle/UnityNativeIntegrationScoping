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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct Dictionary_2_t1099;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2457;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>[]
struct KeyValuePair_2U5BU5D_t3415;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>
struct IEnumerator_1_t3416;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1387;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct KeyCollection_t3063;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct ValueCollection_t3067;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor()
extern "C" void Dictionary_2__ctor_m6034_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m6034(__this, method) (( void (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2__ctor_m6034_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24818_gshared (Dictionary_2_t1099 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24818(__this, ___comparer, method) (( void (*) (Dictionary_2_t1099 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24818_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m24819_gshared (Dictionary_2_t1099 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m24819(__this, ___capacity, method) (( void (*) (Dictionary_2_t1099 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m24819_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24820_gshared (Dictionary_2_t1099 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24820(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1099 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2__ctor_m24820_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24821_gshared (Dictionary_2_t1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24821(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24821_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24822_gshared (Dictionary_2_t1099 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24822(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1099 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24822_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24823_gshared (Dictionary_2_t1099 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24823(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1099 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24823_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24824_gshared (Dictionary_2_t1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24824(__this, ___key, method) (( bool (*) (Dictionary_2_t1099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24824_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24825_gshared (Dictionary_2_t1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24825(__this, ___key, method) (( void (*) (Dictionary_2_t1099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24825_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24826_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24826(__this, method) (( bool (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24827_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24827(__this, method) (( Object_t * (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24828_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24828(__this, method) (( bool (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24828_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24829_gshared (Dictionary_2_t1099 * __this, KeyValuePair_2_t3060  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24829(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1099 *, KeyValuePair_2_t3060 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24829_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24830_gshared (Dictionary_2_t1099 * __this, KeyValuePair_2_t3060  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24830(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1099 *, KeyValuePair_2_t3060 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24830_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24831_gshared (Dictionary_2_t1099 * __this, KeyValuePair_2U5BU5D_t3415* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24831(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1099 *, KeyValuePair_2U5BU5D_t3415*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24831_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24832_gshared (Dictionary_2_t1099 * __this, KeyValuePair_2_t3060  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24832(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1099 *, KeyValuePair_2_t3060 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24832_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24833_gshared (Dictionary_2_t1099 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24833(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1099 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24833_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24834_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24834(__this, method) (( Object_t * (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24834_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24835_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24835(__this, method) (( Object_t* (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24835_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24836_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24836(__this, method) (( Object_t * (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24836_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m24837_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m24837(__this, method) (( int32_t (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_get_Count_m24837_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Item(TKey)
extern "C" VirtualButtonData_t861  Dictionary_2_get_Item_m24838_gshared (Dictionary_2_t1099 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m24838(__this, ___key, method) (( VirtualButtonData_t861  (*) (Dictionary_2_t1099 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m24838_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m24839_gshared (Dictionary_2_t1099 * __this, int32_t ___key, VirtualButtonData_t861  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m24839(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1099 *, int32_t, VirtualButtonData_t861 , const MethodInfo*))Dictionary_2_set_Item_m24839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24840_gshared (Dictionary_2_t1099 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24840(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1099 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24840_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24841_gshared (Dictionary_2_t1099 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24841(__this, ___size, method) (( void (*) (Dictionary_2_t1099 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24841_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24842_gshared (Dictionary_2_t1099 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24842(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1099 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24842_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3060  Dictionary_2_make_pair_m24843_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t861  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24843(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3060  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t861 , const MethodInfo*))Dictionary_2_make_pair_m24843_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m24844_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t861  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24844(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t861 , const MethodInfo*))Dictionary_2_pick_key_m24844_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::pick_value(TKey,TValue)
extern "C" VirtualButtonData_t861  Dictionary_2_pick_value_m24845_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t861  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24845(__this /* static, unused */, ___key, ___value, method) (( VirtualButtonData_t861  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t861 , const MethodInfo*))Dictionary_2_pick_value_m24845_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24846_gshared (Dictionary_2_t1099 * __this, KeyValuePair_2U5BU5D_t3415* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24846(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1099 *, KeyValuePair_2U5BU5D_t3415*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24846_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Resize()
extern "C" void Dictionary_2_Resize_m24847_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24847(__this, method) (( void (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_Resize_m24847_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m24848_gshared (Dictionary_2_t1099 * __this, int32_t ___key, VirtualButtonData_t861  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m24848(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1099 *, int32_t, VirtualButtonData_t861 , const MethodInfo*))Dictionary_2_Add_m24848_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Clear()
extern "C" void Dictionary_2_Clear_m24849_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m24849(__this, method) (( void (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_Clear_m24849_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m24850_gshared (Dictionary_2_t1099 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m24850(__this, ___key, method) (( bool (*) (Dictionary_2_t1099 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m24850_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m24851_gshared (Dictionary_2_t1099 * __this, VirtualButtonData_t861  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m24851(__this, ___value, method) (( bool (*) (Dictionary_2_t1099 *, VirtualButtonData_t861 , const MethodInfo*))Dictionary_2_ContainsValue_m24851_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m24852_gshared (Dictionary_2_t1099 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m24852(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1099 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2_GetObjectData_m24852_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m24853_gshared (Dictionary_2_t1099 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m24853(__this, ___sender, method) (( void (*) (Dictionary_2_t1099 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m24853_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m24854_gshared (Dictionary_2_t1099 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m24854(__this, ___key, method) (( bool (*) (Dictionary_2_t1099 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m24854_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m24855_gshared (Dictionary_2_t1099 * __this, int32_t ___key, VirtualButtonData_t861 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m24855(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1099 *, int32_t, VirtualButtonData_t861 *, const MethodInfo*))Dictionary_2_TryGetValue_m24855_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Keys()
extern "C" KeyCollection_t3063 * Dictionary_2_get_Keys_m24856_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m24856(__this, method) (( KeyCollection_t3063 * (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_get_Keys_m24856_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Values()
extern "C" ValueCollection_t3067 * Dictionary_2_get_Values_m24857_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24857(__this, method) (( ValueCollection_t3067 * (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_get_Values_m24857_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m24858_gshared (Dictionary_2_t1099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24858(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1099 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24858_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToTValue(System.Object)
extern "C" VirtualButtonData_t861  Dictionary_2_ToTValue_m24859_gshared (Dictionary_2_t1099 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24859(__this, ___value, method) (( VirtualButtonData_t861  (*) (Dictionary_2_t1099 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24859_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24860_gshared (Dictionary_2_t1099 * __this, KeyValuePair_2_t3060  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24860(__this, ___pair, method) (( bool (*) (Dictionary_2_t1099 *, KeyValuePair_2_t3060 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24860_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::GetEnumerator()
extern "C" Enumerator_t3065  Dictionary_2_GetEnumerator_m24861_gshared (Dictionary_2_t1099 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24861(__this, method) (( Enumerator_t3065  (*) (Dictionary_2_t1099 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24861_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1388  Dictionary_2_U3CCopyToU3Em__0_m24862_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t861  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24862(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t861 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24862_gshared)(__this /* static, unused */, ___key, ___value, method)
