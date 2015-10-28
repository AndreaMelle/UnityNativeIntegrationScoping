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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2327;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2329;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3288;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3289;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1387;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2335;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2339;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14326_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14326(__this, method) (( void (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2__ctor_m14326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14328_gshared (Dictionary_2_t2327 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14328(__this, ___comparer, method) (( void (*) (Dictionary_2_t2327 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14328_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14330_gshared (Dictionary_2_t2327 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14330(__this, ___capacity, method) (( void (*) (Dictionary_2_t2327 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14330_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14332_gshared (Dictionary_2_t2327 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14332(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2327 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2__ctor_m14332_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14334_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14334(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14334_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14336_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14336(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2327 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14336_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14338_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14338(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2327 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14338_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14340_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14340(__this, ___key, method) (( bool (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14340_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14342_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14342(__this, ___key, method) (( void (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14342_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14344_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14344(__this, method) (( bool (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14344_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14346_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14346(__this, method) (( Object_t * (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14348_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14348(__this, method) (( bool (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14348_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14350_gshared (Dictionary_2_t2327 * __this, KeyValuePair_2_t2330  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14350(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2327 *, KeyValuePair_2_t2330 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14350_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14352_gshared (Dictionary_2_t2327 * __this, KeyValuePair_2_t2330  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14352(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2327 *, KeyValuePair_2_t2330 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14352_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14354_gshared (Dictionary_2_t2327 * __this, KeyValuePair_2U5BU5D_t3288* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14354(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2327 *, KeyValuePair_2U5BU5D_t3288*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14354_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14356_gshared (Dictionary_2_t2327 * __this, KeyValuePair_2_t2330  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14356(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2327 *, KeyValuePair_2_t2330 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14356_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14358_gshared (Dictionary_2_t2327 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14358(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2327 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14358_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14360_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14360(__this, method) (( Object_t * (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14360_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14362_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14362(__this, method) (( Object_t* (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14362_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14364_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14364(__this, method) (( Object_t * (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14364_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14366_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14366(__this, method) (( int32_t (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_get_Count_m14366_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14368_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14368(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14368_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14370_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14370(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2327 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14370_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14372_gshared (Dictionary_2_t2327 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14372(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2327 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14372_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14374_gshared (Dictionary_2_t2327 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14374(__this, ___size, method) (( void (*) (Dictionary_2_t2327 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14374_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14376_gshared (Dictionary_2_t2327 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14376(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2327 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14376_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2330  Dictionary_2_make_pair_m14378_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14378(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2330  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14378_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14380_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14380(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m14380_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14382_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14382(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14382_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14384_gshared (Dictionary_2_t2327 * __this, KeyValuePair_2U5BU5D_t3288* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14384(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2327 *, KeyValuePair_2U5BU5D_t3288*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14384_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14386_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14386(__this, method) (( void (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_Resize_m14386_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14388_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14388(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2327 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m14388_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14390_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14390(__this, method) (( void (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_Clear_m14390_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14392_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14392(__this, ___key, method) (( bool (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14392_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14394_gshared (Dictionary_2_t2327 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14394(__this, ___value, method) (( bool (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14394_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14396_gshared (Dictionary_2_t2327 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14396(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2327 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))Dictionary_2_GetObjectData_m14396_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14398_gshared (Dictionary_2_t2327 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14398(__this, ___sender, method) (( void (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14398_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14400_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14400(__this, ___key, method) (( bool (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14400_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14402_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14402(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2327 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14402_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2335 * Dictionary_2_get_Keys_m14404_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14404(__this, method) (( KeyCollection_t2335 * (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_get_Keys_m14404_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2339 * Dictionary_2_get_Values_m14406_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14406(__this, method) (( ValueCollection_t2339 * (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_get_Values_m14406_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14408_gshared (Dictionary_2_t2327 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14408(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14408_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14410_gshared (Dictionary_2_t2327 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14410(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2327 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14410_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14412_gshared (Dictionary_2_t2327 * __this, KeyValuePair_2_t2330  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14412(__this, ___pair, method) (( bool (*) (Dictionary_2_t2327 *, KeyValuePair_2_t2330 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14412_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2337  Dictionary_2_GetEnumerator_m14413_gshared (Dictionary_2_t2327 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14413(__this, method) (( Enumerator_t2337  (*) (Dictionary_2_t2327 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14413_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1388  Dictionary_2_U3CCopyToU3Em__0_m14415_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14415(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1388  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14415_gshared)(__this /* static, unused */, ___key, ___value, method)
