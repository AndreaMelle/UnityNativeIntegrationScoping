﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t2830;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t695;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_2__ctor_m20992_gshared (UnityEvent_2_t2830 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m20992(__this, method) (( void (*) (UnityEvent_2_t2830 *, const MethodInfo*))UnityEvent_2__ctor_m20992_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m20993_gshared (UnityEvent_2_t2830 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m20993(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_2_t2830 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m20993_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t695 * UnityEvent_2_GetDelegate_m20994_gshared (UnityEvent_2_t2830 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m20994(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t695 * (*) (UnityEvent_2_t2830 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m20994_gshared)(__this, ___target, ___theFunction, method)
