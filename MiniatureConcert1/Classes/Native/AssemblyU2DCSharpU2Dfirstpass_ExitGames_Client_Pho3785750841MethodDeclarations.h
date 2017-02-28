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

// ExitGames.Client.Photon.Voice.LoadBalancingFrontend
struct LoadBalancingFrontend_t3785750841;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.LocalVoice>
struct IEnumerable_1_t3766983402;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.RemoteVoiceInfo>
struct IEnumerable_1_t398663719;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t4223148500;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>
struct Action_1_t3812182506;
// ExitGames.Client.Photon.Voice.LocalVoice
struct LocalVoice_t3474856357;
// ExitGames.Client.Photon.Voice.IAudioStreamBase
struct IAudioStreamBase_t309970496;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.EventData
struct EventData_t126381822;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "mscorlib_System_Object2689449295.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData126381822.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho4010383124.h"

// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::.ctor()
extern "C"  void LoadBalancingFrontend__ctor_m1707465658 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::LogError(System.String,System.Object[])
extern "C"  void LoadBalancingFrontend_LogError_m853389964 (LoadBalancingFrontend_t3785750841 * __this, String_t* ___fmt0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::LogWarning(System.String,System.Object[])
extern "C"  void LoadBalancingFrontend_LogWarning_m599519170 (LoadBalancingFrontend_t3785750841 * __this, String_t* ___fmt0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::LogInfo(System.String,System.Object[])
extern "C"  void LoadBalancingFrontend_LogInfo_m847038500 (LoadBalancingFrontend_t3785750841 * __this, String_t* ___fmt0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::LogDebug(System.String,System.Object[])
extern "C"  void LoadBalancingFrontend_LogDebug_m1909198689 (LoadBalancingFrontend_t3785750841 * __this, String_t* ___fmt0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_FramesLost()
extern "C"  int32_t LoadBalancingFrontend_get_FramesLost_m559051451 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_FramesReceived()
extern "C"  int32_t LoadBalancingFrontend_get_FramesReceived_m1125314374 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_FramesSent()
extern "C"  int32_t LoadBalancingFrontend_get_FramesSent_m2850152267 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_FramesSentBytes()
extern "C"  int32_t LoadBalancingFrontend_get_FramesSentBytes_m2828676240 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_RoundTripTime()
extern "C"  int32_t LoadBalancingFrontend_get_RoundTripTime_m4039300137 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_RoundTripTimeVariance()
extern "C"  int32_t LoadBalancingFrontend_get_RoundTripTimeVariance_m2373731698 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_DebugLostPercent()
extern "C"  int32_t LoadBalancingFrontend_get_DebugLostPercent_m758728075 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::set_DebugLostPercent(System.Int32)
extern "C"  void LoadBalancingFrontend_set_DebugLostPercent_m4290840922 (LoadBalancingFrontend_t3785750841 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.LocalVoice> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_LocalVoices()
extern "C"  Il2CppObject* LoadBalancingFrontend_get_LocalVoices_m1271587002 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.LocalVoice> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::LocalVoicesInChannel(System.Int32)
extern "C"  Il2CppObject* LoadBalancingFrontend_LocalVoicesInChannel_m1548695350 (LoadBalancingFrontend_t3785750841 * __this, int32_t ___channelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<ExitGames.Client.Photon.Voice.RemoteVoiceInfo> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_RemoteVoiceInfos()
extern "C"  Il2CppObject* LoadBalancingFrontend_get_RemoteVoiceInfos_m1280981296 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_RemoteVoiceLocalUserObjects()
extern "C"  Il2CppObject* LoadBalancingFrontend_get_RemoteVoiceLocalUserObjects_m2222992021 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.LoadBalancingFrontend::IsChannelJoined(System.Int32)
extern "C"  bool LoadBalancingFrontend_IsChannelJoined_m2842631581 (LoadBalancingFrontend_t3785750841 * __this, int32_t ___channelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_DebugEchoMode()
extern "C"  bool LoadBalancingFrontend_get_DebugEchoMode_m2697388086 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::set_DebugEchoMode(System.Boolean)
extern "C"  void LoadBalancingFrontend_set_DebugEchoMode_m1569266555 (LoadBalancingFrontend_t3785750841 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<ExitGames.Client.Photon.EventData> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_OnEventAction()
extern "C"  Action_1_t4223148500 * LoadBalancingFrontend_get_OnEventAction_m2692071081 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::set_OnEventAction(System.Action`1<ExitGames.Client.Photon.EventData>)
extern "C"  void LoadBalancingFrontend_set_OnEventAction_m1807123288 (LoadBalancingFrontend_t3785750841 * __this, Action_1_t4223148500 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_OnStateChangeAction()
extern "C"  Action_1_t3812182506 * LoadBalancingFrontend_get_OnStateChangeAction_m582979853 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::set_OnStateChangeAction(System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>)
extern "C"  void LoadBalancingFrontend_set_OnStateChangeAction_m1039675820 (LoadBalancingFrontend_t3785750841 * __this, Action_1_t3812182506 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::Service()
extern "C"  void LoadBalancingFrontend_Service_m4127888959 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.LocalVoice ExitGames.Client.Photon.Voice.LoadBalancingFrontend::CreateLocalVoice(ExitGames.Client.Photon.Voice.IAudioStreamBase,ExitGames.Client.Photon.Voice.VoiceInfo)
extern "C"  LocalVoice_t3474856357 * LoadBalancingFrontend_CreateLocalVoice_m1269331431 (LoadBalancingFrontend_t3785750841 * __this, Il2CppObject * ___audioStream0, VoiceInfo_t82194312 * ___voiceInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.LoadBalancingFrontend::ChangeAudioGroups(System.Byte[],System.Byte[])
extern "C"  bool LoadBalancingFrontend_ChangeAudioGroups_m2244900540 (LoadBalancingFrontend_t3785750841 * __this, ByteU5BU5D_t3397334013* ___groupsToRemove0, ByteU5BU5D_t3397334013* ___groupsToAdd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_GlobalAudioGroup()
extern "C"  uint8_t LoadBalancingFrontend_get_GlobalAudioGroup_m2030288143 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::set_GlobalAudioGroup(System.Byte)
extern "C"  void LoadBalancingFrontend_set_GlobalAudioGroup_m1316247458 (LoadBalancingFrontend_t3785750841 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::SendVoicesInfo(System.Object,System.Int32,System.Int32)
extern "C"  void LoadBalancingFrontend_SendVoicesInfo_m3998407083 (LoadBalancingFrontend_t3785750841 * __this, Il2CppObject * ___content0, int32_t ___channelId1, int32_t ___targetPlayerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::SendVoiceRemove(System.Object,System.Int32)
extern "C"  void LoadBalancingFrontend_SendVoiceRemove_m2335382233 (LoadBalancingFrontend_t3785750841 * __this, Il2CppObject * ___content0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::SendFrame(System.Object,System.Int32,System.Byte)
extern "C"  void LoadBalancingFrontend_SendFrame_m3059440885 (LoadBalancingFrontend_t3785750841 * __this, Il2CppObject * ___content0, int32_t ___channelId1, uint8_t ___audioGroup2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Voice.LoadBalancingFrontend::ChannelIdStr(System.Int32)
extern "C"  String_t* LoadBalancingFrontend_ChannelIdStr_m3946129373 (LoadBalancingFrontend_t3785750841 * __this, int32_t ___channelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Voice.LoadBalancingFrontend::PlayerIdStr(System.Int32)
extern "C"  String_t* LoadBalancingFrontend_PlayerIdStr_m1842160317 (LoadBalancingFrontend_t3785750841 * __this, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Voice.LoadBalancingFrontend::get_SupportsArraySegmentSerialization()
extern "C"  bool LoadBalancingFrontend_get_SupportsArraySegmentSerialization_m2713368319 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::onEventActionVoiceClient(ExitGames.Client.Photon.EventData)
extern "C"  void LoadBalancingFrontend_onEventActionVoiceClient_m2692035014 (LoadBalancingFrontend_t3785750841 * __this, EventData_t126381822 * ___ev0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::onStateChangeVoiceClient(ExitGames.Client.Photon.LoadBalancing.ClientState)
extern "C"  void LoadBalancingFrontend_onStateChangeVoiceClient_m1229565986 (LoadBalancingFrontend_t3785750841 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::onPlayerLeave(System.Int32)
extern "C"  void LoadBalancingFrontend_onPlayerLeave_m1509027868 (LoadBalancingFrontend_t3785750841 * __this, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Voice.LoadBalancingFrontend::Dispose()
extern "C"  void LoadBalancingFrontend_Dispose_m2421141049 (LoadBalancingFrontend_t3785750841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
