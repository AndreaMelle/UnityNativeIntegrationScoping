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
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t166;

#include "AssemblyU2DCSharp_abl_ABManager_ABRequest.h"

// abl.ABManager/ABRequest`1<System.Object>
struct  ABRequest_1_t2371  : public ABRequest_t3
{
	// System.String abl.ABManager/ABRequest`1<System.Object>::bundlename
	String_t* ___bundlename_0;
	// System.String abl.ABManager/ABRequest`1<System.Object>::assetname
	String_t* ___assetname_1;
	// System.Action`2<System.Boolean,T> abl.ABManager/ABRequest`1<System.Object>::callback
	Action_2_t166 * ___callback_2;
};
