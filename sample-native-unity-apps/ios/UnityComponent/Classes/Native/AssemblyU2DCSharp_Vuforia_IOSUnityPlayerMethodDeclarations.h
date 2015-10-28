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

// Vuforia.IOSUnityPlayer
struct IOSUnityPlayer_t59;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// System.Void Vuforia.IOSUnityPlayer::.ctor()
extern "C" void IOSUnityPlayer__ctor_m168 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::LoadNativeLibraries()
extern "C" void IOSUnityPlayer_LoadNativeLibraries_m169 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializePlatform()
extern "C" void IOSUnityPlayer_InitializePlatform_m170 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/InitError Vuforia.IOSUnityPlayer::Start(System.String)
extern "C" int32_t IOSUnityPlayer_Start_m171 (IOSUnityPlayer_t59 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Update()
extern "C" void IOSUnityPlayer_Update_m172 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Dispose()
extern "C" void IOSUnityPlayer_Dispose_m173 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnPause()
extern "C" void IOSUnityPlayer_OnPause_m174 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnResume()
extern "C" void IOSUnityPlayer_OnResume_m175 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnDestroy()
extern "C" void IOSUnityPlayer_OnDestroy_m176 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializeSurface()
extern "C" void IOSUnityPlayer_InitializeSurface_m177 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::SetUnityScreenOrientation()
extern "C" void IOSUnityPlayer_SetUnityScreenOrientation_m178 (IOSUnityPlayer_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setPlatFormNative()
extern "C" void IOSUnityPlayer_setPlatFormNative_m179 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.IOSUnityPlayer::initQCARiOS(System.Int32,System.String)
extern "C" int32_t IOSUnityPlayer_initQCARiOS_m180 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setSurfaceOrientationiOS(System.Int32)
extern "C" void IOSUnityPlayer_setSurfaceOrientationiOS_m181 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
