﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t1218;
// System.IO.Stream
struct Stream_t112;
// System.IO.MemoryStream
struct MemoryStream_t1259;
// Mono.Security.Protocol.Tls.Context
struct Context_t1517;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1522;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t836;

#include "mscorlib_System_IO_Stream.h"
#include "mscorlib_System_Boolean.h"

// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t1158  : public Stream_t112
{
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t112 * ___innerStream_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t1259 * ___inputBuffer_4;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t1517 * ___context_5;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t1522 * ___protocol_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_8;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_9;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Object_t * ___negotiate_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Object_t * ___read_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Object_t * ___write_12;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t1218 * ___negotiationComplete_13;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t836* ___recbuf_14;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t1259 * ___recordStream_15;
};
struct SslStreamBase_t1158_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t1218 * ___record_processing_2;
};
