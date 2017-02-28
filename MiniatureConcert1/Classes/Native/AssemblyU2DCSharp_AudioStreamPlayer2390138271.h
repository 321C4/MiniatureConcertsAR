#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioStreamPlayer
struct  AudioStreamPlayer_t2390138271  : public Il2CppObject
{
public:
	// System.Int32 AudioStreamPlayer::maxPlayLagSamples
	int32_t ___maxPlayLagSamples_1;
	// System.Int32 AudioStreamPlayer::playDelaySamples
	int32_t ___playDelaySamples_2;
	// System.Int32 AudioStreamPlayer::frameSize
	int32_t ___frameSize_3;
	// System.Int32 AudioStreamPlayer::frameSamples
	int32_t ___frameSamples_4;
	// System.Int32 AudioStreamPlayer::streamSamplePos
	int32_t ___streamSamplePos_5;
	// System.Int32 AudioStreamPlayer::<CurrentBufferLag>k__BackingField
	int32_t ___U3CCurrentBufferLagU3Ek__BackingField_6;
	// System.Int32 AudioStreamPlayer::streamSamplePosAvg
	int32_t ___streamSamplePosAvg_7;
	// UnityEngine.AudioSource AudioStreamPlayer::source
	AudioSource_t1135106623 * ___source_8;
	// System.String AudioStreamPlayer::logPrefix
	String_t* ___logPrefix_9;
	// System.Boolean AudioStreamPlayer::debugInfo
	bool ___debugInfo_10;
	// System.Int32 AudioStreamPlayer::sourceTimeSamplesPrev
	int32_t ___sourceTimeSamplesPrev_11;
	// System.Int32 AudioStreamPlayer::playLoopCount
	int32_t ___playLoopCount_12;

public:
	inline static int32_t get_offset_of_maxPlayLagSamples_1() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___maxPlayLagSamples_1)); }
	inline int32_t get_maxPlayLagSamples_1() const { return ___maxPlayLagSamples_1; }
	inline int32_t* get_address_of_maxPlayLagSamples_1() { return &___maxPlayLagSamples_1; }
	inline void set_maxPlayLagSamples_1(int32_t value)
	{
		___maxPlayLagSamples_1 = value;
	}

	inline static int32_t get_offset_of_playDelaySamples_2() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___playDelaySamples_2)); }
	inline int32_t get_playDelaySamples_2() const { return ___playDelaySamples_2; }
	inline int32_t* get_address_of_playDelaySamples_2() { return &___playDelaySamples_2; }
	inline void set_playDelaySamples_2(int32_t value)
	{
		___playDelaySamples_2 = value;
	}

	inline static int32_t get_offset_of_frameSize_3() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___frameSize_3)); }
	inline int32_t get_frameSize_3() const { return ___frameSize_3; }
	inline int32_t* get_address_of_frameSize_3() { return &___frameSize_3; }
	inline void set_frameSize_3(int32_t value)
	{
		___frameSize_3 = value;
	}

	inline static int32_t get_offset_of_frameSamples_4() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___frameSamples_4)); }
	inline int32_t get_frameSamples_4() const { return ___frameSamples_4; }
	inline int32_t* get_address_of_frameSamples_4() { return &___frameSamples_4; }
	inline void set_frameSamples_4(int32_t value)
	{
		___frameSamples_4 = value;
	}

	inline static int32_t get_offset_of_streamSamplePos_5() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___streamSamplePos_5)); }
	inline int32_t get_streamSamplePos_5() const { return ___streamSamplePos_5; }
	inline int32_t* get_address_of_streamSamplePos_5() { return &___streamSamplePos_5; }
	inline void set_streamSamplePos_5(int32_t value)
	{
		___streamSamplePos_5 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentBufferLagU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___U3CCurrentBufferLagU3Ek__BackingField_6)); }
	inline int32_t get_U3CCurrentBufferLagU3Ek__BackingField_6() const { return ___U3CCurrentBufferLagU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CCurrentBufferLagU3Ek__BackingField_6() { return &___U3CCurrentBufferLagU3Ek__BackingField_6; }
	inline void set_U3CCurrentBufferLagU3Ek__BackingField_6(int32_t value)
	{
		___U3CCurrentBufferLagU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_streamSamplePosAvg_7() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___streamSamplePosAvg_7)); }
	inline int32_t get_streamSamplePosAvg_7() const { return ___streamSamplePosAvg_7; }
	inline int32_t* get_address_of_streamSamplePosAvg_7() { return &___streamSamplePosAvg_7; }
	inline void set_streamSamplePosAvg_7(int32_t value)
	{
		___streamSamplePosAvg_7 = value;
	}

	inline static int32_t get_offset_of_source_8() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___source_8)); }
	inline AudioSource_t1135106623 * get_source_8() const { return ___source_8; }
	inline AudioSource_t1135106623 ** get_address_of_source_8() { return &___source_8; }
	inline void set_source_8(AudioSource_t1135106623 * value)
	{
		___source_8 = value;
		Il2CppCodeGenWriteBarrier(&___source_8, value);
	}

	inline static int32_t get_offset_of_logPrefix_9() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___logPrefix_9)); }
	inline String_t* get_logPrefix_9() const { return ___logPrefix_9; }
	inline String_t** get_address_of_logPrefix_9() { return &___logPrefix_9; }
	inline void set_logPrefix_9(String_t* value)
	{
		___logPrefix_9 = value;
		Il2CppCodeGenWriteBarrier(&___logPrefix_9, value);
	}

	inline static int32_t get_offset_of_debugInfo_10() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___debugInfo_10)); }
	inline bool get_debugInfo_10() const { return ___debugInfo_10; }
	inline bool* get_address_of_debugInfo_10() { return &___debugInfo_10; }
	inline void set_debugInfo_10(bool value)
	{
		___debugInfo_10 = value;
	}

	inline static int32_t get_offset_of_sourceTimeSamplesPrev_11() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___sourceTimeSamplesPrev_11)); }
	inline int32_t get_sourceTimeSamplesPrev_11() const { return ___sourceTimeSamplesPrev_11; }
	inline int32_t* get_address_of_sourceTimeSamplesPrev_11() { return &___sourceTimeSamplesPrev_11; }
	inline void set_sourceTimeSamplesPrev_11(int32_t value)
	{
		___sourceTimeSamplesPrev_11 = value;
	}

	inline static int32_t get_offset_of_playLoopCount_12() { return static_cast<int32_t>(offsetof(AudioStreamPlayer_t2390138271, ___playLoopCount_12)); }
	inline int32_t get_playLoopCount_12() const { return ___playLoopCount_12; }
	inline int32_t* get_address_of_playLoopCount_12() { return &___playLoopCount_12; }
	inline void set_playLoopCount_12(int32_t value)
	{
		___playLoopCount_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
