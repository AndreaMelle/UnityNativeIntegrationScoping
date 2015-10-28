#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t112;

#include "mscorlib_System_IO_Stream.h"

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t1152  : public Stream_t112
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t112 * ___innerStream_1;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_2;
};
