﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t381;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t382;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t383;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t384;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t385;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t380  : public Object_t
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t381 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t382 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t383 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t383 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t381 * ___m_Normals_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t384 * ___m_Tangents_5;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indicies
	List_1_t385 * ___m_Indicies_6;
};
struct VertexHelper_t380_StaticFields{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t386  ___s_DefaultTangent_7;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t130  ___s_DefaultNormal_8;
};
