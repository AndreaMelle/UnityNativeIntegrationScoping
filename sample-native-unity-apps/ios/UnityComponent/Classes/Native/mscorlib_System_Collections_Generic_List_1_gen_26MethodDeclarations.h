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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t385;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1121;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3303;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3347;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2683;
// System.Int32[]
struct Int32U5BU5D_t162;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2686;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3348;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2690;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m5934_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1__ctor_m5934(__this, method) (( void (*) (List_1_t385 *, const MethodInfo*))List_1__ctor_m5934_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m5879_gshared (List_1_t385 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m5879(__this, ___collection, method) (( void (*) (List_1_t385 *, Object_t*, const MethodInfo*))List_1__ctor_m5879_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m19223_gshared (List_1_t385 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m19223(__this, ___capacity, method) (( void (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1__ctor_m19223_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m19224_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19224(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19224_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19225_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19225(__this, method) (( Object_t* (*) (List_1_t385 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19226_gshared (List_1_t385 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19226(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t385 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19226_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19227_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19227(__this, method) (( Object_t * (*) (List_1_t385 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19227_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19228_gshared (List_1_t385 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19228(__this, ___item, method) (( int32_t (*) (List_1_t385 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19228_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19229_gshared (List_1_t385 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19229(__this, ___item, method) (( bool (*) (List_1_t385 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19229_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19230_gshared (List_1_t385 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19230(__this, ___item, method) (( int32_t (*) (List_1_t385 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19230_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19231_gshared (List_1_t385 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19231(__this, ___index, ___item, method) (( void (*) (List_1_t385 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19231_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19232_gshared (List_1_t385 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19232(__this, ___item, method) (( void (*) (List_1_t385 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19232_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19233_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19233(__this, method) (( bool (*) (List_1_t385 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19233_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19234_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19234(__this, method) (( bool (*) (List_1_t385 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19234_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19235_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19235(__this, method) (( Object_t * (*) (List_1_t385 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19236_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19236(__this, method) (( bool (*) (List_1_t385 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19236_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19237_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19237(__this, method) (( bool (*) (List_1_t385 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19237_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19238_gshared (List_1_t385 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19238(__this, ___index, method) (( Object_t * (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19238_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19239_gshared (List_1_t385 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19239(__this, ___index, ___value, method) (( void (*) (List_1_t385 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19239_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m19240_gshared (List_1_t385 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m19240(__this, ___item, method) (( void (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_Add_m19240_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19241_gshared (List_1_t385 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19241(__this, ___newCount, method) (( void (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19241_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19242_gshared (List_1_t385 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19242(__this, ___collection, method) (( void (*) (List_1_t385 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19242_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19243_gshared (List_1_t385 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19243(__this, ___enumerable, method) (( void (*) (List_1_t385 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2426_gshared (List_1_t385 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2426(__this, ___collection, method) (( void (*) (List_1_t385 *, Object_t*, const MethodInfo*))List_1_AddRange_m2426_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2683 * List_1_AsReadOnly_m19244_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19244(__this, method) (( ReadOnlyCollection_1_t2683 * (*) (List_1_t385 *, const MethodInfo*))List_1_AsReadOnly_m19244_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m19245_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_Clear_m19245(__this, method) (( void (*) (List_1_t385 *, const MethodInfo*))List_1_Clear_m19245_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m19246_gshared (List_1_t385 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m19246(__this, ___item, method) (( bool (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_Contains_m19246_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19247_gshared (List_1_t385 * __this, Int32U5BU5D_t162* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19247(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t385 *, Int32U5BU5D_t162*, int32_t, const MethodInfo*))List_1_CopyTo_m19247_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m19248_gshared (List_1_t385 * __this, Predicate_1_t2686 * ___match, const MethodInfo* method);
#define List_1_Find_m19248(__this, ___match, method) (( int32_t (*) (List_1_t385 *, Predicate_1_t2686 *, const MethodInfo*))List_1_Find_m19248_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19249_gshared (Object_t * __this /* static, unused */, Predicate_1_t2686 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19249(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2686 *, const MethodInfo*))List_1_CheckMatch_m19249_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19250_gshared (List_1_t385 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2686 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19250(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t385 *, int32_t, int32_t, Predicate_1_t2686 *, const MethodInfo*))List_1_GetIndex_m19250_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1038  List_1_GetEnumerator_m5880_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m5880(__this, method) (( Enumerator_t1038  (*) (List_1_t385 *, const MethodInfo*))List_1_GetEnumerator_m5880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19251_gshared (List_1_t385 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m19251(__this, ___item, method) (( int32_t (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_IndexOf_m19251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19252_gshared (List_1_t385 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19252(__this, ___start, ___delta, method) (( void (*) (List_1_t385 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19252_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19253_gshared (List_1_t385 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19253(__this, ___index, method) (( void (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19253_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19254_gshared (List_1_t385 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m19254(__this, ___index, ___item, method) (( void (*) (List_1_t385 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m19254_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19255_gshared (List_1_t385 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19255(__this, ___collection, method) (( void (*) (List_1_t385 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19255_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m19256_gshared (List_1_t385 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m19256(__this, ___item, method) (( bool (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_Remove_m19256_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19257_gshared (List_1_t385 * __this, Predicate_1_t2686 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19257(__this, ___match, method) (( int32_t (*) (List_1_t385 *, Predicate_1_t2686 *, const MethodInfo*))List_1_RemoveAll_m19257_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19258_gshared (List_1_t385 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19258(__this, ___index, method) (( void (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19258_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m19259_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_Reverse_m19259(__this, method) (( void (*) (List_1_t385 *, const MethodInfo*))List_1_Reverse_m19259_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m19260_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_Sort_m19260(__this, method) (( void (*) (List_1_t385 *, const MethodInfo*))List_1_Sort_m19260_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m19261_gshared (List_1_t385 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m19261(__this, ___comparer, method) (( void (*) (List_1_t385 *, Object_t*, const MethodInfo*))List_1_Sort_m19261_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19262_gshared (List_1_t385 * __this, Comparison_1_t2690 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19262(__this, ___comparison, method) (( void (*) (List_1_t385 *, Comparison_1_t2690 *, const MethodInfo*))List_1_Sort_m19262_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t162* List_1_ToArray_m19263_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_ToArray_m19263(__this, method) (( Int32U5BU5D_t162* (*) (List_1_t385 *, const MethodInfo*))List_1_ToArray_m19263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m19264_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19264(__this, method) (( void (*) (List_1_t385 *, const MethodInfo*))List_1_TrimExcess_m19264_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19265_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19265(__this, method) (( int32_t (*) (List_1_t385 *, const MethodInfo*))List_1_get_Capacity_m19265_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19266_gshared (List_1_t385 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19266(__this, ___value, method) (( void (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19266_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m19267_gshared (List_1_t385 * __this, const MethodInfo* method);
#define List_1_get_Count_m19267(__this, method) (( int32_t (*) (List_1_t385 *, const MethodInfo*))List_1_get_Count_m19267_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m19268_gshared (List_1_t385 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19268(__this, ___index, method) (( int32_t (*) (List_1_t385 *, int32_t, const MethodInfo*))List_1_get_Item_m19268_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19269_gshared (List_1_t385 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m19269(__this, ___index, ___value, method) (( void (*) (List_1_t385 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m19269_gshared)(__this, ___index, ___value, method)
