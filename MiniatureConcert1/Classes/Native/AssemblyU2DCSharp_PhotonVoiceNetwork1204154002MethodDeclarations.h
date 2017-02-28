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

// PhotonVoiceNetwork
struct PhotonVoiceNetwork_t1204154002;
// UnityVoiceFrontend
struct UnityVoiceFrontend_t4221749441;
// System.String
struct String_t;
// ExitGames.Client.Photon.Voice.LocalVoice
struct LocalVoice_t3474856357;
// ExitGames.Client.Photon.Voice.IAudioStreamFloat
struct IAudioStreamFloat_t2571704657;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// PhotonVoiceSpeaker
struct PhotonVoiceSpeaker_t555915945;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho4010383124.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo82194312.h"
#include "AssemblyU2DCSharp_PhotonVoiceSpeaker555915945.h"

// System.Void PhotonVoiceNetwork::.ctor()
extern "C"  void PhotonVoiceNetwork__ctor_m2329425473 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonVoiceNetwork PhotonVoiceNetwork::get_instance()
extern "C"  PhotonVoiceNetwork_t1204154002 * PhotonVoiceNetwork_get_instance_m4196131486 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonVoiceNetwork PhotonVoiceNetwork::getInstance()
extern "C"  PhotonVoiceNetwork_t1204154002 * PhotonVoiceNetwork_getInstance_m2810915975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::OnDestroy()
extern "C"  void PhotonVoiceNetwork_OnDestroy_m798778096 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::RuntimeInitializeOnLoad()
extern "C"  void PhotonVoiceNetwork_RuntimeInitializeOnLoad_m3462249466 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::Awake()
extern "C"  void PhotonVoiceNetwork_Awake_m443205822 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonVoiceNetwork::Connect()
extern "C"  bool PhotonVoiceNetwork_Connect_m856680051 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::Disconnect()
extern "C"  void PhotonVoiceNetwork_Disconnect_m1674673445 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityVoiceFrontend PhotonVoiceNetwork::get_Client()
extern "C"  UnityVoiceFrontend_t4221749441 * PhotonVoiceNetwork_get_Client_m1727985749 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.ClientState PhotonVoiceNetwork::get_ClientState()
extern "C"  int32_t PhotonVoiceNetwork_get_ClientState_m3218298370 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonVoiceNetwork::get_CurrentRoomName()
extern "C"  String_t* PhotonVoiceNetwork_get_CurrentRoomName_m106013816 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonVoiceNetwork::get_MicrophoneDevice()
extern "C"  String_t* PhotonVoiceNetwork_get_MicrophoneDevice_m2287588007 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::set_MicrophoneDevice(System.String)
extern "C"  void PhotonVoiceNetwork_set_MicrophoneDevice_m2173806448 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::OnEnable()
extern "C"  void PhotonVoiceNetwork_OnEnable_m1873503569 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::OnApplicationQuit()
extern "C"  void PhotonVoiceNetwork_OnApplicationQuit_m2341128727 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::Update()
extern "C"  void PhotonVoiceNetwork_Update_m1096632144 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.LocalVoice PhotonVoiceNetwork::CreateLocalVoice(ExitGames.Client.Photon.Voice.IAudioStreamFloat,ExitGames.Client.Photon.Voice.VoiceInfo)
extern "C"  LocalVoice_t3474856357 * PhotonVoiceNetwork_CreateLocalVoice_m2035805189 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___audioClip0, VoiceInfo_t82194312 * ___voiceInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::OnJoinedRoom()
extern "C"  void PhotonVoiceNetwork_OnJoinedRoom_m2091708298 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::OnLeftRoom()
extern "C"  void PhotonVoiceNetwork_OnLeftRoom_m3548665858 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::OnDisconnectedFromPhoton()
extern "C"  void PhotonVoiceNetwork_OnDisconnectedFromPhoton_m2707391081 (PhotonVoiceNetwork_t1204154002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::LinkSpeakerToRemoteVoice(PhotonVoiceSpeaker)
extern "C"  void PhotonVoiceNetwork_LinkSpeakerToRemoteVoice_m2875909818 (Il2CppObject * __this /* static, unused */, PhotonVoiceSpeaker_t555915945 * ___speaker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::UnlinkSpeakerFromRemoteVoice(PhotonVoiceSpeaker)
extern "C"  void PhotonVoiceNetwork_UnlinkSpeakerFromRemoteVoice_m2088767858 (Il2CppObject * __this /* static, unused */, PhotonVoiceSpeaker_t555915945 * ___speaker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceNetwork::.cctor()
extern "C"  void PhotonVoiceNetwork__cctor_m81156356 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
