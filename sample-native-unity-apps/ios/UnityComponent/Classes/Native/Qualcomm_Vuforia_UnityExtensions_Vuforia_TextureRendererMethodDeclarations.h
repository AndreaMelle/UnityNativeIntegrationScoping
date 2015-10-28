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

// Vuforia.TextureRenderer
struct TextureRenderer_t945;
// UnityEngine.Texture
struct Texture_t318;
// UnityEngine.RenderTexture
struct RenderTexture_t527;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C" int32_t TextureRenderer_get_Width_m5455 (TextureRenderer_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C" int32_t TextureRenderer_get_Height_m5456 (TextureRenderer_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C" void TextureRenderer__ctor_m5457 (TextureRenderer_t945 * __this, Texture_t318 * ___textureToRender, int32_t ___renderTextureLayer, Vec2I_t883  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C" RenderTexture_t527 * TextureRenderer_Render_m5458 (TextureRenderer_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C" void TextureRenderer_Destroy_m5459 (TextureRenderer_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
