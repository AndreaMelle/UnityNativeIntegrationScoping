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

// Vuforia.StateManagerImpl
struct StateManagerImpl_t932;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t1001;
// Vuforia.WordManager
struct WordManager_t906;
// Vuforia.Trackable
struct Trackable_t782;
// Vuforia.DataSet
struct DataSet_t812;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t24;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t56;
// Vuforia.ImageTarget
struct ImageTarget_t951;
// UnityEngine.GameObject
struct GameObject_t26;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t64;
// Vuforia.Marker
struct Marker_t957;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t878;
// UnityEngine.Transform
struct Transform_t27;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t875;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t876;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t877;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t1000;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t68;
// Vuforia.MultiTarget
struct MultiTarget_t958;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t43;
// Vuforia.CylinderTarget
struct CylinderTarget_t810;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t70;
// Vuforia.ObjectTarget
struct ObjectTarget_t784;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m5400 (StateManagerImpl_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetTrackableBehaviours_m5401 (StateManagerImpl_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C" WordManager_t906 * StateManagerImpl_GetWordManager_m5402 (StateManagerImpl_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m5403 (StateManagerImpl_t932 * __this, Object_t * ___trackable, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C" void StateManagerImpl_AssociateMarkerBehaviours_m5404 (StateManagerImpl_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m5405 (StateManagerImpl_t932 * __this, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C" void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m5406 (StateManagerImpl_t932 * __this, TrackableBehaviour_t24 * ___trackableBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C" void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m5407 (StateManagerImpl_t932 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C" void StateManagerImpl_RemoveDestroyedTrackables_m5408 (StateManagerImpl_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C" void StateManagerImpl_ClearTrackableBehaviours_m5409 (StateManagerImpl_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t56 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m5410 (StateManagerImpl_t932 * __this, Object_t * ___trackable, GameObject_t26 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C" ImageTargetAbstractBehaviour_t56 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m5411 (StateManagerImpl_t932 * __this, Object_t * ___trackable, GameObject_t26 * ___gameObject, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C" MarkerAbstractBehaviour_t64 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m5412 (StateManagerImpl_t932 * __this, Object_t * ___trackable, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C" MarkerAbstractBehaviour_t64 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m5413 (StateManagerImpl_t932 * __this, Object_t * ___trackable, GameObject_t26 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C" void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m5414 (StateManagerImpl_t932 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_EnableTrackableBehavioursForTrackable_m5415 (StateManagerImpl_t932 * __this, Object_t * ___trackable, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C" void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m5416 (StateManagerImpl_t932 * __this, LinkedList_1_t878 ** ___trackableIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPose(UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C" void StateManagerImpl_UpdateCameraPose_m5417 (StateManagerImpl_t932 * __this, Transform_t27 * ___cameraTransform, Transform_t27 * ___parentTransformToUpdate, TrackableResultDataU5BU5D_t875* ___trackableResultDataArray, int32_t ___originTrackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32,System.Int32)
extern "C" void StateManagerImpl_UpdateTrackablePoses_m5418 (StateManagerImpl_t932 * __this, Transform_t27 * ___arCameraTransform, TrackableResultDataU5BU5D_t875* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C" void StateManagerImpl_UpdateVirtualButtons_m5419 (StateManagerImpl_t932 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C" void StateManagerImpl_UpdateWords_m5420 (StateManagerImpl_t932 * __this, Transform_t27 * ___arCameraTransform, WordDataU5BU5D_t876* ___wordData, WordResultDataU5BU5D_t877* ___wordResultData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateVirtualButtonBehaviours_m5421 (StateManagerImpl_t932 * __this, VirtualButtonAbstractBehaviourU5BU5D_t1000* ___vbBehaviours, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C" void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m5422 (StateManagerImpl_t932 * __this, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C" ImageTargetAbstractBehaviour_t56 * StateManagerImpl_CreateImageTargetBehaviour_m5423 (StateManagerImpl_t932 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C" MultiTargetAbstractBehaviour_t68 * StateManagerImpl_CreateMultiTargetBehaviour_m5424 (StateManagerImpl_t932 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C" CylinderTargetAbstractBehaviour_t43 * StateManagerImpl_CreateCylinderTargetBehaviour_m5425 (StateManagerImpl_t932 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C" ObjectTargetAbstractBehaviour_t70 * StateManagerImpl_CreateObjectTargetBehaviour_m5426 (StateManagerImpl_t932 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C" void StateManagerImpl_InitializeMarkerBehaviour_m5427 (StateManagerImpl_t932 * __this, MarkerAbstractBehaviour_t64 * ___markerBehaviour, Object_t * ___marker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCamera(Vuforia.TrackableBehaviour,UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionCamera_m5428 (StateManagerImpl_t932 * __this, TrackableBehaviour_t24 * ___trackableBehaviour, Transform_t27 * ___cameraTransform, Transform_t27 * ___parentTransformToUpdate, PoseData_t859  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StateManagerImpl::ExtractTranslationFromMatrix(UnityEngine.Matrix4x4)
extern "C" Vector3_t130  StateManagerImpl_ExtractTranslationFromMatrix_m5429 (Object_t * __this /* static, unused */, Matrix4x4_t164  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.StateManagerImpl::ExtractRotationFromMatrix(UnityEngine.Matrix4x4)
extern "C" Quaternion_t131  StateManagerImpl_ExtractRotationFromMatrix_m5430 (Object_t * __this /* static, unused */, Matrix4x4_t164  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionTrackable_m5431 (StateManagerImpl_t932 * __this, TrackableBehaviour_t24 * ___trackableBehaviour, Transform_t27 * ___arCameraTransform, PoseData_t859  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C" void StateManagerImpl__ctor_m5432 (StateManagerImpl_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
