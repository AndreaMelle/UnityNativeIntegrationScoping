#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t1039;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedList`1<System.Int32>
struct  LinkedList_1_t878  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Int32>::count
	uint32_t ___count_0;
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Int32>::version
	uint32_t ___version_1;
	// System.Object System.Collections.Generic.LinkedList`1<System.Int32>::syncRoot
	Object_t * ___syncRoot_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::first
	LinkedListNode_1_t1039 * ___first_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<System.Int32>::si
	SerializationInfo_t728 * ___si_4;
};
