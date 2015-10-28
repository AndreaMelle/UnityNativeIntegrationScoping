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

// System.Net.IPEndPoint
struct IPEndPoint_t1230;
// System.Net.IPAddress
struct IPAddress_t1242;
// System.Net.EndPoint
struct EndPoint_t1170;
// System.Net.SocketAddress
struct SocketAddress_t1252;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void IPEndPoint__ctor_m6840 (IPEndPoint_t1230 * __this, IPAddress_t1242 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern "C" void IPEndPoint__ctor_m6841 (IPEndPoint_t1230 * __this, int64_t ___iaddr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C" IPAddress_t1242 * IPEndPoint_get_Address_m6842 (IPEndPoint_t1230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
extern "C" void IPEndPoint_set_Address_m6843 (IPEndPoint_t1230 * __this, IPAddress_t1242 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern "C" int32_t IPEndPoint_get_AddressFamily_m6844 (IPEndPoint_t1230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C" int32_t IPEndPoint_get_Port_m6845 (IPEndPoint_t1230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
extern "C" void IPEndPoint_set_Port_m6846 (IPEndPoint_t1230 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern "C" EndPoint_t1170 * IPEndPoint_Create_m6847 (IPEndPoint_t1230 * __this, SocketAddress_t1252 * ___socketAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern "C" SocketAddress_t1252 * IPEndPoint_Serialize_m6848 (IPEndPoint_t1230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
extern "C" String_t* IPEndPoint_ToString_m6849 (IPEndPoint_t1230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern "C" bool IPEndPoint_Equals_m6850 (IPEndPoint_t1230 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
extern "C" int32_t IPEndPoint_GetHashCode_m6851 (IPEndPoint_t1230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
