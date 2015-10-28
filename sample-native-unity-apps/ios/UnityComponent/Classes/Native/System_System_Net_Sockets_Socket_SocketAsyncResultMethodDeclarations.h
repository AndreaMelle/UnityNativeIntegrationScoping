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

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t1168;
// System.Net.Sockets.Socket
struct Socket_t1164;
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t34;
// System.Collections.Queue
struct Queue_t1175;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t1174;
// System.Net.Sockets.Socket/Worker
struct Worker_t1173;
// System.Exception
struct Exception_t107;
// System.Threading.WaitHandle
struct WaitHandle_t1169;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket_SocketOperation.h"
#include "System_System_Net_Sockets_SocketError.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C" void SocketAsyncResult__ctor_m6343 (SocketAsyncResult_t1168 * __this, Socket_t1164 * ___sock, Object_t * ___state, AsyncCallback_t34 * ___callback, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C" void SocketAsyncResult_CheckIfThrowDelayedException_m6344 (SocketAsyncResult_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C" void SocketAsyncResult_CompleteAllOnDispose_m6345 (SocketAsyncResult_t1168 * __this, Queue_t1175 * ___queue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C" void SocketAsyncResult_CompleteDisposed_m6346 (SocketAsyncResult_t1168 * __this, Object_t * ___unused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C" void SocketAsyncResult_Complete_m6347 (SocketAsyncResult_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C" SocketAsyncCall_t1174 * SocketAsyncResult_GetDelegate_m6348 (SocketAsyncResult_t1168 * __this, Worker_t1173 * ___worker, int32_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C" void SocketAsyncResult_Complete_m6349 (SocketAsyncResult_t1168 * __this, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C" void SocketAsyncResult_Complete_m6350 (SocketAsyncResult_t1168 * __this, Exception_t107 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C" Object_t * SocketAsyncResult_get_AsyncState_m6351 (SocketAsyncResult_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1169 * SocketAsyncResult_get_AsyncWaitHandle_m6352 (SocketAsyncResult_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C" bool SocketAsyncResult_get_IsCompleted_m6353 (SocketAsyncResult_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C" void SocketAsyncResult_set_IsCompleted_m6354 (SocketAsyncResult_t1168 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C" int32_t SocketAsyncResult_get_Total_m6355 (SocketAsyncResult_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C" void SocketAsyncResult_set_Total_m6356 (SocketAsyncResult_t1168 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C" int32_t SocketAsyncResult_get_ErrorCode_m6357 (SocketAsyncResult_t1168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
