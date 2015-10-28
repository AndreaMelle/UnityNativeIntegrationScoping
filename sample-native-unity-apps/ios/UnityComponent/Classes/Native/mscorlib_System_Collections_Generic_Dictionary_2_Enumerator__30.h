#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Dictionary_2_t1098;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct  Enumerator_t3049 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::dictionary
	Dictionary_2_t1098 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::current
	KeyValuePair_2_t3045  ___current_3;
};
