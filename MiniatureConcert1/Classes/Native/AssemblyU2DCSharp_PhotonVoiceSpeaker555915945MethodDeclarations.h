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

// PhotonVoiceSpeaker
struct PhotonVoiceSpeaker_t555915945;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"

// System.Void PhotonVoiceSpeaker::.ctor()
extern "C"  void PhotonVoiceSpeaker__ctor_m2507759520 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PhotonVoiceSpeaker::get_LastRecvTime()
extern "C"  float PhotonVoiceSpeaker_get_LastRecvTime_m579711620 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::set_LastRecvTime(System.Single)
extern "C"  void PhotonVoiceSpeaker_set_LastRecvTime_m1619470493 (PhotonVoiceSpeaker_t555915945 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonVoiceSpeaker::get_IsPlaying()
extern "C"  bool PhotonVoiceSpeaker_get_IsPlaying_m80452563 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonVoiceSpeaker::get_CurrentBufferLag()
extern "C"  int32_t PhotonVoiceSpeaker_get_CurrentBufferLag_m745479432 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonVoiceSpeaker::get_IsVoiceLinked()
extern "C"  bool PhotonVoiceSpeaker_get_IsVoiceLinked_m903257950 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::Awake()
extern "C"  void PhotonVoiceSpeaker_Awake_m1878106485 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::OnVoiceLinked(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void PhotonVoiceSpeaker_OnVoiceLinked_m3900673046 (PhotonVoiceSpeaker_t555915945 * __this, int32_t ___frequency0, int32_t ___channels1, int32_t ___frameSamplesPerChannel2, int32_t ___playDelayMs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::OnVoiceUnlinked()
extern "C"  void PhotonVoiceSpeaker_OnVoiceUnlinked_m4264477153 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::Update()
extern "C"  void PhotonVoiceSpeaker_Update_m3132788785 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::OnDestroy()
extern "C"  void PhotonVoiceSpeaker_OnDestroy_m1766308943 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::OnApplicationQuit()
extern "C"  void PhotonVoiceSpeaker_OnApplicationQuit_m4275635958 (PhotonVoiceSpeaker_t555915945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceSpeaker::OnAudioFrame(System.Single[])
extern "C"  void PhotonVoiceSpeaker_OnAudioFrame_m2719512173 (PhotonVoiceSpeaker_t555915945 * __this, SingleU5BU5D_t577127397* ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
