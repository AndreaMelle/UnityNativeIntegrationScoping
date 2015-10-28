#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t96;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t95  : public MonoBehaviour_t21
{
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t96 * ___mLineMaterial_2;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_3;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t97  ___LineColor_4;
};
