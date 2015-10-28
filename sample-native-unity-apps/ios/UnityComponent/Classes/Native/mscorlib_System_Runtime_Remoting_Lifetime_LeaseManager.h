#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1136;
// System.Threading.Timer
struct Timer_t1935;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t1934  : public Object_t
{
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t1136 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t1935 * ____timer_1;
};
