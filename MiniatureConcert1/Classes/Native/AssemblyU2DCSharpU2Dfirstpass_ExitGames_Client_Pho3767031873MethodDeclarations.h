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

// ExitGames.Client.Photon.Voice.LocalVoiceFloat
struct LocalVoiceFloat_t3767031873;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// ExitGames.Client.Photon.Voice.IAudioStream`1<System.Single>
struct IAudioStream_1_t3752842203;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot426870209.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "mscorlib_System_ArraySegment_1_gen2594217482.h"

// System.Void ExitGames.Client.Photon.Voice.LocalVoiceFloat::.ctor()
extern "C"  void LocalVoiceFloat__ctor_m3253777922 (LocalVoiceFloat_t3767031873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LocalVoiceFloat::.ctor(ExitGames.Client.Photon.Voice.VoiceClient,System.Byte,ExitGames.Client.Photon.Voice.IAudioStream`1<System.Single>,ExitGames.Client.Photon.Voice.VoiceInfo,System.Int32)
extern "C"  void LocalVoiceFloat__ctor_m162665008 (LocalVoiceFloat_t3767031873 * __this, VoiceClient_t426870209 * ___voiceClient0, uint8_t ___id1, Il2CppObject* ___audioStream2, VoiceInfo_t82194312 * ___voiceInfo3, int32_t ___channelId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> ExitGames.Client.Photon.Voice.LocalVoiceFloat::compress(System.Single[])
extern "C"  ArraySegment_1_t2594217482  LocalVoiceFloat_compress_m3796542575 (LocalVoiceFloat_t3767031873 * __this, SingleU5BU5D_t577127397* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
