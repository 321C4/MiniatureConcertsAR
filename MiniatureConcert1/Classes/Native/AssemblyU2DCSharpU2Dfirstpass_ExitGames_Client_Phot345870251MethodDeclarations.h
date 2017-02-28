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

// ExitGames.Client.Photon.Voice.LocalVoiceShort
struct LocalVoiceShort_t345870251;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// ExitGames.Client.Photon.Voice.IAudioStream`1<System.Int16>
struct IAudioStream_1_t1422610889;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot426870209.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "mscorlib_System_ArraySegment_1_gen2594217482.h"

// System.Void ExitGames.Client.Photon.Voice.LocalVoiceShort::.ctor()
extern "C"  void LocalVoiceShort__ctor_m2189644630 (LocalVoiceShort_t345870251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoiceShort::.ctor(ExitGames.Client.Photon.Voice.VoiceClient,System.Byte,ExitGames.Client.Photon.Voice.IAudioStream`1<System.Int16>,ExitGames.Client.Photon.Voice.VoiceInfo,System.Int32)
extern "C"  void LocalVoiceShort__ctor_m676345062 (LocalVoiceShort_t345870251 * __this, VoiceClient_t426870209 * ___voiceClient0, uint8_t ___id1, Il2CppObject* ___audioStream2, VoiceInfo_t82194312 * ___voiceInfo3, int32_t ___channelId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> ExitGames.Client.Photon.Voice.LocalVoiceShort::compress(System.Int16[])
extern "C"  ArraySegment_1_t2594217482  LocalVoiceShort_compress_m3737836147 (LocalVoiceShort_t345870251 * __this, Int16U5BU5D_t3104283263* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
