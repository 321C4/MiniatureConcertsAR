#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Voice.LocalVoice
struct LocalVoice_t3474856357;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonVoiceRecorder
struct  PhotonVoiceRecorder_t3997080430  : public MonoBehaviour_t3914164484
{
public:
	// ExitGames.Client.Photon.Voice.LocalVoice PhotonVoiceRecorder::voice
	LocalVoice_t3474856357 * ___voice_3;
	// System.String PhotonVoiceRecorder::microphoneDevice
	String_t* ___microphoneDevice_4;
	// UnityEngine.AudioClip PhotonVoiceRecorder::AudioClip
	AudioClip_t1932558630 * ___AudioClip_5;
	// System.Boolean PhotonVoiceRecorder::LoopAudioClip
	bool ___LoopAudioClip_6;
	// System.String PhotonVoiceRecorder::log0
	String_t* ___log0_7;
	// System.String PhotonVoiceRecorder::log1
	String_t* ___log1_8;

public:
	inline static int32_t get_offset_of_voice_3() { return static_cast<int32_t>(offsetof(PhotonVoiceRecorder_t3997080430, ___voice_3)); }
	inline LocalVoice_t3474856357 * get_voice_3() const { return ___voice_3; }
	inline LocalVoice_t3474856357 ** get_address_of_voice_3() { return &___voice_3; }
	inline void set_voice_3(LocalVoice_t3474856357 * value)
	{
		___voice_3 = value;
		Il2CppCodeGenWriteBarrier(&___voice_3, value);
	}

	inline static int32_t get_offset_of_microphoneDevice_4() { return static_cast<int32_t>(offsetof(PhotonVoiceRecorder_t3997080430, ___microphoneDevice_4)); }
	inline String_t* get_microphoneDevice_4() const { return ___microphoneDevice_4; }
	inline String_t** get_address_of_microphoneDevice_4() { return &___microphoneDevice_4; }
	inline void set_microphoneDevice_4(String_t* value)
	{
		___microphoneDevice_4 = value;
		Il2CppCodeGenWriteBarrier(&___microphoneDevice_4, value);
	}

	inline static int32_t get_offset_of_AudioClip_5() { return static_cast<int32_t>(offsetof(PhotonVoiceRecorder_t3997080430, ___AudioClip_5)); }
	inline AudioClip_t1932558630 * get_AudioClip_5() const { return ___AudioClip_5; }
	inline AudioClip_t1932558630 ** get_address_of_AudioClip_5() { return &___AudioClip_5; }
	inline void set_AudioClip_5(AudioClip_t1932558630 * value)
	{
		___AudioClip_5 = value;
		Il2CppCodeGenWriteBarrier(&___AudioClip_5, value);
	}

	inline static int32_t get_offset_of_LoopAudioClip_6() { return static_cast<int32_t>(offsetof(PhotonVoiceRecorder_t3997080430, ___LoopAudioClip_6)); }
	inline bool get_LoopAudioClip_6() const { return ___LoopAudioClip_6; }
	inline bool* get_address_of_LoopAudioClip_6() { return &___LoopAudioClip_6; }
	inline void set_LoopAudioClip_6(bool value)
	{
		___LoopAudioClip_6 = value;
	}

	inline static int32_t get_offset_of_log0_7() { return static_cast<int32_t>(offsetof(PhotonVoiceRecorder_t3997080430, ___log0_7)); }
	inline String_t* get_log0_7() const { return ___log0_7; }
	inline String_t** get_address_of_log0_7() { return &___log0_7; }
	inline void set_log0_7(String_t* value)
	{
		___log0_7 = value;
		Il2CppCodeGenWriteBarrier(&___log0_7, value);
	}

	inline static int32_t get_offset_of_log1_8() { return static_cast<int32_t>(offsetof(PhotonVoiceRecorder_t3997080430, ___log1_8)); }
	inline String_t* get_log1_8() const { return ___log1_8; }
	inline String_t** get_address_of_log1_8() { return &___log1_8; }
	inline void set_log1_8(String_t* value)
	{
		___log1_8 = value;
		Il2CppCodeGenWriteBarrier(&___log1_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
