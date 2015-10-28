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
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t1147;
// System.Byte[]
struct ByteU5BU5D_t836;

#include "mscorlib_System_IO_Stream.h"
#include "System_System_IO_Compression_CompressionMode.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"

// System.IO.Compression.DeflateStream
struct  DeflateStream_t1150  : public Stream_t112
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t112 * ___base_stream_1;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_2;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_3;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_4;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t1147 * ___feeder_5;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t ___z_stream_6;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t836* ___io_buffer_7;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t1026  ___data_8;
};
