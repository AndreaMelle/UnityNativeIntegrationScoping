#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Compression.DeflateStream
struct DeflateStream_t1150;

#include "mscorlib_System_IO_Stream.h"

// System.IO.Compression.GZipStream
struct  GZipStream_t1151  : public Stream_t112
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t1150 * ___deflateStream_1;
};
