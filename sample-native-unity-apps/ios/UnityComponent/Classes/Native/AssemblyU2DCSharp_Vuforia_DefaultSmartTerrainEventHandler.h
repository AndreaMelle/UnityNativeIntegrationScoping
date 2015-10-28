#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t48;
// Vuforia.PropBehaviour
struct PropBehaviour_t49;
// Vuforia.SurfaceBehaviour
struct SurfaceBehaviour_t50;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.DefaultSmartTerrainEventHandler
struct  DefaultSmartTerrainEventHandler_t47  : public MonoBehaviour_t21
{
	// Vuforia.ReconstructionBehaviour Vuforia.DefaultSmartTerrainEventHandler::mReconstructionBehaviour
	ReconstructionBehaviour_t48 * ___mReconstructionBehaviour_2;
	// Vuforia.PropBehaviour Vuforia.DefaultSmartTerrainEventHandler::PropTemplate
	PropBehaviour_t49 * ___PropTemplate_3;
	// Vuforia.SurfaceBehaviour Vuforia.DefaultSmartTerrainEventHandler::SurfaceTemplate
	SurfaceBehaviour_t50 * ___SurfaceTemplate_4;
};
