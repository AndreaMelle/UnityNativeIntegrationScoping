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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct Dictionary_2_t1099;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24901_gshared (Enumerator_t3065 * __this, Dictionary_2_t1099 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m24901(__this, ___dictionary, method) (( void (*) (Enumerator_t3065 *, Dictionary_2_t1099 *, const MethodInfo*))Enumerator__ctor_m24901_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24902_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24902(__this, method) (( Object_t * (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24902_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m24903_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m24903(__this, method) (( void (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24903_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1388  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24904_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24904(__this, method) (( DictionaryEntry_t1388  (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24904_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24905_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24905(__this, method) (( Object_t * (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24905_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24906_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24906(__this, method) (( Object_t * (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24906_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m24907_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m24907(__this, method) (( bool (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_MoveNext_m24907_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Current()
extern "C" KeyValuePair_2_t3060  Enumerator_get_Current_m24908_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m24908(__this, method) (( KeyValuePair_2_t3060  (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_get_Current_m24908_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m24909_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m24909(__this, method) (( int32_t (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_get_CurrentKey_m24909_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_CurrentValue()
extern "C" VirtualButtonData_t861  Enumerator_get_CurrentValue_m24910_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m24910(__this, method) (( VirtualButtonData_t861  (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_get_CurrentValue_m24910_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Reset()
extern "C" void Enumerator_Reset_m24911_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_Reset_m24911(__this, method) (( void (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_Reset_m24911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::VerifyState()
extern "C" void Enumerator_VerifyState_m24912_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m24912(__this, method) (( void (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_VerifyState_m24912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24913_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m24913(__this, method) (( void (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_VerifyCurrent_m24913_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Dispose()
extern "C" void Enumerator_Dispose_m24914_gshared (Enumerator_t3065 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m24914(__this, method) (( void (*) (Enumerator_t3065 *, const MethodInfo*))Enumerator_Dispose_m24914_gshared)(__this, method)
