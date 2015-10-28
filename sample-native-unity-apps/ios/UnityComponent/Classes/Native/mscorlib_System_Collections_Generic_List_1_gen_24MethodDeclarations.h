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

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t383;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t3339;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
struct IEnumerator_1_t3340;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector2>
struct ICollection_1_t3341;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>
struct ReadOnlyCollection_1_t2663;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t288;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2668;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector2>
struct IComparer_1_t3342;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2671;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
extern "C" void List_1__ctor_m18927_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1__ctor_m18927(__this, method) (( void (*) (List_1_t383 *, const MethodInfo*))List_1__ctor_m18927_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18928_gshared (List_1_t383 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m18928(__this, ___collection, method) (( void (*) (List_1_t383 *, Object_t*, const MethodInfo*))List_1__ctor_m18928_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18929_gshared (List_1_t383 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18929(__this, ___capacity, method) (( void (*) (List_1_t383 *, int32_t, const MethodInfo*))List_1__ctor_m18929_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.cctor()
extern "C" void List_1__cctor_m18930_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18930(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18930_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18931_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18931(__this, method) (( Object_t* (*) (List_1_t383 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18931_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18932_gshared (List_1_t383 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18932(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t383 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18932_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18933_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18933(__this, method) (( Object_t * (*) (List_1_t383 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18934_gshared (List_1_t383 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18934(__this, ___item, method) (( int32_t (*) (List_1_t383 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18934_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18935_gshared (List_1_t383 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18935(__this, ___item, method) (( bool (*) (List_1_t383 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18935_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18936_gshared (List_1_t383 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18936(__this, ___item, method) (( int32_t (*) (List_1_t383 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18936_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18937_gshared (List_1_t383 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18937(__this, ___index, ___item, method) (( void (*) (List_1_t383 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18937_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18938_gshared (List_1_t383 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18938(__this, ___item, method) (( void (*) (List_1_t383 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18938_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18939_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18939(__this, method) (( bool (*) (List_1_t383 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18939_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18940_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18940(__this, method) (( bool (*) (List_1_t383 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18940_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18941_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18941(__this, method) (( Object_t * (*) (List_1_t383 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18941_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18942_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18942(__this, method) (( bool (*) (List_1_t383 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18943_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18943(__this, method) (( bool (*) (List_1_t383 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18943_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18944_gshared (List_1_t383 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18944(__this, ___index, method) (( Object_t * (*) (List_1_t383 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18944_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18945_gshared (List_1_t383 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18945(__this, ___index, ___value, method) (( void (*) (List_1_t383 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18945_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
extern "C" void List_1_Add_m18946_gshared (List_1_t383 * __this, Vector2_t211  ___item, const MethodInfo* method);
#define List_1_Add_m18946(__this, ___item, method) (( void (*) (List_1_t383 *, Vector2_t211 , const MethodInfo*))List_1_Add_m18946_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18947_gshared (List_1_t383 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18947(__this, ___newCount, method) (( void (*) (List_1_t383 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18947_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18948_gshared (List_1_t383 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18948(__this, ___collection, method) (( void (*) (List_1_t383 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18948_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18949_gshared (List_1_t383 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18949(__this, ___enumerable, method) (( void (*) (List_1_t383 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18949_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2420_gshared (List_1_t383 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2420(__this, ___collection, method) (( void (*) (List_1_t383 *, Object_t*, const MethodInfo*))List_1_AddRange_m2420_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2663 * List_1_AsReadOnly_m18950_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18950(__this, method) (( ReadOnlyCollection_1_t2663 * (*) (List_1_t383 *, const MethodInfo*))List_1_AsReadOnly_m18950_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C" void List_1_Clear_m18951_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_Clear_m18951(__this, method) (( void (*) (List_1_t383 *, const MethodInfo*))List_1_Clear_m18951_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool List_1_Contains_m18952_gshared (List_1_t383 * __this, Vector2_t211  ___item, const MethodInfo* method);
#define List_1_Contains_m18952(__this, ___item, method) (( bool (*) (List_1_t383 *, Vector2_t211 , const MethodInfo*))List_1_Contains_m18952_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18953_gshared (List_1_t383 * __this, Vector2U5BU5D_t288* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18953(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t383 *, Vector2U5BU5D_t288*, int32_t, const MethodInfo*))List_1_CopyTo_m18953_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::Find(System.Predicate`1<T>)
extern "C" Vector2_t211  List_1_Find_m18954_gshared (List_1_t383 * __this, Predicate_1_t2668 * ___match, const MethodInfo* method);
#define List_1_Find_m18954(__this, ___match, method) (( Vector2_t211  (*) (List_1_t383 *, Predicate_1_t2668 *, const MethodInfo*))List_1_Find_m18954_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18955_gshared (Object_t * __this /* static, unused */, Predicate_1_t2668 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18955(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2668 *, const MethodInfo*))List_1_CheckMatch_m18955_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18956_gshared (List_1_t383 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2668 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18956(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t383 *, int32_t, int32_t, Predicate_1_t2668 *, const MethodInfo*))List_1_GetIndex_m18956_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Enumerator_t2662  List_1_GetEnumerator_m18957_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18957(__this, method) (( Enumerator_t2662  (*) (List_1_t383 *, const MethodInfo*))List_1_GetEnumerator_m18957_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18958_gshared (List_1_t383 * __this, Vector2_t211  ___item, const MethodInfo* method);
#define List_1_IndexOf_m18958(__this, ___item, method) (( int32_t (*) (List_1_t383 *, Vector2_t211 , const MethodInfo*))List_1_IndexOf_m18958_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18959_gshared (List_1_t383 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18959(__this, ___start, ___delta, method) (( void (*) (List_1_t383 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18959_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18960_gshared (List_1_t383 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18960(__this, ___index, method) (( void (*) (List_1_t383 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18960_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18961_gshared (List_1_t383 * __this, int32_t ___index, Vector2_t211  ___item, const MethodInfo* method);
#define List_1_Insert_m18961(__this, ___index, ___item, method) (( void (*) (List_1_t383 *, int32_t, Vector2_t211 , const MethodInfo*))List_1_Insert_m18961_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18962_gshared (List_1_t383 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18962(__this, ___collection, method) (( void (*) (List_1_t383 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18962_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
extern "C" bool List_1_Remove_m18963_gshared (List_1_t383 * __this, Vector2_t211  ___item, const MethodInfo* method);
#define List_1_Remove_m18963(__this, ___item, method) (( bool (*) (List_1_t383 *, Vector2_t211 , const MethodInfo*))List_1_Remove_m18963_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18964_gshared (List_1_t383 * __this, Predicate_1_t2668 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18964(__this, ___match, method) (( int32_t (*) (List_1_t383 *, Predicate_1_t2668 *, const MethodInfo*))List_1_RemoveAll_m18964_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18965_gshared (List_1_t383 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18965(__this, ___index, method) (( void (*) (List_1_t383 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18965_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
extern "C" void List_1_Reverse_m18966_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_Reverse_m18966(__this, method) (( void (*) (List_1_t383 *, const MethodInfo*))List_1_Reverse_m18966_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort()
extern "C" void List_1_Sort_m18967_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_Sort_m18967(__this, method) (( void (*) (List_1_t383 *, const MethodInfo*))List_1_Sort_m18967_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m18968_gshared (List_1_t383 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m18968(__this, ___comparer, method) (( void (*) (List_1_t383 *, Object_t*, const MethodInfo*))List_1_Sort_m18968_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18969_gshared (List_1_t383 * __this, Comparison_1_t2671 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18969(__this, ___comparison, method) (( void (*) (List_1_t383 *, Comparison_1_t2671 *, const MethodInfo*))List_1_Sort_m18969_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t288* List_1_ToArray_m18970_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_ToArray_m18970(__this, method) (( Vector2U5BU5D_t288* (*) (List_1_t383 *, const MethodInfo*))List_1_ToArray_m18970_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::TrimExcess()
extern "C" void List_1_TrimExcess_m18971_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18971(__this, method) (( void (*) (List_1_t383 *, const MethodInfo*))List_1_TrimExcess_m18971_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18972_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18972(__this, method) (( int32_t (*) (List_1_t383 *, const MethodInfo*))List_1_get_Capacity_m18972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18973_gshared (List_1_t383 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18973(__this, ___value, method) (( void (*) (List_1_t383 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18973_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t List_1_get_Count_m18974_gshared (List_1_t383 * __this, const MethodInfo* method);
#define List_1_get_Count_m18974(__this, method) (( int32_t (*) (List_1_t383 *, const MethodInfo*))List_1_get_Count_m18974_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t211  List_1_get_Item_m18975_gshared (List_1_t383 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18975(__this, ___index, method) (( Vector2_t211  (*) (List_1_t383 *, int32_t, const MethodInfo*))List_1_get_Item_m18975_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18976_gshared (List_1_t383 * __this, int32_t ___index, Vector2_t211  ___value, const MethodInfo* method);
#define List_1_set_Item_m18976(__this, ___index, ___value, method) (( void (*) (List_1_t383 *, int32_t, Vector2_t211 , const MethodInfo*))List_1_set_Item_m18976_gshared)(__this, ___index, ___value, method)
