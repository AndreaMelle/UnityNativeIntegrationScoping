#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Font>
struct Action_1_t452;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t605;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.Font
struct  Font_t266  : public Object_t117
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t605 * ___m_FontTextureRebuildCallback_3;
};
struct Font_t266_StaticFields{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t452 * ___textureRebuilt_2;
};
