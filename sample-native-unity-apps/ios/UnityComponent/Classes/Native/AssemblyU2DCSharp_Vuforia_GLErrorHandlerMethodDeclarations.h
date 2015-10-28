﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.GLErrorHandler
struct GLErrorHandler_t52;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Vuforia.GLErrorHandler::.ctor()
extern "C" void GLErrorHandler__ctor_m143 (GLErrorHandler_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::.cctor()
extern "C" void GLErrorHandler__cctor_m144 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::SetError(System.String)
extern "C" void GLErrorHandler_SetError_m145 (Object_t * __this /* static, unused */, String_t* ___errorText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::OnGUI()
extern "C" void GLErrorHandler_OnGUI_m146 (GLErrorHandler_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::DrawWindowContent(System.Int32)
extern "C" void GLErrorHandler_DrawWindowContent_m147 (GLErrorHandler_t52 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
