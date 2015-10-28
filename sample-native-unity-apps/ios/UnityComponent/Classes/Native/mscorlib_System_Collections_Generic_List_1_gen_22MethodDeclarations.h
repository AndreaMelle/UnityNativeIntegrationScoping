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

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t381;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t497;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t3332;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector3>
struct ICollection_1_t3333;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
struct ReadOnlyCollection_1_t2642;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t161;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t2647;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector3>
struct IComparer_1_t3334;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2650;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m18631_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1__ctor_m18631(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1__ctor_m18631_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18632_gshared (List_1_t381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m18632(__this, ___collection, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1__ctor_m18632_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18633_gshared (List_1_t381 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18633(__this, ___capacity, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1__ctor_m18633_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m18634_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18634(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18634_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18635_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18635(__this, method) (( Object_t* (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18636_gshared (List_1_t381 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18636(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t381 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18636_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18637_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18637(__this, method) (( Object_t * (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18638_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18638(__this, ___item, method) (( int32_t (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18638_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18639_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18639(__this, ___item, method) (( bool (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18639_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18640_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18640(__this, ___item, method) (( int32_t (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18640_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18641_gshared (List_1_t381 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18641(__this, ___index, ___item, method) (( void (*) (List_1_t381 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18641_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18642_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18642(__this, ___item, method) (( void (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18642_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18643_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18643(__this, method) (( bool (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18644_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18644(__this, method) (( bool (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18644_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18645_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18645(__this, method) (( Object_t * (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18645_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18646_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18646(__this, method) (( bool (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18646_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18647_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18647(__this, method) (( bool (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18647_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18648_gshared (List_1_t381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18648(__this, ___index, method) (( Object_t * (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18648_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18649_gshared (List_1_t381 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18649(__this, ___index, ___value, method) (( void (*) (List_1_t381 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18649_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m18650_gshared (List_1_t381 * __this, Vector3_t130  ___item, const MethodInfo* method);
#define List_1_Add_m18650(__this, ___item, method) (( void (*) (List_1_t381 *, Vector3_t130 , const MethodInfo*))List_1_Add_m18650_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18651_gshared (List_1_t381 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18651(__this, ___newCount, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18651_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18652_gshared (List_1_t381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18652(__this, ___collection, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18652_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18653_gshared (List_1_t381 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18653(__this, ___enumerable, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18653_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2416_gshared (List_1_t381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2416(__this, ___collection, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_AddRange_m2416_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2642 * List_1_AsReadOnly_m18654_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18654(__this, method) (( ReadOnlyCollection_1_t2642 * (*) (List_1_t381 *, const MethodInfo*))List_1_AsReadOnly_m18654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m18655_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_Clear_m18655(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1_Clear_m18655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m18656_gshared (List_1_t381 * __this, Vector3_t130  ___item, const MethodInfo* method);
#define List_1_Contains_m18656(__this, ___item, method) (( bool (*) (List_1_t381 *, Vector3_t130 , const MethodInfo*))List_1_Contains_m18656_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18657_gshared (List_1_t381 * __this, Vector3U5BU5D_t161* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18657(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t381 *, Vector3U5BU5D_t161*, int32_t, const MethodInfo*))List_1_CopyTo_m18657_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::Find(System.Predicate`1<T>)
extern "C" Vector3_t130  List_1_Find_m18658_gshared (List_1_t381 * __this, Predicate_1_t2647 * ___match, const MethodInfo* method);
#define List_1_Find_m18658(__this, ___match, method) (( Vector3_t130  (*) (List_1_t381 *, Predicate_1_t2647 *, const MethodInfo*))List_1_Find_m18658_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18659_gshared (Object_t * __this /* static, unused */, Predicate_1_t2647 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18659(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2647 *, const MethodInfo*))List_1_CheckMatch_m18659_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18660_gshared (List_1_t381 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2647 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18660(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t381 *, int32_t, int32_t, Predicate_1_t2647 *, const MethodInfo*))List_1_GetIndex_m18660_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t2641  List_1_GetEnumerator_m18661_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18661(__this, method) (( Enumerator_t2641  (*) (List_1_t381 *, const MethodInfo*))List_1_GetEnumerator_m18661_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18662_gshared (List_1_t381 * __this, Vector3_t130  ___item, const MethodInfo* method);
#define List_1_IndexOf_m18662(__this, ___item, method) (( int32_t (*) (List_1_t381 *, Vector3_t130 , const MethodInfo*))List_1_IndexOf_m18662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18663_gshared (List_1_t381 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18663(__this, ___start, ___delta, method) (( void (*) (List_1_t381 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18663_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18664_gshared (List_1_t381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18664(__this, ___index, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18664_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18665_gshared (List_1_t381 * __this, int32_t ___index, Vector3_t130  ___item, const MethodInfo* method);
#define List_1_Insert_m18665(__this, ___index, ___item, method) (( void (*) (List_1_t381 *, int32_t, Vector3_t130 , const MethodInfo*))List_1_Insert_m18665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18666_gshared (List_1_t381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18666(__this, ___collection, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18666_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m18667_gshared (List_1_t381 * __this, Vector3_t130  ___item, const MethodInfo* method);
#define List_1_Remove_m18667(__this, ___item, method) (( bool (*) (List_1_t381 *, Vector3_t130 , const MethodInfo*))List_1_Remove_m18667_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18668_gshared (List_1_t381 * __this, Predicate_1_t2647 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18668(__this, ___match, method) (( int32_t (*) (List_1_t381 *, Predicate_1_t2647 *, const MethodInfo*))List_1_RemoveAll_m18668_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18669_gshared (List_1_t381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18669(__this, ___index, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18669_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" void List_1_Reverse_m18670_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_Reverse_m18670(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1_Reverse_m18670_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort()
extern "C" void List_1_Sort_m18671_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_Sort_m18671(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1_Sort_m18671_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m18672_gshared (List_1_t381 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m18672(__this, ___comparer, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_Sort_m18672_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18673_gshared (List_1_t381 * __this, Comparison_1_t2650 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18673(__this, ___comparison, method) (( void (*) (List_1_t381 *, Comparison_1_t2650 *, const MethodInfo*))List_1_Sort_m18673_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t161* List_1_ToArray_m18674_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_ToArray_m18674(__this, method) (( Vector3U5BU5D_t161* (*) (List_1_t381 *, const MethodInfo*))List_1_ToArray_m18674_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::TrimExcess()
extern "C" void List_1_TrimExcess_m18675_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18675(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1_TrimExcess_m18675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18676_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18676(__this, method) (( int32_t (*) (List_1_t381 *, const MethodInfo*))List_1_get_Capacity_m18676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18677_gshared (List_1_t381 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18677(__this, ___value, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18677_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m18678_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_get_Count_m18678(__this, method) (( int32_t (*) (List_1_t381 *, const MethodInfo*))List_1_get_Count_m18678_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t130  List_1_get_Item_m18679_gshared (List_1_t381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18679(__this, ___index, method) (( Vector3_t130  (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_get_Item_m18679_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18680_gshared (List_1_t381 * __this, int32_t ___index, Vector3_t130  ___value, const MethodInfo* method);
#define List_1_set_Item_m18680(__this, ___index, ___value, method) (( void (*) (List_1_t381 *, int32_t, Vector3_t130 , const MethodInfo*))List_1_set_Item_m18680_gshared)(__this, ___index, ___value, method)
