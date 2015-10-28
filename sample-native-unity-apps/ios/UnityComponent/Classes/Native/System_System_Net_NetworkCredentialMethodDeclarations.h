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

// System.Net.NetworkCredential
struct NetworkCredential_t1228;
// System.String
struct String_t;
// System.Uri
struct Uri_t1192;

#include "codegen/il2cpp-codegen.h"

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m6878 (NetworkCredential_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m6879 (NetworkCredential_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m6880 (NetworkCredential_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t1228 * NetworkCredential_GetCredential_m6881 (NetworkCredential_t1228 * __this, Uri_t1192 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
