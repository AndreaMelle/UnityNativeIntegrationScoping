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

// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t942;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t1002;
// System.Collections.Generic.IEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerator_1_t1018;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>
struct ICollection_1_t3418;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>
struct ReadOnlyCollection_1_t3080;
// Vuforia.TargetFinder/TargetSearchResult[]
struct TargetSearchResultU5BU5D_t3078;
// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t3085;
// System.Collections.Generic.IComparer`1<Vuforia.TargetFinder/TargetSearchResult>
struct IComparer_1_t3419;
// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
struct Comparison_1_t3088;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_63.h"

// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void List_1__ctor_m6046_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1__ctor_m6046(__this, method) (( void (*) (List_1_t942 *, const MethodInfo*))List_1__ctor_m6046_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25059_gshared (List_1_t942 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25059(__this, ___collection, method) (( void (*) (List_1_t942 *, Object_t*, const MethodInfo*))List_1__ctor_m25059_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m25060_gshared (List_1_t942 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m25060(__this, ___capacity, method) (( void (*) (List_1_t942 *, int32_t, const MethodInfo*))List_1__ctor_m25060_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.cctor()
extern "C" void List_1__cctor_m25061_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25061(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25061_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25062_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25062(__this, method) (( Object_t* (*) (List_1_t942 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25063_gshared (List_1_t942 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25063(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t942 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25063_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25064_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25064(__this, method) (( Object_t * (*) (List_1_t942 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25064_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25065_gshared (List_1_t942 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25065(__this, ___item, method) (( int32_t (*) (List_1_t942 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25065_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25066_gshared (List_1_t942 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25066(__this, ___item, method) (( bool (*) (List_1_t942 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25066_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25067_gshared (List_1_t942 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25067(__this, ___item, method) (( int32_t (*) (List_1_t942 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25067_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25068_gshared (List_1_t942 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25068(__this, ___index, ___item, method) (( void (*) (List_1_t942 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25068_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25069_gshared (List_1_t942 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25069(__this, ___item, method) (( void (*) (List_1_t942 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25069_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25070_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25070(__this, method) (( bool (*) (List_1_t942 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25071_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25071(__this, method) (( bool (*) (List_1_t942 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25071_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25072_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25072(__this, method) (( Object_t * (*) (List_1_t942 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25073_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25073(__this, method) (( bool (*) (List_1_t942 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25073_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25074_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25074(__this, method) (( bool (*) (List_1_t942 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25074_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25075_gshared (List_1_t942 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25075(__this, ___index, method) (( Object_t * (*) (List_1_t942 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25075_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25076_gshared (List_1_t942 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25076(__this, ___index, ___value, method) (( void (*) (List_1_t942 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25076_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Add(T)
extern "C" void List_1_Add_m25077_gshared (List_1_t942 * __this, TargetSearchResult_t938  ___item, const MethodInfo* method);
#define List_1_Add_m25077(__this, ___item, method) (( void (*) (List_1_t942 *, TargetSearchResult_t938 , const MethodInfo*))List_1_Add_m25077_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25078_gshared (List_1_t942 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25078(__this, ___newCount, method) (( void (*) (List_1_t942 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25078_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25079_gshared (List_1_t942 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25079(__this, ___collection, method) (( void (*) (List_1_t942 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25079_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25080_gshared (List_1_t942 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25080(__this, ___enumerable, method) (( void (*) (List_1_t942 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25080_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25081_gshared (List_1_t942 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25081(__this, ___collection, method) (( void (*) (List_1_t942 *, Object_t*, const MethodInfo*))List_1_AddRange_m25081_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3080 * List_1_AsReadOnly_m25082_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25082(__this, method) (( ReadOnlyCollection_1_t3080 * (*) (List_1_t942 *, const MethodInfo*))List_1_AsReadOnly_m25082_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Clear()
extern "C" void List_1_Clear_m25083_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_Clear_m25083(__this, method) (( void (*) (List_1_t942 *, const MethodInfo*))List_1_Clear_m25083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Contains(T)
extern "C" bool List_1_Contains_m25084_gshared (List_1_t942 * __this, TargetSearchResult_t938  ___item, const MethodInfo* method);
#define List_1_Contains_m25084(__this, ___item, method) (( bool (*) (List_1_t942 *, TargetSearchResult_t938 , const MethodInfo*))List_1_Contains_m25084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25085_gshared (List_1_t942 * __this, TargetSearchResultU5BU5D_t3078* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25085(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t942 *, TargetSearchResultU5BU5D_t3078*, int32_t, const MethodInfo*))List_1_CopyTo_m25085_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Find(System.Predicate`1<T>)
extern "C" TargetSearchResult_t938  List_1_Find_m25086_gshared (List_1_t942 * __this, Predicate_1_t3085 * ___match, const MethodInfo* method);
#define List_1_Find_m25086(__this, ___match, method) (( TargetSearchResult_t938  (*) (List_1_t942 *, Predicate_1_t3085 *, const MethodInfo*))List_1_Find_m25086_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25087_gshared (Object_t * __this /* static, unused */, Predicate_1_t3085 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25087(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3085 *, const MethodInfo*))List_1_CheckMatch_m25087_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25088_gshared (List_1_t942 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3085 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25088(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t942 *, int32_t, int32_t, Predicate_1_t3085 *, const MethodInfo*))List_1_GetIndex_m25088_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GetEnumerator()
extern "C" Enumerator_t3079  List_1_GetEnumerator_m25089_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25089(__this, method) (( Enumerator_t3079  (*) (List_1_t942 *, const MethodInfo*))List_1_GetEnumerator_m25089_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25090_gshared (List_1_t942 * __this, TargetSearchResult_t938  ___item, const MethodInfo* method);
#define List_1_IndexOf_m25090(__this, ___item, method) (( int32_t (*) (List_1_t942 *, TargetSearchResult_t938 , const MethodInfo*))List_1_IndexOf_m25090_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25091_gshared (List_1_t942 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25091(__this, ___start, ___delta, method) (( void (*) (List_1_t942 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25091_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25092_gshared (List_1_t942 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25092(__this, ___index, method) (( void (*) (List_1_t942 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25092_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25093_gshared (List_1_t942 * __this, int32_t ___index, TargetSearchResult_t938  ___item, const MethodInfo* method);
#define List_1_Insert_m25093(__this, ___index, ___item, method) (( void (*) (List_1_t942 *, int32_t, TargetSearchResult_t938 , const MethodInfo*))List_1_Insert_m25093_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25094_gshared (List_1_t942 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25094(__this, ___collection, method) (( void (*) (List_1_t942 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25094_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Remove(T)
extern "C" bool List_1_Remove_m25095_gshared (List_1_t942 * __this, TargetSearchResult_t938  ___item, const MethodInfo* method);
#define List_1_Remove_m25095(__this, ___item, method) (( bool (*) (List_1_t942 *, TargetSearchResult_t938 , const MethodInfo*))List_1_Remove_m25095_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25096_gshared (List_1_t942 * __this, Predicate_1_t3085 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25096(__this, ___match, method) (( int32_t (*) (List_1_t942 *, Predicate_1_t3085 *, const MethodInfo*))List_1_RemoveAll_m25096_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25097_gshared (List_1_t942 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25097(__this, ___index, method) (( void (*) (List_1_t942 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25097_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Reverse()
extern "C" void List_1_Reverse_m25098_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_Reverse_m25098(__this, method) (( void (*) (List_1_t942 *, const MethodInfo*))List_1_Reverse_m25098_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort()
extern "C" void List_1_Sort_m25099_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_Sort_m25099(__this, method) (( void (*) (List_1_t942 *, const MethodInfo*))List_1_Sort_m25099_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25100_gshared (List_1_t942 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25100(__this, ___comparer, method) (( void (*) (List_1_t942 *, Object_t*, const MethodInfo*))List_1_Sort_m25100_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25101_gshared (List_1_t942 * __this, Comparison_1_t3088 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25101(__this, ___comparison, method) (( void (*) (List_1_t942 *, Comparison_1_t3088 *, const MethodInfo*))List_1_Sort_m25101_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::ToArray()
extern "C" TargetSearchResultU5BU5D_t3078* List_1_ToArray_m25102_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_ToArray_m25102(__this, method) (( TargetSearchResultU5BU5D_t3078* (*) (List_1_t942 *, const MethodInfo*))List_1_ToArray_m25102_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m25103_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25103(__this, method) (( void (*) (List_1_t942 *, const MethodInfo*))List_1_TrimExcess_m25103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25104_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25104(__this, method) (( int32_t (*) (List_1_t942 *, const MethodInfo*))List_1_get_Capacity_m25104_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25105_gshared (List_1_t942 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25105(__this, ___value, method) (( void (*) (List_1_t942 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25105_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Count()
extern "C" int32_t List_1_get_Count_m25106_gshared (List_1_t942 * __this, const MethodInfo* method);
#define List_1_get_Count_m25106(__this, method) (( int32_t (*) (List_1_t942 *, const MethodInfo*))List_1_get_Count_m25106_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Item(System.Int32)
extern "C" TargetSearchResult_t938  List_1_get_Item_m25107_gshared (List_1_t942 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25107(__this, ___index, method) (( TargetSearchResult_t938  (*) (List_1_t942 *, int32_t, const MethodInfo*))List_1_get_Item_m25107_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25108_gshared (List_1_t942 * __this, int32_t ___index, TargetSearchResult_t938  ___value, const MethodInfo* method);
#define List_1_set_Item_m25108(__this, ___index, ___value, method) (( void (*) (List_1_t942 *, int32_t, TargetSearchResult_t938 , const MethodInfo*))List_1_set_Item_m25108_gshared)(__this, ___index, ___value, method)
