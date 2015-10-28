#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t19;

#include "mscorlib_System_Object.h"

// abl.ABReference
struct  ABReference_t8  : public Object_t
{
	// System.String abl.ABReference::bundlename
	String_t* ___bundlename_0;
	// UnityEngine.AssetBundle abl.ABReference::bundle
	AssetBundle_t19 * ___bundle_1;
	// System.Int32 abl.ABReference::version
	int32_t ___version_2;
	// System.String abl.ABReference::fullUrl
	String_t* ___fullUrl_3;
};
