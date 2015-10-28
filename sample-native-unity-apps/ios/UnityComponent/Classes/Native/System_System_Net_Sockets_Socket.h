#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Queue
struct Queue_t1175;
// System.Threading.Thread
struct Thread_t17;
// System.Net.EndPoint
struct EndPoint_t1170;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_Sockets_AddressFamily.h"
#include "System_System_Net_Sockets_SocketType.h"
#include "System_System_Net_Sockets_ProtocolType.h"

// System.Net.Sockets.Socket
struct  Socket_t1164  : public Object_t
{
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t1175 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t1175 * ___writeQ_1;
	// System.Boolean System.Net.Sockets.Socket::islistening
	bool ___islistening_2;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort_3;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort_4;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_7;
	// System.IntPtr System.Net.Sockets.Socket::socket
	IntPtr_t ___socket_8;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family_9;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type_10;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type_11;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking_12;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t17 * ___blocking_thread_13;
	// System.Boolean System.Net.Sockets.Socket::isbound
	bool ___isbound_14;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count_16;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected_17;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed_18;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed_19;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t1170 * ___seed_endpoint_20;
};
struct Socket_t1164_StaticFields{
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported_5;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported_6;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count_15;
	// System.Reflection.MethodInfo System.Net.Sockets.Socket::check_socket_policy
	MethodInfo_t * ___check_socket_policy_21;
};
