#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.FtpWebResponse
struct FtpWebResponse_t1217;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1218;
// System.Exception
struct Exception_t107;
// System.AsyncCallback
struct AsyncCallback_t34;
// System.IO.Stream
struct Stream_t112;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// System.Net.FtpAsyncResult
struct  FtpAsyncResult_t1216  : public Object_t
{
	// System.Net.FtpWebResponse System.Net.FtpAsyncResult::response
	FtpWebResponse_t1217 * ___response_0;
	// System.Threading.ManualResetEvent System.Net.FtpAsyncResult::waitHandle
	ManualResetEvent_t1218 * ___waitHandle_1;
	// System.Exception System.Net.FtpAsyncResult::exception
	Exception_t107 * ___exception_2;
	// System.AsyncCallback System.Net.FtpAsyncResult::callback
	AsyncCallback_t34 * ___callback_3;
	// System.IO.Stream System.Net.FtpAsyncResult::stream
	Stream_t112 * ___stream_4;
	// System.Object System.Net.FtpAsyncResult::state
	Object_t * ___state_5;
	// System.Boolean System.Net.FtpAsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Net.FtpAsyncResult::synch
	bool ___synch_7;
	// System.Object System.Net.FtpAsyncResult::locker
	Object_t * ___locker_8;
};
