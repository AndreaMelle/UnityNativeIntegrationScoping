#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t836;
// System.Net.WebConnection
struct WebConnection_t1240;
// System.Net.HttpWebRequest
struct HttpWebRequest_t12;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1218;
// System.IO.MemoryStream
struct MemoryStream_t1259;
// System.Object
struct Object_t;

#include "mscorlib_System_IO_Stream.h"

// System.Net.WebConnectionStream
struct  WebConnectionStream_t1237  : public Stream_t112
{
	// System.Boolean System.Net.WebConnectionStream::isRead
	bool ___isRead_2;
	// System.Net.WebConnection System.Net.WebConnectionStream::cnc
	WebConnection_t1240 * ___cnc_3;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::request
	HttpWebRequest_t12 * ___request_4;
	// System.Byte[] System.Net.WebConnectionStream::readBuffer
	ByteU5BU5D_t836* ___readBuffer_5;
	// System.Int32 System.Net.WebConnectionStream::readBufferOffset
	int32_t ___readBufferOffset_6;
	// System.Int32 System.Net.WebConnectionStream::readBufferSize
	int32_t ___readBufferSize_7;
	// System.Int32 System.Net.WebConnectionStream::contentLength
	int32_t ___contentLength_8;
	// System.Int32 System.Net.WebConnectionStream::totalRead
	int32_t ___totalRead_9;
	// System.Int64 System.Net.WebConnectionStream::totalWritten
	int64_t ___totalWritten_10;
	// System.Boolean System.Net.WebConnectionStream::nextReadCalled
	bool ___nextReadCalled_11;
	// System.Int32 System.Net.WebConnectionStream::pendingReads
	int32_t ___pendingReads_12;
	// System.Int32 System.Net.WebConnectionStream::pendingWrites
	int32_t ___pendingWrites_13;
	// System.Threading.ManualResetEvent System.Net.WebConnectionStream::pending
	ManualResetEvent_t1218 * ___pending_14;
	// System.Boolean System.Net.WebConnectionStream::allowBuffering
	bool ___allowBuffering_15;
	// System.Boolean System.Net.WebConnectionStream::sendChunked
	bool ___sendChunked_16;
	// System.IO.MemoryStream System.Net.WebConnectionStream::writeBuffer
	MemoryStream_t1259 * ___writeBuffer_17;
	// System.Boolean System.Net.WebConnectionStream::requestWritten
	bool ___requestWritten_18;
	// System.Byte[] System.Net.WebConnectionStream::headers
	ByteU5BU5D_t836* ___headers_19;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed_20;
	// System.Boolean System.Net.WebConnectionStream::headersSent
	bool ___headersSent_21;
	// System.Object System.Net.WebConnectionStream::locker
	Object_t * ___locker_22;
	// System.Boolean System.Net.WebConnectionStream::initRead
	bool ___initRead_23;
	// System.Boolean System.Net.WebConnectionStream::read_eof
	bool ___read_eof_24;
	// System.Boolean System.Net.WebConnectionStream::complete_request_written
	bool ___complete_request_written_25;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout_26;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout_27;
};
struct WebConnectionStream_t1237_StaticFields{
	// System.Byte[] System.Net.WebConnectionStream::crlf
	ByteU5BU5D_t836* ___crlf_1;
};
