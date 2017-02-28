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

// AudioStreamPlayer
struct AudioStreamPlayer_t2390138271;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AudioStreamPlayer::.ctor(UnityEngine.AudioSource,System.String,System.Boolean)
extern "C"  void AudioStreamPlayer__ctor_m345837847 (AudioStreamPlayer_t2390138271 * __this, AudioSource_t1135106623 * ___audioSource0, String_t* ___logPrefix1, bool ___debugInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AudioStreamPlayer::get_CurrentBufferLag()
extern "C"  int32_t AudioStreamPlayer_get_CurrentBufferLag_m3648044198 (AudioStreamPlayer_t2390138271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioStreamPlayer::set_CurrentBufferLag(System.Int32)
extern "C"  void AudioStreamPlayer_set_CurrentBufferLag_m91768609 (AudioStreamPlayer_t2390138271 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource AudioStreamPlayer::get_AudioSource()
extern "C"  AudioSource_t1135106623 * AudioStreamPlayer_get_AudioSource_m1603862295 (AudioStreamPlayer_t2390138271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AudioStreamPlayer::get_playSamplePos()
extern "C"  int32_t AudioStreamPlayer_get_playSamplePos_m1803989171 (AudioStreamPlayer_t2390138271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioStreamPlayer::set_playSamplePos(System.Int32)
extern "C"  void AudioStreamPlayer_set_playSamplePos_m2208456678 (AudioStreamPlayer_t2390138271 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioStreamPlayer::get_IsPlaying()
extern "C"  bool AudioStreamPlayer_get_IsPlaying_m1378803981 (AudioStreamPlayer_t2390138271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioStreamPlayer::get_IsStarted()
extern "C"  bool AudioStreamPlayer_get_IsStarted_m4239946602 (AudioStreamPlayer_t2390138271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioStreamPlayer::Start(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void AudioStreamPlayer_Start_m3183827892 (AudioStreamPlayer_t2390138271 * __this, int32_t ___frequency0, int32_t ___channels1, int32_t ___frameSamples2, int32_t ___playDelayMs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioStreamPlayer::Update()
extern "C"  void AudioStreamPlayer_Update_m3441212259 (AudioStreamPlayer_t2390138271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioStreamPlayer::OnAudioFrame(System.Single[])
extern "C"  void AudioStreamPlayer_OnAudioFrame_m3125816647 (AudioStreamPlayer_t2390138271 * __this, SingleU5BU5D_t577127397* ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioStreamPlayer::Stop()
extern "C"  void AudioStreamPlayer_Stop_m4234940800 (AudioStreamPlayer_t2390138271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
