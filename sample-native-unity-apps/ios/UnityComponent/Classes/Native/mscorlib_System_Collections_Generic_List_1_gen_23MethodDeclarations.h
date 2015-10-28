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

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t382;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t3335;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>
struct IEnumerator_1_t3336;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Color32>
struct ICollection_1_t3337;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
struct ReadOnlyCollection_1_t2653;
// UnityEngine.Color32[]
struct Color32U5BU5D_t494;
// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2658;
// System.Collections.Generic.IComparer`1<UnityEngine.Color32>
struct IComparer_1_t3338;
// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2661;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor()
extern "C" void List_1__ctor_m18776_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1__ctor_m18776(__this, method) (( void (*) (List_1_t382 *, const MethodInfo*))List_1__ctor_m18776_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18777_gshared (List_1_t382 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m18777(__this, ___collection, method) (( void (*) (List_1_t382 *, Object_t*, const MethodInfo*))List_1__ctor_m18777_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18778_gshared (List_1_t382 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18778(__this, ___capacity, method) (( void (*) (List_1_t382 *, int32_t, const MethodInfo*))List_1__ctor_m18778_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.cctor()
extern "C" void List_1__cctor_m18779_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18779(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18779_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18780_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18780(__this, method) (( Object_t* (*) (List_1_t382 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18780_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18781_gshared (List_1_t382 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18781(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t382 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18781_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18782_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18782(__this, method) (( Object_t * (*) (List_1_t382 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18782_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18783_gshared (List_1_t382 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18783(__this, ___item, method) (( int32_t (*) (List_1_t382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18783_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18784_gshared (List_1_t382 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18784(__this, ___item, method) (( bool (*) (List_1_t382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18784_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18785_gshared (List_1_t382 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18785(__this, ___item, method) (( int32_t (*) (List_1_t382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18785_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18786_gshared (List_1_t382 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18786(__this, ___index, ___item, method) (( void (*) (List_1_t382 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18786_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18787_gshared (List_1_t382 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18787(__this, ___item, method) (( void (*) (List_1_t382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18787_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18788_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18788(__this, method) (( bool (*) (List_1_t382 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18789_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18789(__this, method) (( bool (*) (List_1_t382 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18789_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18790_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18790(__this, method) (( Object_t * (*) (List_1_t382 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18790_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18791_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18791(__this, method) (( bool (*) (List_1_t382 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18791_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18792_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18792(__this, method) (( bool (*) (List_1_t382 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18792_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18793_gshared (List_1_t382 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18793(__this, ___index, method) (( Object_t * (*) (List_1_t382 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18793_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18794_gshared (List_1_t382 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18794(__this, ___index, ___value, method) (( void (*) (List_1_t382 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18794_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T)
extern "C" void List_1_Add_m18795_gshared (List_1_t382 * __this, Color32_t418  ___item, const MethodInfo* method);
#define List_1_Add_m18795(__this, ___item, method) (( void (*) (List_1_t382 *, Color32_t418 , const MethodInfo*))List_1_Add_m18795_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18796_gshared (List_1_t382 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18796(__this, ___newCount, method) (( void (*) (List_1_t382 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18796_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18797_gshared (List_1_t382 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18797(__this, ___collection, method) (( void (*) (List_1_t382 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18797_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18798_gshared (List_1_t382 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18798(__this, ___enumerable, method) (( void (*) (List_1_t382 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18798_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2418_gshared (List_1_t382 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2418(__this, ___collection, method) (( void (*) (List_1_t382 *, Object_t*, const MethodInfo*))List_1_AddRange_m2418_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2653 * List_1_AsReadOnly_m18799_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18799(__this, method) (( ReadOnlyCollection_1_t2653 * (*) (List_1_t382 *, const MethodInfo*))List_1_AsReadOnly_m18799_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C" void List_1_Clear_m18800_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_Clear_m18800(__this, method) (( void (*) (List_1_t382 *, const MethodInfo*))List_1_Clear_m18800_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T)
extern "C" bool List_1_Contains_m18801_gshared (List_1_t382 * __this, Color32_t418  ___item, const MethodInfo* method);
#define List_1_Contains_m18801(__this, ___item, method) (( bool (*) (List_1_t382 *, Color32_t418 , const MethodInfo*))List_1_Contains_m18801_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18802_gshared (List_1_t382 * __this, Color32U5BU5D_t494* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18802(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t382 *, Color32U5BU5D_t494*, int32_t, const MethodInfo*))List_1_CopyTo_m18802_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::Find(System.Predicate`1<T>)
extern "C" Color32_t418  List_1_Find_m18803_gshared (List_1_t382 * __this, Predicate_1_t2658 * ___match, const MethodInfo* method);
#define List_1_Find_m18803(__this, ___match, method) (( Color32_t418  (*) (List_1_t382 *, Predicate_1_t2658 *, const MethodInfo*))List_1_Find_m18803_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18804_gshared (Object_t * __this /* static, unused */, Predicate_1_t2658 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18804(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2658 *, const MethodInfo*))List_1_CheckMatch_m18804_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18805_gshared (List_1_t382 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2658 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18805(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t382 *, int32_t, int32_t, Predicate_1_t2658 *, const MethodInfo*))List_1_GetIndex_m18805_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Enumerator_t2652  List_1_GetEnumerator_m18806_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18806(__this, method) (( Enumerator_t2652  (*) (List_1_t382 *, const MethodInfo*))List_1_GetEnumerator_m18806_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18807_gshared (List_1_t382 * __this, Color32_t418  ___item, const MethodInfo* method);
#define List_1_IndexOf_m18807(__this, ___item, method) (( int32_t (*) (List_1_t382 *, Color32_t418 , const MethodInfo*))List_1_IndexOf_m18807_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18808_gshared (List_1_t382 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18808(__this, ___start, ___delta, method) (( void (*) (List_1_t382 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18808_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18809_gshared (List_1_t382 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18809(__this, ___index, method) (( void (*) (List_1_t382 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18809_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18810_gshared (List_1_t382 * __this, int32_t ___index, Color32_t418  ___item, const MethodInfo* method);
#define List_1_Insert_m18810(__this, ___index, ___item, method) (( void (*) (List_1_t382 *, int32_t, Color32_t418 , const MethodInfo*))List_1_Insert_m18810_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18811_gshared (List_1_t382 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18811(__this, ___collection, method) (( void (*) (List_1_t382 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18811_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T)
extern "C" bool List_1_Remove_m18812_gshared (List_1_t382 * __this, Color32_t418  ___item, const MethodInfo* method);
#define List_1_Remove_m18812(__this, ___item, method) (( bool (*) (List_1_t382 *, Color32_t418 , const MethodInfo*))List_1_Remove_m18812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18813_gshared (List_1_t382 * __this, Predicate_1_t2658 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18813(__this, ___match, method) (( int32_t (*) (List_1_t382 *, Predicate_1_t2658 *, const MethodInfo*))List_1_RemoveAll_m18813_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18814_gshared (List_1_t382 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18814(__this, ___index, method) (( void (*) (List_1_t382 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18814_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Reverse()
extern "C" void List_1_Reverse_m18815_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_Reverse_m18815(__this, method) (( void (*) (List_1_t382 *, const MethodInfo*))List_1_Reverse_m18815_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort()
extern "C" void List_1_Sort_m18816_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_Sort_m18816(__this, method) (( void (*) (List_1_t382 *, const MethodInfo*))List_1_Sort_m18816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m18817_gshared (List_1_t382 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m18817(__this, ___comparer, method) (( void (*) (List_1_t382 *, Object_t*, const MethodInfo*))List_1_Sort_m18817_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18818_gshared (List_1_t382 * __this, Comparison_1_t2661 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18818(__this, ___comparison, method) (( void (*) (List_1_t382 *, Comparison_1_t2661 *, const MethodInfo*))List_1_Sort_m18818_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t494* List_1_ToArray_m18819_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_ToArray_m18819(__this, method) (( Color32U5BU5D_t494* (*) (List_1_t382 *, const MethodInfo*))List_1_ToArray_m18819_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::TrimExcess()
extern "C" void List_1_TrimExcess_m18820_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18820(__this, method) (( void (*) (List_1_t382 *, const MethodInfo*))List_1_TrimExcess_m18820_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18821_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18821(__this, method) (( int32_t (*) (List_1_t382 *, const MethodInfo*))List_1_get_Capacity_m18821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18822_gshared (List_1_t382 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18822(__this, ___value, method) (( void (*) (List_1_t382 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18822_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t List_1_get_Count_m18823_gshared (List_1_t382 * __this, const MethodInfo* method);
#define List_1_get_Count_m18823(__this, method) (( int32_t (*) (List_1_t382 *, const MethodInfo*))List_1_get_Count_m18823_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t418  List_1_get_Item_m18824_gshared (List_1_t382 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18824(__this, ___index, method) (( Color32_t418  (*) (List_1_t382 *, int32_t, const MethodInfo*))List_1_get_Item_m18824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18825_gshared (List_1_t382 * __this, int32_t ___index, Color32_t418  ___value, const MethodInfo* method);
#define List_1_set_Item_m18825(__this, ___index, ___value, method) (( void (*) (List_1_t382 *, int32_t, Color32_t418 , const MethodInfo*))List_1_set_Item_m18825_gshared)(__this, ___index, ___value, method)
