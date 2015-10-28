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

#include "mscorlib_System_Object.h"
#include "System_System_Net_FtpStatusCode.h"

// System.Net.FtpStatus
struct  FtpStatus_t1224  : public Object_t
{
	// System.Net.FtpStatusCode System.Net.FtpStatus::statusCode
	int32_t ___statusCode_0;
	// System.String System.Net.FtpStatus::statusDescription
	String_t* ___statusDescription_1;
};
