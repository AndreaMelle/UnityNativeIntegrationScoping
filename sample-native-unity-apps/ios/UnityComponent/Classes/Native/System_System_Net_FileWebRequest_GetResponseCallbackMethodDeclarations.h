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

// System.Net.FileWebRequest/GetResponseCallback
struct GetResponseCallback_t1210;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t113;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FileWebRequest/GetResponseCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetResponseCallback__ctor_m6591 (GetResponseCallback_t1210 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::Invoke()
extern "C" WebResponse_t113 * GetResponseCallback_Invoke_m6592 (GetResponseCallback_t1210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" WebResponse_t113 * pinvoke_delegate_wrapper_GetResponseCallback_t1210(Il2CppObject* delegate);
// System.IAsyncResult System.Net.FileWebRequest/GetResponseCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GetResponseCallback_BeginInvoke_m6593 (GetResponseCallback_t1210 * __this, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::EndInvoke(System.IAsyncResult)
extern "C" WebResponse_t113 * GetResponseCallback_EndInvoke_m6594 (GetResponseCallback_t1210 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
