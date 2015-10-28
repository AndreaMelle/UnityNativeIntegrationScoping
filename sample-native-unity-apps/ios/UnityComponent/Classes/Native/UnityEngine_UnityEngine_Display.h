#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Display[]
struct DisplayU5BU5D_t558;
// UnityEngine.Display
struct Display_t557;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t556;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"

// UnityEngine.Display
struct  Display_t557  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;
};
struct Display_t557_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t558* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t557 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t556 * ___onDisplaysUpdated_3;
};
