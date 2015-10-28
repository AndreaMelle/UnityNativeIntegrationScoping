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

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1257;
// System.Net.ServicePoint
struct ServicePoint_t1227;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t1240;
// System.Net.HttpWebRequest
struct HttpWebRequest_t12;
// System.Collections.Queue
struct Queue_t1175;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m7007 (WebConnectionGroup_t1257 * __this, ServicePoint_t1227 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1240 * WebConnectionGroup_GetConnection_m7008 (WebConnectionGroup_t1257 * __this, HttpWebRequest_t12 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m7009 (Object_t * __this /* static, unused */, WebConnection_t1240 * ___cnc, HttpWebRequest_t12 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t1240 * WebConnectionGroup_CreateOrReuseConnection_m7010 (WebConnectionGroup_t1257 * __this, HttpWebRequest_t12 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1175 * WebConnectionGroup_get_Queue_m7011 (WebConnectionGroup_t1257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
