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

// abl.MainThreadAction
struct MainThreadAction_t1;
// System.Object
struct Object_t;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2;

#include "codegen/il2cpp-codegen.h"

// System.Void abl.MainThreadAction::.ctor(System.Object,System.Object,System.Action`2<System.Object,System.Object>)
extern "C" void MainThreadAction__ctor_m0 (MainThreadAction_t1 * __this, Object_t * ____sender, Object_t * ____args, Action_2_t2 * ____callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.MainThreadAction::.ctor()
extern "C" void MainThreadAction__ctor_m1 (MainThreadAction_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object abl.MainThreadAction::get_sender()
extern "C" Object_t * MainThreadAction_get_sender_m2 (MainThreadAction_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.MainThreadAction::set_sender(System.Object)
extern "C" void MainThreadAction_set_sender_m3 (MainThreadAction_t1 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object abl.MainThreadAction::get_args()
extern "C" Object_t * MainThreadAction_get_args_m4 (MainThreadAction_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.MainThreadAction::set_args(System.Object)
extern "C" void MainThreadAction_set_args_m5 (MainThreadAction_t1 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<System.Object,System.Object> abl.MainThreadAction::get_callback()
extern "C" Action_2_t2 * MainThreadAction_get_callback_m6 (MainThreadAction_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.MainThreadAction::set_callback(System.Action`2<System.Object,System.Object>)
extern "C" void MainThreadAction_set_callback_m7 (MainThreadAction_t1 * __this, Action_2_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
