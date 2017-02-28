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

// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged
struct OnCameraChanged_t3412203069;
// System.Object
struct Il2CppObject;
// UnityEngine.Camera
struct Camera_t189460977;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCameraChanged__ctor_m393603106 (OnCameraChanged_t3412203069 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::Invoke(UnityEngine.Camera)
extern "C"  void OnCameraChanged_Invoke_m51693608 (OnCameraChanged_t3412203069 * __this, Camera_t189460977 * ___newCamera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnCameraChanged_BeginInvoke_m1538363069 (OnCameraChanged_t3412203069 * __this, Camera_t189460977 * ___newCamera0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::EndInvoke(System.IAsyncResult)
extern "C"  void OnCameraChanged_EndInvoke_m360998908 (OnCameraChanged_t3412203069 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
