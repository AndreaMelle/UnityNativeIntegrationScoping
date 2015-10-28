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

// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t56;
// Vuforia.ImageTarget
struct ImageTarget_t951;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t801;
// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t90;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t26;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour>
struct IEnumerable_1_t1004;
// Vuforia.VirtualButton
struct VirtualButton_t949;
// UnityEngine.Transform
struct Transform_t27;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"

// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::get_ImageTarget()
extern "C" Object_t * ImageTargetAbstractBehaviour_get_ImageTarget_m5499 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::.ctor()
extern "C" void ImageTargetAbstractBehaviour__ctor_m366 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool ImageTargetAbstractBehaviour_CorrectScaleImpl_m5500 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void ImageTargetAbstractBehaviour_InternalUnregisterTrackable_m5501 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void ImageTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m5502 (ImageTargetAbstractBehaviour_t56 * __this, Vector3_t130 * ___boundsMin, Vector3_t130 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void ImageTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m5503 (ImageTargetAbstractBehaviour_t56 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" VirtualButtonAbstractBehaviour_t90 * ImageTargetAbstractBehaviour_CreateVirtualButton_m5504 (ImageTargetAbstractBehaviour_t56 * __this, String_t* ___vbName, Vector2_t211  ___position, Vector2_t211  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.GameObject)
extern "C" VirtualButtonAbstractBehaviour_t90 * ImageTargetAbstractBehaviour_CreateVirtualButton_m5505 (Object_t * __this /* static, unused */, String_t* ___vbName, Vector2_t211  ___localScale, GameObject_t26 * ___immediateParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::GetVirtualButtonBehaviours()
extern "C" Object_t* ImageTargetAbstractBehaviour_GetVirtualButtonBehaviours_m5506 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::DestroyVirtualButton(System.String)
extern "C" void ImageTargetAbstractBehaviour_DestroyVirtualButton_m5507 (ImageTargetAbstractBehaviour_t56 * __this, String_t* ___vbName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.ImageTargetAbstractBehaviour::GetSize()
extern "C" Vector2_t211  ImageTargetAbstractBehaviour_GetSize_m5508 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetWidth(System.Single)
extern "C" void ImageTargetAbstractBehaviour_SetWidth_m5509 (ImageTargetAbstractBehaviour_t56 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetHeight(System.Single)
extern "C" void ImageTargetAbstractBehaviour_SetHeight_m5510 (ImageTargetAbstractBehaviour_t56 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_AspectRatio()
extern "C" float ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_AspectRatio_m5511 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_ImageTargetType()
extern "C" int32_t ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_ImageTargetType_m5512 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetAspectRatio(System.Single)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetAspectRatio_m5513 (ImageTargetAbstractBehaviour_t56 * __this, float ___aspectRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetImageTargetType(Vuforia.ImageTargetType)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetImageTargetType_m5514 (ImageTargetAbstractBehaviour_t56 * __this, int32_t ___imageTargetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.InitializeImageTarget(Vuforia.ImageTarget)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_InitializeImageTarget_m5515 (ImageTargetAbstractBehaviour_t56 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.AssociateExistingVirtualButtonBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_AssociateExistingVirtualButtonBehaviour_m5516 (ImageTargetAbstractBehaviour_t56 * __this, VirtualButtonAbstractBehaviour_t90 * ___virtualButtonBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.CreateMissingVirtualButtonBehaviours()
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_CreateMissingVirtualButtonBehaviours_m5517 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.TryGetVirtualButtonBehaviourByID(System.Int32,Vuforia.VirtualButtonAbstractBehaviour&)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_TryGetVirtualButtonBehaviourByID_m5518 (ImageTargetAbstractBehaviour_t56 * __this, int32_t ___id, VirtualButtonAbstractBehaviour_t90 ** ___virtualButtonBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButtonFromNative(Vuforia.VirtualButton)
extern "C" void ImageTargetAbstractBehaviour_CreateVirtualButtonFromNative_m5519 (ImageTargetAbstractBehaviour_t56 * __this, VirtualButton_t949 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CreateNewVirtualButtonFromBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C" bool ImageTargetAbstractBehaviour_CreateNewVirtualButtonFromBehaviour_m5520 (ImageTargetAbstractBehaviour_t56 * __this, VirtualButtonAbstractBehaviour_t90 * ___newVBB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m5521 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m5522 (ImageTargetAbstractBehaviour_t56 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t27 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m5523 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t26 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m5524 (ImageTargetAbstractBehaviour_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
