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

// UnityEngine.ILogger
struct ILogger_t1425954571;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.Object
struct Object_t1021602117;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Exception1927440687.h"

// UnityEngine.ILogger UnityEngine.Debug::get_logger()
extern "C"  Il2CppObject * Debug_get_logger_m4173808038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C"  void Debug_DrawLine_m3303079557 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___end1, Color_t2020392075  ___color2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C"  void Debug_INTERNAL_CALL_DrawLine_m1075270313 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___start0, Vector3_t2243707580 * ___end1, Color_t2020392075 * ___color2, float ___duration3, bool ___depthTest4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C"  void Debug_LogFormat_m3816524933 (Il2CppObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m3715728798 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogError_m865553560 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, Object_t1021602117 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
extern "C"  void Debug_LogErrorFormat_m583065465 (Il2CppObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogErrorFormat(UnityEngine.Object,System.String,System.Object[])
extern "C"  void Debug_LogErrorFormat_m60495267 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___context0, String_t* ___format1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C"  void Debug_LogException_m1861430175 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C"  void Debug_LogException_m3078170301 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, Object_t1021602117 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m2503577968 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogWarning_m1280021602 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, Object_t1021602117 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C"  void Debug_LogWarningFormat_m2130157695 (Il2CppObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarningFormat(UnityEngine.Object,System.String,System.Object[])
extern "C"  void Debug_LogWarningFormat_m79553173 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___context0, String_t* ___format1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C"  bool Debug_get_isDebugBuild_m3461630994 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::.cctor()
extern "C"  void Debug__cctor_m2981642087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
