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

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t416;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t3313;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t3314;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t478;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2546;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t301;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2550;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t3315;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2553;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2441_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1__ctor_m2441(__this, method) (( void (*) (List_1_t416 *, const MethodInfo*))List_1__ctor_m2441_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17125_gshared (List_1_t416 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17125(__this, ___collection, method) (( void (*) (List_1_t416 *, Object_t*, const MethodInfo*))List_1__ctor_m17125_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3728_gshared (List_1_t416 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3728(__this, ___capacity, method) (( void (*) (List_1_t416 *, int32_t, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m17126_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17126(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17126_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17127_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17127(__this, method) (( Object_t* (*) (List_1_t416 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17127_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17128_gshared (List_1_t416 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17128(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t416 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17128_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17129_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17129(__this, method) (( Object_t * (*) (List_1_t416 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17129_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17130_gshared (List_1_t416 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17130(__this, ___item, method) (( int32_t (*) (List_1_t416 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17130_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17131_gshared (List_1_t416 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17131(__this, ___item, method) (( bool (*) (List_1_t416 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17131_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17132_gshared (List_1_t416 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17132(__this, ___item, method) (( int32_t (*) (List_1_t416 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17132_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17133_gshared (List_1_t416 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17133(__this, ___index, ___item, method) (( void (*) (List_1_t416 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17133_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17134_gshared (List_1_t416 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17134(__this, ___item, method) (( void (*) (List_1_t416 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17134_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17135_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17135(__this, method) (( bool (*) (List_1_t416 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17135_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17136_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17136(__this, method) (( bool (*) (List_1_t416 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17136_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17137_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17137(__this, method) (( Object_t * (*) (List_1_t416 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17138_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17138(__this, method) (( bool (*) (List_1_t416 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17138_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17139_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17139(__this, method) (( bool (*) (List_1_t416 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17139_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17140_gshared (List_1_t416 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17140(__this, ___index, method) (( Object_t * (*) (List_1_t416 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17140_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17141_gshared (List_1_t416 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17141(__this, ___index, ___value, method) (( void (*) (List_1_t416 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17141_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m17142_gshared (List_1_t416 * __this, UIVertex_t308  ___item, const MethodInfo* method);
#define List_1_Add_m17142(__this, ___item, method) (( void (*) (List_1_t416 *, UIVertex_t308 , const MethodInfo*))List_1_Add_m17142_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17143_gshared (List_1_t416 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17143(__this, ___newCount, method) (( void (*) (List_1_t416 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17143_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17144_gshared (List_1_t416 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17144(__this, ___collection, method) (( void (*) (List_1_t416 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17144_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17145_gshared (List_1_t416 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17145(__this, ___enumerable, method) (( void (*) (List_1_t416 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17145_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17146_gshared (List_1_t416 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17146(__this, ___collection, method) (( void (*) (List_1_t416 *, Object_t*, const MethodInfo*))List_1_AddRange_m17146_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2546 * List_1_AsReadOnly_m17147_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17147(__this, method) (( ReadOnlyCollection_1_t2546 * (*) (List_1_t416 *, const MethodInfo*))List_1_AsReadOnly_m17147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m17148_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_Clear_m17148(__this, method) (( void (*) (List_1_t416 *, const MethodInfo*))List_1_Clear_m17148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m17149_gshared (List_1_t416 * __this, UIVertex_t308  ___item, const MethodInfo* method);
#define List_1_Contains_m17149(__this, ___item, method) (( bool (*) (List_1_t416 *, UIVertex_t308 , const MethodInfo*))List_1_Contains_m17149_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17150_gshared (List_1_t416 * __this, UIVertexU5BU5D_t301* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17150(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t416 *, UIVertexU5BU5D_t301*, int32_t, const MethodInfo*))List_1_CopyTo_m17150_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t308  List_1_Find_m17151_gshared (List_1_t416 * __this, Predicate_1_t2550 * ___match, const MethodInfo* method);
#define List_1_Find_m17151(__this, ___match, method) (( UIVertex_t308  (*) (List_1_t416 *, Predicate_1_t2550 *, const MethodInfo*))List_1_Find_m17151_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17152_gshared (Object_t * __this /* static, unused */, Predicate_1_t2550 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17152(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2550 *, const MethodInfo*))List_1_CheckMatch_m17152_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17153_gshared (List_1_t416 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2550 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17153(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t416 *, int32_t, int32_t, Predicate_1_t2550 *, const MethodInfo*))List_1_GetIndex_m17153_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2545  List_1_GetEnumerator_m17154_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17154(__this, method) (( Enumerator_t2545  (*) (List_1_t416 *, const MethodInfo*))List_1_GetEnumerator_m17154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17155_gshared (List_1_t416 * __this, UIVertex_t308  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17155(__this, ___item, method) (( int32_t (*) (List_1_t416 *, UIVertex_t308 , const MethodInfo*))List_1_IndexOf_m17155_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17156_gshared (List_1_t416 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17156(__this, ___start, ___delta, method) (( void (*) (List_1_t416 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17156_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17157_gshared (List_1_t416 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17157(__this, ___index, method) (( void (*) (List_1_t416 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17157_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17158_gshared (List_1_t416 * __this, int32_t ___index, UIVertex_t308  ___item, const MethodInfo* method);
#define List_1_Insert_m17158(__this, ___index, ___item, method) (( void (*) (List_1_t416 *, int32_t, UIVertex_t308 , const MethodInfo*))List_1_Insert_m17158_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17159_gshared (List_1_t416 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17159(__this, ___collection, method) (( void (*) (List_1_t416 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17159_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m17160_gshared (List_1_t416 * __this, UIVertex_t308  ___item, const MethodInfo* method);
#define List_1_Remove_m17160(__this, ___item, method) (( bool (*) (List_1_t416 *, UIVertex_t308 , const MethodInfo*))List_1_Remove_m17160_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17161_gshared (List_1_t416 * __this, Predicate_1_t2550 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17161(__this, ___match, method) (( int32_t (*) (List_1_t416 *, Predicate_1_t2550 *, const MethodInfo*))List_1_RemoveAll_m17161_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17162_gshared (List_1_t416 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17162(__this, ___index, method) (( void (*) (List_1_t416 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17162_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m17163_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_Reverse_m17163(__this, method) (( void (*) (List_1_t416 *, const MethodInfo*))List_1_Reverse_m17163_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m17164_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_Sort_m17164(__this, method) (( void (*) (List_1_t416 *, const MethodInfo*))List_1_Sort_m17164_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m17165_gshared (List_1_t416 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m17165(__this, ___comparer, method) (( void (*) (List_1_t416 *, Object_t*, const MethodInfo*))List_1_Sort_m17165_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17166_gshared (List_1_t416 * __this, Comparison_1_t2553 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17166(__this, ___comparison, method) (( void (*) (List_1_t416 *, Comparison_1_t2553 *, const MethodInfo*))List_1_Sort_m17166_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t301* List_1_ToArray_m17167_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_ToArray_m17167(__this, method) (( UIVertexU5BU5D_t301* (*) (List_1_t416 *, const MethodInfo*))List_1_ToArray_m17167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m17168_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17168(__this, method) (( void (*) (List_1_t416 *, const MethodInfo*))List_1_TrimExcess_m17168_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2442_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m2442(__this, method) (( int32_t (*) (List_1_t416 *, const MethodInfo*))List_1_get_Capacity_m2442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2443_gshared (List_1_t416 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m2443(__this, ___value, method) (( void (*) (List_1_t416 *, int32_t, const MethodInfo*))List_1_set_Capacity_m2443_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m17169_gshared (List_1_t416 * __this, const MethodInfo* method);
#define List_1_get_Count_m17169(__this, method) (( int32_t (*) (List_1_t416 *, const MethodInfo*))List_1_get_Count_m17169_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t308  List_1_get_Item_m17170_gshared (List_1_t416 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17170(__this, ___index, method) (( UIVertex_t308  (*) (List_1_t416 *, int32_t, const MethodInfo*))List_1_get_Item_m17170_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17171_gshared (List_1_t416 * __this, int32_t ___index, UIVertex_t308  ___value, const MethodInfo* method);
#define List_1_set_Item_m17171(__this, ___index, ___value, method) (( void (*) (List_1_t416 *, int32_t, UIVertex_t308 , const MethodInfo*))List_1_set_Item_m17171_gshared)(__this, ___index, ___value, method)
