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

// ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>
struct LocalVoice_1_t79568670;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// ExitGames.Client.Photon.Voice.IAudioStream`1<System.Object>
struct IAudioStream_1_t70814270;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// ExitGames.Client.Photon.Voice.VoiceDetector
struct VoiceDetector_t1456844706;
// ExitGames.Client.Photon.Voice.LevelMeter
struct LevelMeter_t1322354603;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot426870209.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "mscorlib_System_ArraySegment_1_gen2594217482.h"

// System.Void ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>::.ctor()
extern "C"  void LocalVoice_1__ctor_m3587205855_gshared (LocalVoice_1_t79568670 * __this, const MethodInfo* method);
#define LocalVoice_1__ctor_m3587205855(__this, method) ((  void (*) (LocalVoice_1_t79568670 *, const MethodInfo*))LocalVoice_1__ctor_m3587205855_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>::.ctor(ExitGames.Client.Photon.Voice.VoiceClient,System.Byte,ExitGames.Client.Photon.Voice.IAudioStream`1<T>,ExitGames.Client.Photon.Voice.VoiceInfo,System.Int32)
extern "C"  void LocalVoice_1__ctor_m966460526_gshared (LocalVoice_1_t79568670 * __this, VoiceClient_t426870209 * ___voiceClient0, uint8_t ___id1, Il2CppObject* ___audioStream2, VoiceInfo_t82194312 * ___voiceInfo3, int32_t ___channelId4, const MethodInfo* method);
#define LocalVoice_1__ctor_m966460526(__this, ___voiceClient0, ___id1, ___audioStream2, ___voiceInfo3, ___channelId4, method) ((  void (*) (LocalVoice_1_t79568670 *, VoiceClient_t426870209 *, uint8_t, Il2CppObject*, VoiceInfo_t82194312 *, int32_t, const MethodInfo*))LocalVoice_1__ctor_m966460526_gshared)(__this, ___voiceClient0, ___id1, ___audioStream2, ___voiceInfo3, ___channelId4, method)
// ExitGames.Client.Photon.Voice.VoiceDetector ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>::get_VoiceDetector()
extern "C"  Il2CppObject * LocalVoice_1_get_VoiceDetector_m1302999545_gshared (LocalVoice_1_t79568670 * __this, const MethodInfo* method);
#define LocalVoice_1_get_VoiceDetector_m1302999545(__this, method) ((  Il2CppObject * (*) (LocalVoice_1_t79568670 *, const MethodInfo*))LocalVoice_1_get_VoiceDetector_m1302999545_gshared)(__this, method)
// ExitGames.Client.Photon.Voice.LevelMeter ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>::get_LevelMeter()
extern "C"  Il2CppObject * LocalVoice_1_get_LevelMeter_m704671009_gshared (LocalVoice_1_t79568670 * __this, const MethodInfo* method);
#define LocalVoice_1_get_LevelMeter_m704671009(__this, method) ((  Il2CppObject * (*) (LocalVoice_1_t79568670 *, const MethodInfo*))LocalVoice_1_get_LevelMeter_m704671009_gshared)(__this, method)
// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>::get_IsTransmitting()
extern "C"  bool LocalVoice_1_get_IsTransmitting_m3560801804_gshared (LocalVoice_1_t79568670 * __this, const MethodInfo* method);
#define LocalVoice_1_get_IsTransmitting_m3560801804(__this, method) ((  bool (*) (LocalVoice_1_t79568670 *, const MethodInfo*))LocalVoice_1_get_IsTransmitting_m3560801804_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>::Dispose()
extern "C"  void LocalVoice_1_Dispose_m4006554182_gshared (LocalVoice_1_t79568670 * __this, const MethodInfo* method);
#define LocalVoice_1_Dispose_m4006554182(__this, method) ((  void (*) (LocalVoice_1_t79568670 *, const MethodInfo*))LocalVoice_1_Dispose_m4006554182_gshared)(__this, method)
// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>::readStream()
extern "C"  bool LocalVoice_1_readStream_m1913135149_gshared (LocalVoice_1_t79568670 * __this, const MethodInfo* method);
#define LocalVoice_1_readStream_m1913135149(__this, method) ((  bool (*) (LocalVoice_1_t79568670 *, const MethodInfo*))LocalVoice_1_readStream_m1913135149_gshared)(__this, method)
// System.ArraySegment`1<System.Byte> ExitGames.Client.Photon.Voice.LocalVoice`1<System.Object>::compress()
extern "C"  ArraySegment_1_t2594217482  LocalVoice_1_compress_m1940767581_gshared (LocalVoice_1_t79568670 * __this, const MethodInfo* method);
#define LocalVoice_1_compress_m1940767581(__this, method) ((  ArraySegment_1_t2594217482  (*) (LocalVoice_1_t79568670 *, const MethodInfo*))LocalVoice_1_compress_m1940767581_gshared)(__this, method)
