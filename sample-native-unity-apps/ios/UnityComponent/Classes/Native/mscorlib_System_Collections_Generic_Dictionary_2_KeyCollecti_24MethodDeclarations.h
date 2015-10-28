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

// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2876;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2871;
// System.Collections.Generic.IEnumerator`1<Vuforia.Image/PIXEL_FORMAT>
struct IEnumerator_1_t3377;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object
struct Object_t;
// Vuforia.Image/PIXEL_FORMAT[]
struct PIXEL_FORMATU5BU5D_t2867;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_25.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m21687_gshared (KeyCollection_t2876 * __this, Dictionary_2_t2871 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m21687(__this, ___dictionary, method) (( void (*) (KeyCollection_t2876 *, Dictionary_2_t2871 *, const MethodInfo*))KeyCollection__ctor_m21687_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21688_gshared (KeyCollection_t2876 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21688(__this, ___item, method) (( void (*) (KeyCollection_t2876 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21688_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21689_gshared (KeyCollection_t2876 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21689(__this, method) (( void (*) (KeyCollection_t2876 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21690_gshared (KeyCollection_t2876 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21690(__this, ___item, method) (( bool (*) (KeyCollection_t2876 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21690_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21691_gshared (KeyCollection_t2876 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21691(__this, ___item, method) (( bool (*) (KeyCollection_t2876 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21691_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21692_gshared (KeyCollection_t2876 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21692(__this, method) (( Object_t* (*) (KeyCollection_t2876 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21692_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m21693_gshared (KeyCollection_t2876 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m21693(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2876 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21693_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21694_gshared (KeyCollection_t2876 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21694(__this, method) (( Object_t * (*) (KeyCollection_t2876 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21694_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21695_gshared (KeyCollection_t2876 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21695(__this, method) (( bool (*) (KeyCollection_t2876 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21695_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21696_gshared (KeyCollection_t2876 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21696(__this, method) (( bool (*) (KeyCollection_t2876 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21696_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m21697_gshared (KeyCollection_t2876 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m21697(__this, method) (( Object_t * (*) (KeyCollection_t2876 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21697_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m21698_gshared (KeyCollection_t2876 * __this, PIXEL_FORMATU5BU5D_t2867* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m21698(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2876 *, PIXEL_FORMATU5BU5D_t2867*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m21698_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2877  KeyCollection_GetEnumerator_m21699_gshared (KeyCollection_t2876 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m21699(__this, method) (( Enumerator_t2877  (*) (KeyCollection_t2876 *, const MethodInfo*))KeyCollection_GetEnumerator_m21699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m21700_gshared (KeyCollection_t2876 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m21700(__this, method) (( int32_t (*) (KeyCollection_t2876 *, const MethodInfo*))KeyCollection_get_Count_m21700_gshared)(__this, method)
