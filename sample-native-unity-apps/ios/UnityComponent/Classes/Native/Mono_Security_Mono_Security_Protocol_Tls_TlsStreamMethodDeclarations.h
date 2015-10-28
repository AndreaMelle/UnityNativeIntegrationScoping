#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1529;
// System.Byte[]
struct ByteU5BU5D_t836;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
extern "C" void TlsStream__ctor_m8934 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
extern "C" void TlsStream__ctor_m8935 (TlsStream_t1529 * __this, ByteU5BU5D_t836* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
extern "C" bool TlsStream_get_EOF_m8936 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
extern "C" bool TlsStream_get_CanWrite_m8937 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
extern "C" bool TlsStream_get_CanRead_m8938 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
extern "C" bool TlsStream_get_CanSeek_m8939 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
extern "C" int64_t TlsStream_get_Position_m8940 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
extern "C" void TlsStream_set_Position_m8941 (TlsStream_t1529 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
extern "C" int64_t TlsStream_get_Length_m8942 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
extern "C" ByteU5BU5D_t836* TlsStream_ReadSmallValue_m8943 (TlsStream_t1529 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
extern "C" uint8_t TlsStream_ReadByte_m8944 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
extern "C" int16_t TlsStream_ReadInt16_m8945 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
extern "C" int32_t TlsStream_ReadInt24_m8946 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
extern "C" ByteU5BU5D_t836* TlsStream_ReadBytes_m8947 (TlsStream_t1529 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
extern "C" void TlsStream_Write_m8948 (TlsStream_t1529 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
extern "C" void TlsStream_Write_m8949 (TlsStream_t1529 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
extern "C" void TlsStream_WriteInt24_m8950 (TlsStream_t1529 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
extern "C" void TlsStream_Write_m8951 (TlsStream_t1529 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
extern "C" void TlsStream_Write_m8952 (TlsStream_t1529 * __this, ByteU5BU5D_t836* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
extern "C" void TlsStream_Reset_m8953 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
extern "C" ByteU5BU5D_t836* TlsStream_ToArray_m8954 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
extern "C" void TlsStream_Flush_m8955 (TlsStream_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
extern "C" void TlsStream_SetLength_m8956 (TlsStream_t1529 * __this, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t TlsStream_Seek_m8957 (TlsStream_t1529 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TlsStream_Read_m8958 (TlsStream_t1529 * __this, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void TlsStream_Write_m8959 (TlsStream_t1529 * __this, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
