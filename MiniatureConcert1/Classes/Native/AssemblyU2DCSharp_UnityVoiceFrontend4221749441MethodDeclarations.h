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

// UnityVoiceFrontend
struct UnityVoiceFrontend_t4221749441;
// PhotonVoiceNetwork
struct PhotonVoiceNetwork_t1204154002;
// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo>
struct Action_3_t329678864;
// System.Action`2<System.Int32,System.Byte>
struct Action_2_t2981472501;
// System.Action`3<System.Int32,System.Byte,System.Single[]>
struct Action_3_t824611949;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>
struct Action_1_t3812182506;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3450336510;
// System.String
struct String_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// PhotonVoiceSpeaker
struct PhotonVoiceSpeaker_t555915945;
// System.Object
struct Il2CppObject;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonVoiceNetwork1204154002.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "AssemblyU2DCSharp_PhotonVoiceSpeaker555915945.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_448275293.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho4010383124.h"

// System.Void UnityVoiceFrontend::.ctor(PhotonVoiceNetwork)
extern "C"  void UnityVoiceFrontend__ctor_m3984793354 (UnityVoiceFrontend_t4221749441 * __this, PhotonVoiceNetwork_t1204154002 * ___network0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo> UnityVoiceFrontend::get_OnRemoteVoiceInfoAction()
extern "C"  Action_3_t329678864 * UnityVoiceFrontend_get_OnRemoteVoiceInfoAction_m3583103157 (UnityVoiceFrontend_t4221749441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::set_OnRemoteVoiceInfoAction(System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo>)
extern "C"  void UnityVoiceFrontend_set_OnRemoteVoiceInfoAction_m1809638564 (UnityVoiceFrontend_t4221749441 * __this, Action_3_t329678864 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<System.Int32,System.Byte> UnityVoiceFrontend::get_OnRemoteVoiceRemoveAction()
extern "C"  Action_2_t2981472501 * UnityVoiceFrontend_get_OnRemoteVoiceRemoveAction_m2378679886 (UnityVoiceFrontend_t4221749441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::set_OnRemoteVoiceRemoveAction(System.Action`2<System.Int32,System.Byte>)
extern "C"  void UnityVoiceFrontend_set_OnRemoteVoiceRemoveAction_m2555010935 (UnityVoiceFrontend_t4221749441 * __this, Action_2_t2981472501 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`3<System.Int32,System.Byte,System.Single[]> UnityVoiceFrontend::get_OnAudioFrameAction()
extern "C"  Action_3_t824611949 * UnityVoiceFrontend_get_OnAudioFrameAction_m3038200813 (UnityVoiceFrontend_t4221749441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::set_OnAudioFrameAction(System.Action`3<System.Int32,System.Byte,System.Single[]>)
extern "C"  void UnityVoiceFrontend_set_OnAudioFrameAction_m4184027758 (UnityVoiceFrontend_t4221749441 * __this, Action_3_t824611949 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> UnityVoiceFrontend::get_OnStateChangeAction()
extern "C"  Action_1_t3812182506 * UnityVoiceFrontend_get_OnStateChangeAction_m3685575995 (UnityVoiceFrontend_t4221749441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::set_OnStateChangeAction(System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>)
extern "C"  void UnityVoiceFrontend_set_OnStateChangeAction_m3039922302 (UnityVoiceFrontend_t4221749441 * __this, Action_1_t3812182506 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<ExitGames.Client.Photon.OperationResponse> UnityVoiceFrontend::get_OnOpResponseAction()
extern "C"  Action_1_t3450336510 * UnityVoiceFrontend_get_OnOpResponseAction_m991366189 (UnityVoiceFrontend_t4221749441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::set_OnOpResponseAction(System.Action`1<ExitGames.Client.Photon.OperationResponse>)
extern "C"  void UnityVoiceFrontend_set_OnOpResponseAction_m2508400106 (UnityVoiceFrontend_t4221749441 * __this, Action_1_t3450336510 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::Reconnect()
extern "C"  void UnityVoiceFrontend_Reconnect_m1178825661 (UnityVoiceFrontend_t4221749441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void UnityVoiceFrontend_DebugReturn_m1279670298 (UnityVoiceFrontend_t4221749441 * __this, uint8_t ___level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::OnOpResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void UnityVoiceFrontend_OnOpResponse_m1702239459 (UnityVoiceFrontend_t4221749441 * __this, OperationResponse_t3648537128 * ___resp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::linkVoice(System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo,PhotonVoiceSpeaker)
extern "C"  void UnityVoiceFrontend_linkVoice_m3120565797 (UnityVoiceFrontend_t4221749441 * __this, int32_t ___playerId0, uint8_t ___voiceId1, VoiceInfo_t82194312 * ___voiceInfo2, PhotonVoiceSpeaker_t555915945 * ___speaker3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::OnRemoteVoiceInfo(System.Int32,System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo,System.Object&)
extern "C"  void UnityVoiceFrontend_OnRemoteVoiceInfo_m2813239182 (UnityVoiceFrontend_t4221749441 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_t82194312 * ___voiceInfo3, Il2CppObject ** ___localUserObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::LinkSpeakerToRemoteVoice(PhotonVoiceSpeaker)
extern "C"  void UnityVoiceFrontend_LinkSpeakerToRemoteVoice_m3911507417 (UnityVoiceFrontend_t4221749441 * __this, PhotonVoiceSpeaker_t555915945 * ___speaker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::OnRemoteVoiceRemove(System.Int32,System.Int32,System.Byte,System.Object)
extern "C"  void UnityVoiceFrontend_OnRemoteVoiceRemove_m2243548466 (UnityVoiceFrontend_t4221749441 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, Il2CppObject * ___localUserObject3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityVoiceFrontend::unlinkSpeaker(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>)
extern "C"  bool UnityVoiceFrontend_unlinkSpeaker_m4021376925 (UnityVoiceFrontend_t4221749441 * __this, KeyValuePair_2_t448275293  ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::UnlinkSpeakerFromRemoteVoice(PhotonVoiceSpeaker)
extern "C"  void UnityVoiceFrontend_UnlinkSpeakerFromRemoteVoice_m3630136315 (UnityVoiceFrontend_t4221749441 * __this, PhotonVoiceSpeaker_t555915945 * ___speaker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::OnAudioFrame(System.Int32,System.Int32,System.Byte,System.Single[],System.Object)
extern "C"  void UnityVoiceFrontend_OnAudioFrame_m1125644628 (UnityVoiceFrontend_t4221749441 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, SingleU5BU5D_t577127397* ___frame3, Il2CppObject * ___localUserObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityVoiceFrontend::OnStateChange(ExitGames.Client.Photon.LoadBalancing.ClientState)
extern "C"  void UnityVoiceFrontend_OnStateChange_m4288967357 (UnityVoiceFrontend_t4221749441 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
