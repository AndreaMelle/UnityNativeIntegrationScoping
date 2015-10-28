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

// UnityEngine.Material
struct Material_t96;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t157;
// UnityEngine.Texture
struct Texture_t318;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Material::.ctor(System.String)
extern "C" void Material__ctor_m431 (Material_t96 * __this, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" void Material__ctor_m2825 (Material_t96 * __this, Shader_t157 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m2353 (Material_t96 * __this, Material_t96 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C" Shader_t157 * Material_get_shader_m432 (Material_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t318 * Material_get_mainTexture_m2358 (Material_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" void Material_set_mainTexture_m2826 (Material_t96 * __this, Texture_t318 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" void Material_SetTexture_m2827 (Material_t96 * __this, String_t* ___propertyName, Texture_t318 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m2828 (Material_t96 * __this, int32_t ___nameID, Texture_t318 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t318 * Material_GetTexture_m2829 (Material_t96 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t318 * Material_GetTexture_m2830 (Material_t96 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m2831 (Material_t96 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m2832 (Material_t96 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m2355 (Material_t96 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m2351 (Material_t96 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m2833 (Material_t96 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" bool Material_SetPass_m442 (Material_t96 * __this, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithString(UnityEngine.Material,System.String)
extern "C" void Material_Internal_CreateWithString_m2834 (Object_t * __this /* static, unused */, Material_t96 * ___mono, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m2835 (Object_t * __this /* static, unused */, Material_t96 * ___mono, Shader_t157 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m2836 (Object_t * __this /* static, unused */, Material_t96 * ___mono, Material_t96 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
