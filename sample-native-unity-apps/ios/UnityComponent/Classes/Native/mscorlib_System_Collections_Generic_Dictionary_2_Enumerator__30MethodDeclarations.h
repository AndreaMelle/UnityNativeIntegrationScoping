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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Dictionary_2_t1098;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24753_gshared (Enumerator_t3049 * __this, Dictionary_2_t1098 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m24753(__this, ___dictionary, method) (( void (*) (Enumerator_t3049 *, Dictionary_2_t1098 *, const MethodInfo*))Enumerator__ctor_m24753_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24754_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24754(__this, method) (( Object_t * (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24754_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m24755_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m24755(__this, method) (( void (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24755_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1388  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24756_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24756(__this, method) (( DictionaryEntry_t1388  (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24756_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24757_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24757(__this, method) (( Object_t * (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24757_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24758_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24758(__this, method) (( Object_t * (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m24759_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m24759(__this, method) (( bool (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_MoveNext_m24759_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Current()
extern "C" KeyValuePair_2_t3045  Enumerator_get_Current_m24760_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m24760(__this, method) (( KeyValuePair_2_t3045  (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_get_Current_m24760_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m24761_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m24761(__this, method) (( int32_t (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_get_CurrentKey_m24761_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentValue()
extern "C" TrackableResultData_t860  Enumerator_get_CurrentValue_m24762_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m24762(__this, method) (( TrackableResultData_t860  (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_get_CurrentValue_m24762_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Reset()
extern "C" void Enumerator_Reset_m24763_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_Reset_m24763(__this, method) (( void (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_Reset_m24763_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyState()
extern "C" void Enumerator_VerifyState_m24764_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m24764(__this, method) (( void (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_VerifyState_m24764_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24765_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m24765(__this, method) (( void (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_VerifyCurrent_m24765_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Dispose()
extern "C" void Enumerator_Dispose_m24766_gshared (Enumerator_t3049 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m24766(__this, method) (( void (*) (Enumerator_t3049 *, const MethodInfo*))Enumerator_Dispose_m24766_gshared)(__this, method)
