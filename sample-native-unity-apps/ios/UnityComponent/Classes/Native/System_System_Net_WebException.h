#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.WebResponse
struct WebResponse_t113;

#include "mscorlib_System_InvalidOperationException.h"
#include "System_System_Net_WebExceptionStatus.h"

// System.Net.WebException
struct  WebException_t111  : public InvalidOperationException_t1246
{
	// System.Net.WebResponse System.Net.WebException::response
	WebResponse_t113 * ___response_12;
	// System.Net.WebExceptionStatus System.Net.WebException::status
	int32_t ___status_13;
};
