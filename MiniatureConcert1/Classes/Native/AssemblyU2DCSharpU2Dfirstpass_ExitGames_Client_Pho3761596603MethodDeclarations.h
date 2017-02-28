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

// ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>
struct LocalVoice_1_t3761596603;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// ExitGames.Client.Photon.Voice.IAudioStream`1<System.Single>
struct IAudioStream_1_t3752842203;
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

// System.Void ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>::.ctor()
extern "C"  void LocalVoice_1__ctor_m2013490444_gshared (LocalVoice_1_t3761596603 * __this, const MethodInfo* method);
#define LocalVoice_1__ctor_m2013490444(__this, method) ((  void (*) (LocalVoice_1_t3761596603 *, const MethodInfo*))LocalVoice_1__ctor_m2013490444_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>::.ctor(ExitGames.Client.Photon.Voice.VoiceClient,System.Byte,ExitGames.Client.Photon.Voice.IAudioStream`1<T>,ExitGames.Client.Photon.Voice.VoiceInfo,System.Int32)
extern "C"  void LocalVoice_1__ctor_m314119935_gshared (LocalVoice_1_t3761596603 * __this, VoiceClient_t426870209 * ___voiceClient0, uint8_t ___id1, Il2CppObject* ___audioStream2, VoiceInfo_t82194312 * ___voiceInfo3, int32_t ___channelId4, const MethodInfo* method);
#define LocalVoice_1__ctor_m314119935(__this, ___voiceClient0, ___id1, ___audioStream2, ___voiceInfo3, ___channelId4, method) ((  void (*) (LocalVoice_1_t3761596603 *, VoiceClient_t426870209 *, uint8_t, Il2CppObject*, VoiceInfo_t82194312 *, int32_t, const MethodInfo*))LocalVoice_1__ctor_m314119935_gshared)(__this, ___voiceClient0, ___id1, ___audioStream2, ___voiceInfo3, ___channelId4, method)
// ExitGames.Client.Photon.Voice.VoiceDetector ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>::get_VoiceDetector()
extern "C"  Il2CppObject * LocalVoice_1_get_VoiceDetector_m949690960_gshared (LocalVoice_1_t3761596603 * __this, const MethodInfo* method);
#define LocalVoice_1_get_VoiceDetector_m949690960(__this, method) ((  Il2CppObject * (*) (LocalVoice_1_t3761596603 *, const MethodInfo*))LocalVoice_1_get_VoiceDetector_m949690960_gshared)(__this, method)
// ExitGames.Client.Photon.Voice.LevelMeter ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>::get_LevelMeter()
extern "C"  Il2CppObject * LocalVoice_1_get_LevelMeter_m2631520936_gshared (LocalVoice_1_t3761596603 * __this, const MethodInfo* method);
#define LocalVoice_1_get_LevelMeter_m2631520936(__this, method) ((  Il2CppObject * (*) (LocalVoice_1_t3761596603 *, const MethodInfo*))LocalVoice_1_get_LevelMeter_m2631520936_gshared)(__this, method)
// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>::get_IsTransmitting()
extern "C"  bool LocalVoice_1_get_IsTransmitting_m390780009_gshared (LocalVoice_1_t3761596603 * __this, const MethodInfo* method);
#define LocalVoice_1_get_IsTransmitting_m390780009(__this, method) ((  bool (*) (LocalVoice_1_t3761596603 *, const MethodInfo*))LocalVoice_1_get_IsTransmitting_m390780009_gshared)(__this, method)
// System.Void ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>::Dispose()
extern "C"  void LocalVoice_1_Dispose_m1396583079_gshared (LocalVoice_1_t3761596603 * __this, const MethodInfo* method);
#define LocalVoice_1_Dispose_m1396583079(__this, method) ((  void (*) (LocalVoice_1_t3761596603 *, const MethodInfo*))LocalVoice_1_Dispose_m1396583079_gshared)(__this, method)
// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>::readStream()
extern "C"  bool LocalVoice_1_readStream_m938681488_gshared (LocalVoice_1_t3761596603 * __this, const MethodInfo* method);
#define LocalVoice_1_readStream_m938681488(__this, method) ((  bool (*) (LocalVoice_1_t3761596603 *, const MethodInfo*))LocalVoice_1_readStream_m938681488_gshared)(__this, method)
// System.ArraySegment`1<System.Byte> ExitGames.Client.Photon.Voice.LocalVoice`1<System.Single>::compress()
extern "C"  ArraySegment_1_t2594217482  LocalVoice_1_compress_m4040002300_gshared (LocalVoice_1_t3761596603 * __this, const MethodInfo* method);
#define LocalVoice_1_compress_m4040002300(__this, method) ((  ArraySegment_1_t2594217482  (*) (LocalVoice_1_t3761596603 *, const MethodInfo*))LocalVoice_1_compress_m4040002300_gshared)(__this, method)
