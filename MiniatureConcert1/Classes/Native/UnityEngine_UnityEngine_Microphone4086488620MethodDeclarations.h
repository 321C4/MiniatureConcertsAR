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

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
extern "C"  AudioClip_t1932558630 * Microphone_Start_m3545562356 (Il2CppObject * __this /* static, unused */, String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Microphone::End(System.String)
extern "C"  void Microphone_End_m3713258138 (Il2CppObject * __this /* static, unused */, String_t* ___deviceName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Microphone::get_devices()
extern "C"  StringU5BU5D_t1642385972* Microphone_get_devices_m2184906638 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
extern "C"  int32_t Microphone_GetPosition_m3873167844 (Il2CppObject * __this /* static, unused */, String_t* ___deviceName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
extern "C"  void Microphone_GetDeviceCaps_m1485654608 (Il2CppObject * __this /* static, unused */, String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
