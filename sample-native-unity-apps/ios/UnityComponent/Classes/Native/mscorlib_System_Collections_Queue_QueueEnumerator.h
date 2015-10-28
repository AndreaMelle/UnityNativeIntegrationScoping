#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Queue
struct Queue_t1175;

#include "mscorlib_System_Object.h"

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t1717  : public Object_t
{
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::queue
	Queue_t1175 * ___queue_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::current
	int32_t ___current_2;
};
