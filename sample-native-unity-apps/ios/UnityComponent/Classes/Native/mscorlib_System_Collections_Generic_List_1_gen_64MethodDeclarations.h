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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t168;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t169;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2623;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3292;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2313;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Predicate`1<System.Object>
struct Predicate_1_t2361;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3293;
// System.Comparison`1<System.Object>
struct Comparison_1_t2363;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m14711_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1__ctor_m14711(__this, method) (( void (*) (List_1_t168 *, const MethodInfo*))List_1__ctor_m14711_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14712_gshared (List_1_t168 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14712(__this, ___collection, method) (( void (*) (List_1_t168 *, Object_t*, const MethodInfo*))List_1__ctor_m14712_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14713_gshared (List_1_t168 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14713(__this, ___capacity, method) (( void (*) (List_1_t168 *, int32_t, const MethodInfo*))List_1__ctor_m14713_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m14714_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14714(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14714_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14715_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14715(__this, method) (( Object_t* (*) (List_1_t168 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14715_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14716_gshared (List_1_t168 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14716(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t168 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14716_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14717_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14717(__this, method) (( Object_t * (*) (List_1_t168 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14717_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14718_gshared (List_1_t168 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14718(__this, ___item, method) (( int32_t (*) (List_1_t168 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14718_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14719_gshared (List_1_t168 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14719(__this, ___item, method) (( bool (*) (List_1_t168 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14719_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14720_gshared (List_1_t168 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14720(__this, ___item, method) (( int32_t (*) (List_1_t168 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14720_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14721_gshared (List_1_t168 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14721(__this, ___index, ___item, method) (( void (*) (List_1_t168 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14721_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14722_gshared (List_1_t168 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14722(__this, ___item, method) (( void (*) (List_1_t168 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14722_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14723_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14723(__this, method) (( bool (*) (List_1_t168 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14723_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14724_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14724(__this, method) (( bool (*) (List_1_t168 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14724_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14725_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14725(__this, method) (( Object_t * (*) (List_1_t168 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14726_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14726(__this, method) (( bool (*) (List_1_t168 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14726_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14727_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14727(__this, method) (( bool (*) (List_1_t168 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14727_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14728_gshared (List_1_t168 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14728(__this, ___index, method) (( Object_t * (*) (List_1_t168 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14728_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14729_gshared (List_1_t168 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14729(__this, ___index, ___value, method) (( void (*) (List_1_t168 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14729_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m14730_gshared (List_1_t168 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m14730(__this, ___item, method) (( void (*) (List_1_t168 *, Object_t *, const MethodInfo*))List_1_Add_m14730_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14731_gshared (List_1_t168 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14731(__this, ___newCount, method) (( void (*) (List_1_t168 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14731_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14732_gshared (List_1_t168 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14732(__this, ___collection, method) (( void (*) (List_1_t168 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14732_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14733_gshared (List_1_t168 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14733(__this, ___enumerable, method) (( void (*) (List_1_t168 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14733_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14734_gshared (List_1_t168 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14734(__this, ___collection, method) (( void (*) (List_1_t168 *, Object_t*, const MethodInfo*))List_1_AddRange_m14734_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2313 * List_1_AsReadOnly_m14735_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14735(__this, method) (( ReadOnlyCollection_1_t2313 * (*) (List_1_t168 *, const MethodInfo*))List_1_AsReadOnly_m14735_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m14736_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_Clear_m14736(__this, method) (( void (*) (List_1_t168 *, const MethodInfo*))List_1_Clear_m14736_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m14737_gshared (List_1_t168 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m14737(__this, ___item, method) (( bool (*) (List_1_t168 *, Object_t *, const MethodInfo*))List_1_Contains_m14737_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14738_gshared (List_1_t168 * __this, ObjectU5BU5D_t146* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14738(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t168 *, ObjectU5BU5D_t146*, int32_t, const MethodInfo*))List_1_CopyTo_m14738_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m14739_gshared (List_1_t168 * __this, Predicate_1_t2361 * ___match, const MethodInfo* method);
#define List_1_Find_m14739(__this, ___match, method) (( Object_t * (*) (List_1_t168 *, Predicate_1_t2361 *, const MethodInfo*))List_1_Find_m14739_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14740_gshared (Object_t * __this /* static, unused */, Predicate_1_t2361 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14740(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2361 *, const MethodInfo*))List_1_CheckMatch_m14740_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14741_gshared (List_1_t168 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2361 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14741(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t168 *, int32_t, int32_t, Predicate_1_t2361 *, const MethodInfo*))List_1_GetIndex_m14741_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2362  List_1_GetEnumerator_m14742_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14742(__this, method) (( Enumerator_t2362  (*) (List_1_t168 *, const MethodInfo*))List_1_GetEnumerator_m14742_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14743_gshared (List_1_t168 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m14743(__this, ___item, method) (( int32_t (*) (List_1_t168 *, Object_t *, const MethodInfo*))List_1_IndexOf_m14743_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14744_gshared (List_1_t168 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14744(__this, ___start, ___delta, method) (( void (*) (List_1_t168 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14744_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14745_gshared (List_1_t168 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14745(__this, ___index, method) (( void (*) (List_1_t168 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14745_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14746_gshared (List_1_t168 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m14746(__this, ___index, ___item, method) (( void (*) (List_1_t168 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m14746_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14747_gshared (List_1_t168 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14747(__this, ___collection, method) (( void (*) (List_1_t168 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14747_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m14748_gshared (List_1_t168 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m14748(__this, ___item, method) (( bool (*) (List_1_t168 *, Object_t *, const MethodInfo*))List_1_Remove_m14748_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14749_gshared (List_1_t168 * __this, Predicate_1_t2361 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14749(__this, ___match, method) (( int32_t (*) (List_1_t168 *, Predicate_1_t2361 *, const MethodInfo*))List_1_RemoveAll_m14749_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14750_gshared (List_1_t168 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14750(__this, ___index, method) (( void (*) (List_1_t168 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14750_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m14751_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_Reverse_m14751(__this, method) (( void (*) (List_1_t168 *, const MethodInfo*))List_1_Reverse_m14751_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m14752_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_Sort_m14752(__this, method) (( void (*) (List_1_t168 *, const MethodInfo*))List_1_Sort_m14752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m14753_gshared (List_1_t168 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m14753(__this, ___comparer, method) (( void (*) (List_1_t168 *, Object_t*, const MethodInfo*))List_1_Sort_m14753_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14754_gshared (List_1_t168 * __this, Comparison_1_t2363 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14754(__this, ___comparison, method) (( void (*) (List_1_t168 *, Comparison_1_t2363 *, const MethodInfo*))List_1_Sort_m14754_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t146* List_1_ToArray_m14755_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_ToArray_m14755(__this, method) (( ObjectU5BU5D_t146* (*) (List_1_t168 *, const MethodInfo*))List_1_ToArray_m14755_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m14756_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14756(__this, method) (( void (*) (List_1_t168 *, const MethodInfo*))List_1_TrimExcess_m14756_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14757_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14757(__this, method) (( int32_t (*) (List_1_t168 *, const MethodInfo*))List_1_get_Capacity_m14757_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14758_gshared (List_1_t168 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14758(__this, ___value, method) (( void (*) (List_1_t168 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14758_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m14759_gshared (List_1_t168 * __this, const MethodInfo* method);
#define List_1_get_Count_m14759(__this, method) (( int32_t (*) (List_1_t168 *, const MethodInfo*))List_1_get_Count_m14759_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m14760_gshared (List_1_t168 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14760(__this, ___index, method) (( Object_t * (*) (List_1_t168 *, int32_t, const MethodInfo*))List_1_get_Item_m14760_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14761_gshared (List_1_t168 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m14761(__this, ___index, ___value, method) (( void (*) (List_1_t168 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m14761_gshared)(__this, ___index, ___value, method)
