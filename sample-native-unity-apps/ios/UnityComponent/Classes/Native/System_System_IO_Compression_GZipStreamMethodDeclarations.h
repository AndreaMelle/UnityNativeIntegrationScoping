﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.Compression.GZipStream
struct GZipStream_t1151;
// System.IO.Stream
struct Stream_t112;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_Compression_CompressionMode.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern "C" void GZipStream__ctor_m6267 (GZipStream_t1151 * __this, Stream_t112 * ___compressedStream, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
extern "C" void GZipStream__ctor_m6268 (GZipStream_t1151 * __this, Stream_t112 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
extern "C" void GZipStream_Dispose_m6269 (GZipStream_t1151 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t GZipStream_Read_m6270 (GZipStream_t1151 * __this, ByteU5BU5D_t836* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void GZipStream_Write_m6271 (GZipStream_t1151 * __this, ByteU5BU5D_t836* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Flush()
extern "C" void GZipStream_Flush_m6272 (GZipStream_t1151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t GZipStream_Seek_m6273 (GZipStream_t1151 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::SetLength(System.Int64)
extern "C" void GZipStream_SetLength_m6274 (GZipStream_t1151 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * GZipStream_BeginRead_m6275 (GZipStream_t1151 * __this, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t34 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * GZipStream_BeginWrite_m6276 (GZipStream_t1151 * __this, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t34 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
extern "C" int32_t GZipStream_EndRead_m6277 (GZipStream_t1151 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
extern "C" void GZipStream_EndWrite_m6278 (GZipStream_t1151 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
extern "C" bool GZipStream_get_CanRead_m6279 (GZipStream_t1151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
extern "C" bool GZipStream_get_CanSeek_m6280 (GZipStream_t1151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
extern "C" bool GZipStream_get_CanWrite_m6281 (GZipStream_t1151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Length()
extern "C" int64_t GZipStream_get_Length_m6282 (GZipStream_t1151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Position()
extern "C" int64_t GZipStream_get_Position_m6283 (GZipStream_t1151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
extern "C" void GZipStream_set_Position_m6284 (GZipStream_t1151 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
