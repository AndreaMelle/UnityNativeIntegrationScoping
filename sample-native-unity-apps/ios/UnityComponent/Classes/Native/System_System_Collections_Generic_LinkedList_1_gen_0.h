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
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3149;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct  LinkedList_1_t3148  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Object>::count
	uint32_t ___count_0;
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Object>::version
	uint32_t ___version_1;
	// System.Object System.Collections.Generic.LinkedList`1<System.Object>::syncRoot
	Object_t * ___syncRoot_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::first
	LinkedListNode_1_t3149 * ___first_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<System.Object>::si
	SerializationInfo_t728 * ___si_4;
};
