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

// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// ExitGames.Client.Photon.Voice.IVoiceFrontend
struct IVoiceFrontend_t866841943;
// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_t1755651461;
// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate
struct RemoteVoiceRemoveDelegate_t1505106365;
// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate
struct AudioFrameFloatDelegate_t771091044;
// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate
struct AudioFrameShortDelegate_t729549624;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.LocalVoice>
struct IEnumerable_1_t3766983402;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.RemoteVoiceInfo>
struct IEnumerable_1_t398663719;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// ExitGames.Client.Photon.Voice.LocalVoice
struct LocalVoice_t3474856357;
// ExitGames.Client.Photon.Voice.IAudioStreamBase
struct IAudioStreamBase_t309970496;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.ICollection`1<ExitGames.Client.Photon.Voice.LocalVoice>
struct ICollection_1_t131964366;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.Voice.LocalVoice>
struct List_1_t2843977489;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1755651461.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1505106365.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot771091044.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot729549624.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3474856357.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ExitGames.Client.Photon.Voice.VoiceClient::.ctor(ExitGames.Client.Photon.Voice.IVoiceFrontend)
extern "C"  void VoiceClient__ctor_m3701044839 (VoiceClient_t426870209 * __this, Il2CppObject * ___frontend0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::get_FramesLost()
extern "C"  int32_t VoiceClient_get_FramesLost_m947644323 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_FramesLost(System.Int32)
extern "C"  void VoiceClient_set_FramesLost_m112140742 (VoiceClient_t426870209 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::get_FramesReceived()
extern "C"  int32_t VoiceClient_get_FramesReceived_m615987860 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_FramesReceived(System.Int32)
extern "C"  void VoiceClient_set_FramesReceived_m1046193907 (VoiceClient_t426870209 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::get_FramesSent()
extern "C"  int32_t VoiceClient_get_FramesSent_m1887990435 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::get_FramesSentBytes()
extern "C"  int32_t VoiceClient_get_FramesSentBytes_m474566758 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::get_RoundTripTime()
extern "C"  int32_t VoiceClient_get_RoundTripTime_m4009968745 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_RoundTripTime(System.Int32)
extern "C"  void VoiceClient_set_RoundTripTime_m3059406452 (VoiceClient_t426870209 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::get_RoundTripTimeVariance()
extern "C"  int32_t VoiceClient_get_RoundTripTimeVariance_m3599137200 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_RoundTripTimeVariance(System.Int32)
extern "C"  void VoiceClient_set_RoundTripTimeVariance_m3851016971 (VoiceClient_t426870209 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.VoiceClient::get_SuppressInfoDuplicateWarning()
extern "C"  bool VoiceClient_get_SuppressInfoDuplicateWarning_m34454049 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_SuppressInfoDuplicateWarning(System.Boolean)
extern "C"  void VoiceClient_set_SuppressInfoDuplicateWarning_m799548106 (VoiceClient_t426870209 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate ExitGames.Client.Photon.Voice.VoiceClient::get_OnRemoteVoiceInfoAction()
extern "C"  RemoteVoiceInfoDelegate_t1755651461 * VoiceClient_get_OnRemoteVoiceInfoAction_m4137403118 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_OnRemoteVoiceInfoAction(ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate)
extern "C"  void VoiceClient_set_OnRemoteVoiceInfoAction_m1280690479 (VoiceClient_t426870209 * __this, RemoteVoiceInfoDelegate_t1755651461 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate ExitGames.Client.Photon.Voice.VoiceClient::get_OnRemoteVoiceRemoveAction()
extern "C"  RemoteVoiceRemoveDelegate_t1505106365 * VoiceClient_get_OnRemoteVoiceRemoveAction_m2307067214 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_OnRemoteVoiceRemoveAction(ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate)
extern "C"  void VoiceClient_set_OnRemoteVoiceRemoveAction_m3478948975 (VoiceClient_t426870209 * __this, RemoteVoiceRemoveDelegate_t1505106365 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate ExitGames.Client.Photon.Voice.VoiceClient::get_OnAudioFrameFloatAction()
extern "C"  AudioFrameFloatDelegate_t771091044 * VoiceClient_get_OnAudioFrameFloatAction_m2410528940 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_OnAudioFrameFloatAction(ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate)
extern "C"  void VoiceClient_set_OnAudioFrameFloatAction_m1150398767 (VoiceClient_t426870209 * __this, AudioFrameFloatDelegate_t771091044 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate ExitGames.Client.Photon.Voice.VoiceClient::get_OnAudioFrameShortAction()
extern "C"  AudioFrameShortDelegate_t729549624 * VoiceClient_get_OnAudioFrameShortAction_m16336216 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_OnAudioFrameShortAction(ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate)
extern "C"  void VoiceClient_set_OnAudioFrameShortAction_m2994138095 (VoiceClient_t426870209 * __this, AudioFrameShortDelegate_t729549624 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::get_DebugLostPercent()
extern "C"  int32_t VoiceClient_get_DebugLostPercent_m1138603747 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_DebugLostPercent(System.Int32)
extern "C"  void VoiceClient_set_DebugLostPercent_m325294544 (VoiceClient_t426870209 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.LocalVoice> ExitGames.Client.Photon.Voice.VoiceClient::get_LocalVoices()
extern "C"  Il2CppObject* VoiceClient_get_LocalVoices_m3846576928 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.LocalVoice> ExitGames.Client.Photon.Voice.VoiceClient::LocalVoicesInChannel(System.Int32)
extern "C"  Il2CppObject* VoiceClient_LocalVoicesInChannel_m4081958812 (VoiceClient_t426870209 * __this, int32_t ___channelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.RemoteVoiceInfo> ExitGames.Client.Photon.Voice.VoiceClient::get_RemoteVoiceInfos()
extern "C"  Il2CppObject* VoiceClient_get_RemoteVoiceInfos_m4105100154 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> ExitGames.Client.Photon.Voice.VoiceClient::get_RemoteVoiceLocalUserObjects()
extern "C"  Il2CppObject* VoiceClient_get_RemoteVoiceLocalUserObjects_m1098818677 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::Service()
extern "C"  void VoiceClient_Service_m1486705503 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.LocalVoice ExitGames.Client.Photon.Voice.VoiceClient::CreateLocalVoice(ExitGames.Client.Photon.Voice.IAudioStreamBase,ExitGames.Client.Photon.Voice.VoiceInfo,System.Int32)
extern "C"  LocalVoice_t3474856357 * VoiceClient_CreateLocalVoice_m1616300132 (VoiceClient_t426870209 * __this, Il2CppObject * ___audioStream0, VoiceInfo_t82194312 * ___voiceInfo1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::RemoveLocalVoice(ExitGames.Client.Photon.Voice.LocalVoice)
extern "C"  void VoiceClient_RemoveLocalVoice_m3647538830 (VoiceClient_t426870209 * __this, LocalVoice_t3474856357 * ___voice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::sendChannelVoicesInfo(System.Int32,System.Int32,System.Boolean)
extern "C"  void VoiceClient_sendChannelVoicesInfo_m2613832281 (VoiceClient_t426870209 * __this, int32_t ___channelId0, int32_t ___targetPlayerId1, bool ___logInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::onVoiceEvent(System.Object,System.Int32,System.Int32,System.Int32)
extern "C"  void VoiceClient_onVoiceEvent_m4189175504 (VoiceClient_t426870209 * __this, Il2CppObject * ___content00, int32_t ___channelId1, int32_t ___playerId2, int32_t ___localPlayerId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Voice.VoiceClient::get_GlobalAudioGroup()
extern "C"  uint8_t VoiceClient_get_GlobalAudioGroup_m4201603359 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::set_GlobalAudioGroup(System.Byte)
extern "C"  void VoiceClient_set_GlobalAudioGroup_m1378705728 (VoiceClient_t426870209 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Voice.VoiceClient::buildVoicesInfo(System.Collections.Generic.ICollection`1<ExitGames.Client.Photon.Voice.LocalVoice>,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* VoiceClient_buildVoicesInfo_m1342036539 (VoiceClient_t426870209 * __this, Il2CppObject* ___voicesToSend0, bool ___logInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Voice.VoiceClient::buildVoiceRemoveMessage(System.Collections.Generic.List`1<ExitGames.Client.Photon.Voice.LocalVoice>)
extern "C"  ObjectU5BU5D_t3614634134* VoiceClient_buildVoiceRemoveMessage_m2888956453 (VoiceClient_t426870209 * __this, List_1_t2843977489 * ___voicesToSend0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::clearRemoteVoices()
extern "C"  void VoiceClient_clearRemoteVoices_m751276536 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::clearRemoteVoicesInChannel(System.Int32)
extern "C"  void VoiceClient_clearRemoteVoicesInChannel_m1222325583 (VoiceClient_t426870209 * __this, int32_t ___channelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::onVoiceInfo(System.Int32,System.Int32,System.Object)
extern "C"  void VoiceClient_onVoiceInfo_m3831391085 (VoiceClient_t426870209 * __this, int32_t ___channelId0, int32_t ___playerId1, Il2CppObject * ___payload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::onVoiceRemove(System.Int32,System.Int32,System.Object)
extern "C"  void VoiceClient_onVoiceRemove_m2204823337 (VoiceClient_t426870209 * __this, int32_t ___channelId0, int32_t ___playerId1, Il2CppObject * ___payload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::onFrame(System.Int32,System.Int32,System.Byte,System.Byte,System.Byte[])
extern "C"  void VoiceClient_onFrame_m2645845569 (VoiceClient_t426870209 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, uint8_t ___evNumber3, ByteU5BU5D_t3397334013* ___receivedBytes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.VoiceClient::removePlayerVoices(System.Int32,System.Int32)
extern "C"  bool VoiceClient_removePlayerVoices_m2362529134 (VoiceClient_t426870209 * __this, int32_t ___channelId0, int32_t ___playerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Voice.VoiceClient::channelStr(System.Int32)
extern "C"  String_t* VoiceClient_channelStr_m114390170 (VoiceClient_t426870209 * __this, int32_t ___channelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Voice.VoiceClient::playerStr(System.Int32)
extern "C"  String_t* VoiceClient_playerStr_m2177199540 (VoiceClient_t426870209 * __this, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.VoiceClient::Dispose()
extern "C"  void VoiceClient_Dispose_m2090244073 (VoiceClient_t426870209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
