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

// abl.ABManager/ABRequest`1<System.Object>
struct ABRequest_1_t2371;
// System.String
struct String_t;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t166;

#include "codegen/il2cpp-codegen.h"

// System.Void abl.ABManager/ABRequest`1<System.Object>::.ctor()
extern "C" void ABRequest_1__ctor_m14828_gshared (ABRequest_1_t2371 * __this, const MethodInfo* method);
#define ABRequest_1__ctor_m14828(__this, method) (( void (*) (ABRequest_1_t2371 *, const MethodInfo*))ABRequest_1__ctor_m14828_gshared)(__this, method)
// System.Void abl.ABManager/ABRequest`1<System.Object>::.ctor(System.String,System.String,System.Action`2<System.Boolean,T>)
extern "C" void ABRequest_1__ctor_m14829_gshared (ABRequest_1_t2371 * __this, String_t* ___bundlenameIn, String_t* ___assetnameIn, Action_2_t166 * ___callbackIn, const MethodInfo* method);
#define ABRequest_1__ctor_m14829(__this, ___bundlenameIn, ___assetnameIn, ___callbackIn, method) (( void (*) (ABRequest_1_t2371 *, String_t*, String_t*, Action_2_t166 *, const MethodInfo*))ABRequest_1__ctor_m14829_gshared)(__this, ___bundlenameIn, ___assetnameIn, ___callbackIn, method)
