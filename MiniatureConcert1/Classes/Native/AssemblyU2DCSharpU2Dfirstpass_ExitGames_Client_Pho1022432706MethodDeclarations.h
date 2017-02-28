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

// ExitGames.Client.Photon.Voice.RemoteVoice
struct RemoteVoice_t1022432706;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot426870209.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ExitGames.Client.Photon.Voice.RemoteVoice::.ctor(ExitGames.Client.Photon.Voice.VoiceClient,System.Int32,System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo,System.Byte)
extern "C"  void RemoteVoice__ctor_m1040423704 (RemoteVoice_t1022432706 * __this, VoiceClient_t426870209 * ___client0, int32_t ___channelId1, int32_t ___playerId2, uint8_t ___voiceId3, VoiceInfo_t82194312 * ___info4, uint8_t ___lastEventNumber5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceInfo ExitGames.Client.Photon.Voice.RemoteVoice::get_Info()
extern "C"  VoiceInfo_t82194312 * RemoteVoice_get_Info_m2769875055 (RemoteVoice_t1022432706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.RemoteVoice::set_Info(ExitGames.Client.Photon.Voice.VoiceInfo)
extern "C"  void RemoteVoice_set_Info_m1884803020 (RemoteVoice_t1022432706 * __this, VoiceInfo_t82194312 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Voice.RemoteVoice::get_LocalUserObject()
extern "C"  Il2CppObject * RemoteVoice_get_LocalUserObject_m920137060 (RemoteVoice_t1022432706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.RemoteVoice::set_LocalUserObject(System.Object)
extern "C"  void RemoteVoice_set_LocalUserObject_m3037782157 (RemoteVoice_t1022432706 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.RemoteVoice::receiveBytes(System.Byte[],System.Byte)
extern "C"  void RemoteVoice_receiveBytes_m1878241591 (RemoteVoice_t1022432706 * __this, ByteU5BU5D_t3397334013* ___receivedBytes0, uint8_t ___evNumber1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.RemoteVoice::receiveFrame(System.Byte[])
extern "C"  void RemoteVoice_receiveFrame_m324120820 (RemoteVoice_t1022432706 * __this, ByteU5BU5D_t3397334013* ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] ExitGames.Client.Photon.Voice.RemoteVoice::decompressShort(System.Byte[])
extern "C"  Int16U5BU5D_t3104283263* RemoteVoice_decompressShort_m1522210435 (RemoteVoice_t1022432706 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] ExitGames.Client.Photon.Voice.RemoteVoice::decompressFloat(System.Byte[])
extern "C"  SingleU5BU5D_t577127397* RemoteVoice_decompressFloat_m213758207 (RemoteVoice_t1022432706 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.RemoteVoice::Dispose()
extern "C"  void RemoteVoice_Dispose_m2115480414 (RemoteVoice_t1022432706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
