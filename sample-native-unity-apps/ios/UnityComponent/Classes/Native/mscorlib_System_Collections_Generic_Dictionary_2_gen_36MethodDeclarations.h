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

// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3095;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2329;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>[]
struct KeyValuePair_2U5BU5D_t3423;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct IEnumerator_1_t3424;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1387;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t3100;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_t3104;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__33.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor()
extern "C" void Dictionary_2__ctor_m25303_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25303(__this, method) (( void (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2__ctor_m25303_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25305_gshared (Dictionary_2_t3095 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25305(__this, ___comparer, method) (( void (*) (Dictionary_2_t3095 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25305_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25307_gshared (Dictionary_2_t3095 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25307(__this, ___capacity, method) (( void (*) (Dictionary_2_t3095 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25307_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25309_gshared (Dictionary_2_t3095 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25309(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3095 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2__ctor_m25309_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25311_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25311(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25311_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25313_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25313(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3095 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25313_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25315_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25315(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3095 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25315_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25317_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25317(__this, ___key, method) (( bool (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25317_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25319_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25319(__this, ___key, method) (( void (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25319_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25321_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25321(__this, method) (( bool (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25321_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25323_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25323(__this, method) (( Object_t * (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25325_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25325(__this, method) (( bool (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25325_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25327_gshared (Dictionary_2_t3095 * __this, KeyValuePair_2_t3097  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25327(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3095 *, KeyValuePair_2_t3097 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25327_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25329_gshared (Dictionary_2_t3095 * __this, KeyValuePair_2_t3097  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25329(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3095 *, KeyValuePair_2_t3097 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25329_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25331_gshared (Dictionary_2_t3095 * __this, KeyValuePair_2U5BU5D_t3423* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25331(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3095 *, KeyValuePair_2U5BU5D_t3423*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25331_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25333_gshared (Dictionary_2_t3095 * __this, KeyValuePair_2_t3097  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25333(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3095 *, KeyValuePair_2_t3097 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25333_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25335_gshared (Dictionary_2_t3095 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25335(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3095 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25335_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25337_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25337(__this, method) (( Object_t * (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25337_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25339_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25339(__this, method) (( Object_t* (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25339_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25341_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25341(__this, method) (( Object_t * (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25343_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25343(__this, method) (( int32_t (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_get_Count_m25343_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Item(TKey)
extern "C" ProfileData_t952  Dictionary_2_get_Item_m25345_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25345(__this, ___key, method) (( ProfileData_t952  (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m25345_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25347_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, ProfileData_t952  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25347(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3095 *, Object_t *, ProfileData_t952 , const MethodInfo*))Dictionary_2_set_Item_m25347_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25349_gshared (Dictionary_2_t3095 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25349(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3095 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25349_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25351_gshared (Dictionary_2_t3095 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25351(__this, ___size, method) (( void (*) (Dictionary_2_t3095 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25351_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25353_gshared (Dictionary_2_t3095 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25353(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3095 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25353_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3097  Dictionary_2_make_pair_m25355_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t952  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25355(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3097  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t952 , const MethodInfo*))Dictionary_2_make_pair_m25355_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m25357_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t952  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25357(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t952 , const MethodInfo*))Dictionary_2_pick_key_m25357_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_value(TKey,TValue)
extern "C" ProfileData_t952  Dictionary_2_pick_value_m25359_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t952  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25359(__this /* static, unused */, ___key, ___value, method) (( ProfileData_t952  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t952 , const MethodInfo*))Dictionary_2_pick_value_m25359_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25361_gshared (Dictionary_2_t3095 * __this, KeyValuePair_2U5BU5D_t3423* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25361(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3095 *, KeyValuePair_2U5BU5D_t3423*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25361_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Resize()
extern "C" void Dictionary_2_Resize_m25363_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25363(__this, method) (( void (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_Resize_m25363_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25365_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, ProfileData_t952  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25365(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3095 *, Object_t *, ProfileData_t952 , const MethodInfo*))Dictionary_2_Add_m25365_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Clear()
extern "C" void Dictionary_2_Clear_m25367_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25367(__this, method) (( void (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_Clear_m25367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25369_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25369(__this, ___key, method) (( bool (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m25369_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25371_gshared (Dictionary_2_t3095 * __this, ProfileData_t952  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25371(__this, ___value, method) (( bool (*) (Dictionary_2_t3095 *, ProfileData_t952 , const MethodInfo*))Dictionary_2_ContainsValue_m25371_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25373_gshared (Dictionary_2_t3095 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25373(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3095 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2_GetObjectData_m25373_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25375_gshared (Dictionary_2_t3095 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25375(__this, ___sender, method) (( void (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25375_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25377_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25377(__this, ___key, method) (( bool (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m25377_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25379_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, ProfileData_t952 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25379(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3095 *, Object_t *, ProfileData_t952 *, const MethodInfo*))Dictionary_2_TryGetValue_m25379_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Keys()
extern "C" KeyCollection_t3100 * Dictionary_2_get_Keys_m25381_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25381(__this, method) (( KeyCollection_t3100 * (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_get_Keys_m25381_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Values()
extern "C" ValueCollection_t3104 * Dictionary_2_get_Values_m25383_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25383(__this, method) (( ValueCollection_t3104 * (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_get_Values_m25383_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m25385_gshared (Dictionary_2_t3095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25385(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25385_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTValue(System.Object)
extern "C" ProfileData_t952  Dictionary_2_ToTValue_m25387_gshared (Dictionary_2_t3095 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25387(__this, ___value, method) (( ProfileData_t952  (*) (Dictionary_2_t3095 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25387_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25389_gshared (Dictionary_2_t3095 * __this, KeyValuePair_2_t3097  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25389(__this, ___pair, method) (( bool (*) (Dictionary_2_t3095 *, KeyValuePair_2_t3097 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25389_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
extern "C" Enumerator_t3102  Dictionary_2_GetEnumerator_m25391_gshared (Dictionary_2_t3095 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25391(__this, method) (( Enumerator_t3102  (*) (Dictionary_2_t3095 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25391_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1388  Dictionary_2_U3CCopyToU3Em__0_m25393_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t952  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25393(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t952 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25393_gshared)(__this /* static, unused */, ___key, ___value, method)
