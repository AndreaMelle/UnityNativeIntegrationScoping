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

// Vuforia.DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t51;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.DefaultTrackableEventHandler::.ctor()
extern "C" void DefaultTrackableEventHandler__ctor_m138 (DefaultTrackableEventHandler_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::Start()
extern "C" void DefaultTrackableEventHandler_Start_m139 (DefaultTrackableEventHandler_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void DefaultTrackableEventHandler_OnTrackableStateChanged_m140 (DefaultTrackableEventHandler_t51 * __this, int32_t ___previousStatus, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackingFound()
extern "C" void DefaultTrackableEventHandler_OnTrackingFound_m141 (DefaultTrackableEventHandler_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackingLost()
extern "C" void DefaultTrackableEventHandler_OnTrackingLost_m142 (DefaultTrackableEventHandler_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
