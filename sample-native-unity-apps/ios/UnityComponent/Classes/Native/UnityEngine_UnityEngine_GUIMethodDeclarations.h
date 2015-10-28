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

// UnityEngine.GUISkin
struct GUISkin_t613;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t616;
// UnityEngine.GUIStyle
struct GUIStyle_t622;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t138;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m3333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m3334 (Object_t * __this /* static, unused */, DateTime_t615  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m3335 (Object_t * __this /* static, unused */, GUISkin_t613 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t613 * GUI_get_skin_m3336 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m3337 (Object_t * __this /* static, unused */, GUISkin_t613 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m353 (Object_t * __this /* static, unused */, Rect_t137  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m3338 (Object_t * __this /* static, unused */, Rect_t137  ___position, GUIContent_t616 * ___content, GUIStyle_t622 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m354 (Object_t * __this /* static, unused */, Rect_t137  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t137  GUI_Window_m351 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t137  ___clientRect, WindowFunction_t138 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m3339 (Object_t * __this /* static, unused */, WindowFunction_t138 * ___func, int32_t ___id, GUISkin_t613 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t622 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m3340 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m3341 (Object_t * __this /* static, unused */, Rect_t137  ___position, GUIContent_t616 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m3342 (Object_t * __this /* static, unused */, Rect_t137 * ___position, GUIContent_t616 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m3343 (Object_t * __this /* static, unused */, Rect_t137  ___position, GUIContent_t616 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m3344 (Object_t * __this /* static, unused */, Rect_t137 * ___position, GUIContent_t616 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t137  GUI_DoWindow_m3345 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t137  ___clientRect, WindowFunction_t138 * ___func, GUIContent_t616 * ___title, GUIStyle_t622 * ___style, GUISkin_t613 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t137  GUI_INTERNAL_CALL_DoWindow_m3346 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t137 * ___clientRect, WindowFunction_t138 * ___func, GUIContent_t616 * ___title, GUIStyle_t622 * ___style, GUISkin_t613 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
