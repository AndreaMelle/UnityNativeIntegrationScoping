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

// System.Net.IPHostEntry
struct IPHostEntry_t1229;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t1171;
// System.String[]
struct StringU5BU5D_t669;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m6852 (IPHostEntry_t1229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t1171* IPHostEntry_get_AddressList_m6853 (IPHostEntry_t1229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m6854 (IPHostEntry_t1229 * __this, IPAddressU5BU5D_t1171* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m6855 (IPHostEntry_t1229 * __this, StringU5BU5D_t669* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m6856 (IPHostEntry_t1229 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
