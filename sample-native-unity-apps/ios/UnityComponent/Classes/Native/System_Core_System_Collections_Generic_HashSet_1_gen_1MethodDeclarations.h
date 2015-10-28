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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2352;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2623;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2329;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m14589_gshared (HashSet_1_t2352 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m14589(__this, method) (( void (*) (HashSet_1_t2352 *, const MethodInfo*))HashSet_1__ctor_m14589_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m14591_gshared (HashSet_1_t2352 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m14591(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2352 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))HashSet_1__ctor_m14591_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14593_gshared (HashSet_1_t2352 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14593(__this, method) (( Object_t* (*) (HashSet_1_t2352 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14595_gshared (HashSet_1_t2352 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14595(__this, method) (( bool (*) (HashSet_1_t2352 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14595_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14597_gshared (HashSet_1_t2352 * __this, ObjectU5BU5D_t146* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14597(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2352 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14597_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14599_gshared (HashSet_1_t2352 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14599(__this, ___item, method) (( void (*) (HashSet_1_t2352 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14599_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14601_gshared (HashSet_1_t2352 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14601(__this, method) (( Object_t * (*) (HashSet_1_t2352 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14601_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m14603_gshared (HashSet_1_t2352 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m14603(__this, method) (( int32_t (*) (HashSet_1_t2352 *, const MethodInfo*))HashSet_1_get_Count_m14603_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m14605_gshared (HashSet_1_t2352 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m14605(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2352 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m14605_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m14607_gshared (HashSet_1_t2352 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m14607(__this, ___size, method) (( void (*) (HashSet_1_t2352 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m14607_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m14609_gshared (HashSet_1_t2352 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m14609(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2352 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m14609_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m14611_gshared (HashSet_1_t2352 * __this, ObjectU5BU5D_t146* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m14611(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2352 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m14611_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m14613_gshared (HashSet_1_t2352 * __this, ObjectU5BU5D_t146* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m14613(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2352 *, ObjectU5BU5D_t146*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m14613_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m14615_gshared (HashSet_1_t2352 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m14615(__this, method) (( void (*) (HashSet_1_t2352 *, const MethodInfo*))HashSet_1_Resize_m14615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m14617_gshared (HashSet_1_t2352 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m14617(__this, ___index, method) (( int32_t (*) (HashSet_1_t2352 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m14617_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m14619_gshared (HashSet_1_t2352 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m14619(__this, ___item, method) (( int32_t (*) (HashSet_1_t2352 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m14619_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m14621_gshared (HashSet_1_t2352 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m14621(__this, ___item, method) (( bool (*) (HashSet_1_t2352 *, Object_t *, const MethodInfo*))HashSet_1_Add_m14621_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m14623_gshared (HashSet_1_t2352 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m14623(__this, method) (( void (*) (HashSet_1_t2352 *, const MethodInfo*))HashSet_1_Clear_m14623_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m14625_gshared (HashSet_1_t2352 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m14625(__this, ___item, method) (( bool (*) (HashSet_1_t2352 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m14625_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m14627_gshared (HashSet_1_t2352 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m14627(__this, ___item, method) (( bool (*) (HashSet_1_t2352 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m14627_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m14629_gshared (HashSet_1_t2352 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m14629(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2352 *, SerializationInfo_t728 *, StreamingContext_t729 , const MethodInfo*))HashSet_1_GetObjectData_m14629_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m14631_gshared (HashSet_1_t2352 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m14631(__this, ___sender, method) (( void (*) (HashSet_1_t2352 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m14631_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2356  HashSet_1_GetEnumerator_m14633_gshared (HashSet_1_t2352 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m14633(__this, method) (( Enumerator_t2356  (*) (HashSet_1_t2352 *, const MethodInfo*))HashSet_1_GetEnumerator_m14633_gshared)(__this, method)
