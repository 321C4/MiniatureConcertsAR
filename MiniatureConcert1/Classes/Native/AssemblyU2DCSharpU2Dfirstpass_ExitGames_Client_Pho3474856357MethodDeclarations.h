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

// ExitGames.Client.Photon.Voice.LocalVoice
struct LocalVoice_t3474856357;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// ExitGames.Client.Photon.Voice.IAudioStreamBase
struct IAudioStreamBase_t309970496;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot426870209.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"

// System.Void ExitGames.Client.Photon.Voice.LocalVoice::.ctor()
extern "C"  void LocalVoice__ctor_m2491474130 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::.ctor(ExitGames.Client.Photon.Voice.VoiceClient,System.Byte,ExitGames.Client.Photon.Voice.IAudioStreamBase,ExitGames.Client.Photon.Voice.VoiceInfo,System.Int32)
extern "C"  void LocalVoice__ctor_m1915384575 (LocalVoice_t3474856357 * __this, VoiceClient_t426870209 * ___voiceClient0, uint8_t ___id1, Il2CppObject * ___audioStream2, VoiceInfo_t82194312 * ___voiceInfo3, int32_t ___channelId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Voice.LocalVoice::get_AudioGroup()
extern "C"  uint8_t LocalVoice_get_AudioGroup_m1108898896 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::set_AudioGroup(System.Byte)
extern "C"  void LocalVoice_set_AudioGroup_m538280575 (LocalVoice_t3474856357 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::set_Transmit(System.Boolean)
extern "C"  void LocalVoice_set_Transmit_m4205639868 (LocalVoice_t3474856357 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::get_Transmit()
extern "C"  bool LocalVoice_get_Transmit_m1512083549 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::get_FramesSent()
extern "C"  int32_t LocalVoice_get_FramesSent_m2235355719 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::set_FramesSent(System.Int32)
extern "C"  void LocalVoice_set_FramesSent_m143078924 (LocalVoice_t3474856357 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::get_FramesSentBytes()
extern "C"  int32_t LocalVoice_get_FramesSentBytes_m3181026424 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::set_FramesSentBytes(System.Int32)
extern "C"  void LocalVoice_set_FramesSentBytes_m3577516989 (LocalVoice_t3474856357 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::get_VoiceDetectorCalibrating()
extern "C"  bool LocalVoice_get_VoiceDetectorCalibrating_m3713180969 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::VoiceDetectorCalibrate(System.Int32)
extern "C"  void LocalVoice_VoiceDetectorCalibrate_m571352988 (LocalVoice_t3474856357 * __this, int32_t ___durationMs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::service()
extern "C"  void LocalVoice_service_m1652716275 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::processStream()
extern "C"  bool LocalVoice_processStream_m1112317417 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::RemoveSelf()
extern "C"  void LocalVoice_RemoveSelf_m2922113622 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::Dispose()
extern "C"  void LocalVoice_Dispose_m1793867153 (LocalVoice_t3474856357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoice::.cctor()
extern "C"  void LocalVoice__cctor_m3345401589 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
