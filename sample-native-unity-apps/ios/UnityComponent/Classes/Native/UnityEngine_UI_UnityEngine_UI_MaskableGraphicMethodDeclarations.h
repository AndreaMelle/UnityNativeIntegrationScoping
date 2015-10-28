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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t287;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t310;
// UnityEngine.Material
struct Material_t96;
// UnityEngine.RectTransform
struct RectTransform_t253;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
extern "C" void MaskableGraphic__ctor_m1218 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::get_onCullStateChanged()
extern "C" CullStateChangedEvent_t310 * MaskableGraphic_get_onCullStateChanged_m1219 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/CullStateChangedEvent)
extern "C" void MaskableGraphic_set_onCullStateChanged_m1220 (MaskableGraphic_t287 * __this, CullStateChangedEvent_t310 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.MaskableGraphic::get_maskable()
extern "C" bool MaskableGraphic_get_maskable_m1221 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_maskable(System.Boolean)
extern "C" void MaskableGraphic_set_maskable_m1222 (MaskableGraphic_t287 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.MaskableGraphic::GetModifiedMaterial(UnityEngine.Material)
extern "C" Material_t96 * MaskableGraphic_GetModifiedMaterial_m1223 (MaskableGraphic_t287 * __this, Material_t96 * ___baseMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::Cull(UnityEngine.Rect,System.Boolean)
extern "C" void MaskableGraphic_Cull_m1224 (MaskableGraphic_t287 * __this, Rect_t137  ___clipRect, bool ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::SetClipRect(UnityEngine.Rect,System.Boolean)
extern "C" void MaskableGraphic_SetClipRect_m1225 (MaskableGraphic_t287 * __this, Rect_t137  ___clipRect, bool ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnEnable()
extern "C" void MaskableGraphic_OnEnable_m1226 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnDisable()
extern "C" void MaskableGraphic_OnDisable_m1227 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnTransformParentChanged()
extern "C" void MaskableGraphic_OnTransformParentChanged_m1228 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::ParentMaskStateChanged()
extern "C" void MaskableGraphic_ParentMaskStateChanged_m1229 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnCanvasHierarchyChanged()
extern "C" void MaskableGraphic_OnCanvasHierarchyChanged_m1230 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.MaskableGraphic::get_canvasRect()
extern "C" Rect_t137  MaskableGraphic_get_canvasRect_m1231 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::UpdateClipParent()
extern "C" void MaskableGraphic_UpdateClipParent_m1232 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateClipping()
extern "C" void MaskableGraphic_RecalculateClipping_m1233 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateMasking()
extern "C" void MaskableGraphic_RecalculateMasking_m1234 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.MaskableGraphic::UnityEngine.UI.IClippable.get_rectTransform()
extern "C" RectTransform_t253 * MaskableGraphic_UnityEngine_UI_IClippable_get_rectTransform_m1235 (MaskableGraphic_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
