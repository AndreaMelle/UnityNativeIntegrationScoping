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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1134;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1135;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t1132;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C" void NameObjectCollectionBase__ctor_m6174 (NameObjectCollectionBase_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase__ctor_m6175 (NameObjectCollectionBase_t1134 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m6176 (NameObjectCollectionBase_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m6177 (NameObjectCollectionBase_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m6178 (NameObjectCollectionBase_t1134 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C" void NameObjectCollectionBase_Init_m6179 (NameObjectCollectionBase_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C" KeysCollection_t1135 * NameObjectCollectionBase_get_Keys_m6180 (NameObjectCollectionBase_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C" Object_t * NameObjectCollectionBase_GetEnumerator_m6181 (NameObjectCollectionBase_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase_GetObjectData_m6182 (NameObjectCollectionBase_t1134 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C" int32_t NameObjectCollectionBase_get_Count_m6183 (NameObjectCollectionBase_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C" void NameObjectCollectionBase_OnDeserialization_m6184 (NameObjectCollectionBase_t1134 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C" bool NameObjectCollectionBase_get_IsReadOnly_m6185 (NameObjectCollectionBase_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseAdd_m6186 (NameObjectCollectionBase_t1134 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m6187 (NameObjectCollectionBase_t1134 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m6188 (NameObjectCollectionBase_t1134 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C" String_t* NameObjectCollectionBase_BaseGetKey_m6189 (NameObjectCollectionBase_t1134 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern "C" void NameObjectCollectionBase_BaseRemove_m6190 (NameObjectCollectionBase_t1134 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseSet_m6191 (NameObjectCollectionBase_t1134 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C" _Item_t1132 * NameObjectCollectionBase_FindFirstMatchedItem_m6192 (NameObjectCollectionBase_t1134 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern "C" bool NameObjectCollectionBase_Equals_m6193 (NameObjectCollectionBase_t1134 * __this, String_t* ___s1, String_t* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
