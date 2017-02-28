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

// MouseLookHelper
struct MouseLookHelper_t2169371148;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void MouseLookHelper::.ctor()
extern "C"  void MouseLookHelper__ctor_m1374045215 (MouseLookHelper_t2169371148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseLookHelper::Init(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void MouseLookHelper_Init_m2848398065 (MouseLookHelper_t2169371148 * __this, Transform_t3275118058 * ___character0, Transform_t3275118058 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseLookHelper::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void MouseLookHelper_LookRotation_m174663148 (MouseLookHelper_t2169371148 * __this, Transform_t3275118058 * ___character0, Transform_t3275118058 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion MouseLookHelper::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  MouseLookHelper_ClampRotationAroundXAxis_m3684810055 (MouseLookHelper_t2169371148 * __this, Quaternion_t4030073918  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
