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

// PhotonVoiceRecorder
struct PhotonVoiceRecorder_t3997080430;
// ExitGames.Client.Photon.Voice.VoiceDetector
struct VoiceDetector_t1456844706;
// System.String
struct String_t;
// ExitGames.Client.Photon.Voice.LevelMeter
struct LevelMeter_t1322354603;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PhotonVoiceRecorder::.ctor()
extern "C"  void PhotonVoiceRecorder__ctor_m76325417 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.VoiceDetector PhotonVoiceRecorder::get_VoiceDetector()
extern "C"  Il2CppObject * PhotonVoiceRecorder_get_VoiceDetector_m3154660239 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonVoiceRecorder::get_MicrophoneDevice()
extern "C"  String_t* PhotonVoiceRecorder_get_MicrophoneDevice_m2309480467 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::set_MicrophoneDevice(System.String)
extern "C"  void PhotonVoiceRecorder_set_MicrophoneDevice_m1442023524 (PhotonVoiceRecorder_t3997080430 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte PhotonVoiceRecorder::get_AudioGroup()
extern "C"  uint8_t PhotonVoiceRecorder_get_AudioGroup_m1522766659 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::set_AudioGroup(System.Byte)
extern "C"  void PhotonVoiceRecorder_set_AudioGroup_m1190898832 (PhotonVoiceRecorder_t3997080430 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonVoiceRecorder::get_IsTransmitting()
extern "C"  bool PhotonVoiceRecorder_get_IsTransmitting_m1422620542 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Voice.LevelMeter PhotonVoiceRecorder::get_LevelMeter()
extern "C"  Il2CppObject * PhotonVoiceRecorder_get_LevelMeter_m1745893987 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::Start()
extern "C"  void PhotonVoiceRecorder_Start_m4014018377 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::OnDestroy()
extern "C"  void PhotonVoiceRecorder_OnDestroy_m3836453788 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::OnEnable()
extern "C"  void PhotonVoiceRecorder_OnEnable_m3412320841 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::OnJoinedVoiceRoom()
extern "C"  void PhotonVoiceRecorder_OnJoinedVoiceRoom_m2228451996 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonVoiceRecorder::get_Transmit()
extern "C"  bool PhotonVoiceRecorder_get_Transmit_m1333583806 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::set_Transmit(System.Boolean)
extern "C"  void PhotonVoiceRecorder_set_Transmit_m321849621 (PhotonVoiceRecorder_t3997080430 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonVoiceRecorder::get_Detect()
extern "C"  bool PhotonVoiceRecorder_get_Detect_m1158169463 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::set_Detect(System.Boolean)
extern "C"  void PhotonVoiceRecorder_set_Detect_m4177260458 (PhotonVoiceRecorder_t3997080430 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonVoiceRecorder::VoiceDetectorCalibrate(System.Int32)
extern "C"  void PhotonVoiceRecorder_VoiceDetectorCalibrate_m3026296463 (PhotonVoiceRecorder_t3997080430 * __this, int32_t ___durationMs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonVoiceRecorder::get_VoiceDetectorCalibrating()
extern "C"  bool PhotonVoiceRecorder_get_VoiceDetectorCalibrating_m478783264 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonVoiceRecorder::ToStringFull()
extern "C"  String_t* PhotonVoiceRecorder_ToStringFull_m1160006785 (PhotonVoiceRecorder_t3997080430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
