#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.FtpWebRequest
struct FtpWebRequest_t1222;
// System.IO.Stream
struct Stream_t112;

#include "mscorlib_System_IO_Stream.h"

// System.Net.FtpDataStream
struct  FtpDataStream_t1221  : public Stream_t112
{
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t1222 * ___request_1;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t112 * ___networkStream_2;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_3;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_4;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_5;
};
