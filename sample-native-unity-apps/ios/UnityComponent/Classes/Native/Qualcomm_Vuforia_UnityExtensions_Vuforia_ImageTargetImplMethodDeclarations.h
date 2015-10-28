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

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t839;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t812;
// Vuforia.VirtualButton
struct VirtualButton_t949;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t980;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C" void ImageTargetImpl__ctor_m4264 (ImageTargetImpl_t839 * __this, String_t* ___name, int32_t ___id, int32_t ___imageTargetType, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C" int32_t ImageTargetImpl_get_ImageTargetType_m4265 (ImageTargetImpl_t839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t949 * ImageTargetImpl_CreateVirtualButton_m4266 (ImageTargetImpl_t839 * __this, String_t* ___name, RectangleData_t814  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t949 * ImageTargetImpl_GetVirtualButtonByName_m4267 (ImageTargetImpl_t839 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* ImageTargetImpl_GetVirtualButtons_m4268 (ImageTargetImpl_t839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_DestroyVirtualButton_m4269 (ImageTargetImpl_t839 * __this, VirtualButton_t949 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t949 * ImageTargetImpl_CreateNewVirtualButtonInNative_m4270 (ImageTargetImpl_t839 * __this, String_t* ___name, RectangleData_t814  ___rectangleData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_UnregisterVirtualButtonInNative_m4271 (ImageTargetImpl_t839 * __this, VirtualButton_t949 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C" void ImageTargetImpl_CreateVirtualButtonsFromNative_m4272 (ImageTargetImpl_t839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
