#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t1195;
// System.Net.CookieCollection/CookieCollectionComparer
struct CookieCollectionComparer_t1193;

#include "mscorlib_System_Object.h"

// System.Net.CookieCollection
struct  CookieCollection_t1194  : public Object_t
{
	// System.Collections.Generic.List`1<System.Net.Cookie> System.Net.CookieCollection::list
	List_1_t1195 * ___list_0;
};
struct CookieCollection_t1194_StaticFields{
	// System.Net.CookieCollection/CookieCollectionComparer System.Net.CookieCollection::Comparer
	CookieCollectionComparer_t1193 * ___Comparer_1;
};
