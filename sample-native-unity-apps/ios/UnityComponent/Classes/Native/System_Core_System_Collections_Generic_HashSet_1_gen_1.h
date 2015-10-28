#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t162;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t2353;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2329;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t2352  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Object>::table
	Int32U5BU5D_t162* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Object>::links
	LinkU5BU5D_t2353* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<System.Object>::slots
	ObjectU5BU5D_t146* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Object>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Object>::si
	SerializationInfo_t728 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::generation
	int32_t ___generation_13;
};
