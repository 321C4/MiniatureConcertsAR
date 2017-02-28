#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioClipWrapper
struct  AudioClipWrapper_t2389205601  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip AudioClipWrapper::audioClip
	AudioClip_t1932558630 * ___audioClip_0;
	// System.Int32 AudioClipWrapper::readPos
	int32_t ___readPos_1;
	// System.Single AudioClipWrapper::startTime
	float ___startTime_2;
	// System.Boolean AudioClipWrapper::<Loop>k__BackingField
	bool ___U3CLoopU3Ek__BackingField_3;
	// System.Boolean AudioClipWrapper::playing
	bool ___playing_4;

public:
	inline static int32_t get_offset_of_audioClip_0() { return static_cast<int32_t>(offsetof(AudioClipWrapper_t2389205601, ___audioClip_0)); }
	inline AudioClip_t1932558630 * get_audioClip_0() const { return ___audioClip_0; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_0() { return &___audioClip_0; }
	inline void set_audioClip_0(AudioClip_t1932558630 * value)
	{
		___audioClip_0 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_0, value);
	}

	inline static int32_t get_offset_of_readPos_1() { return static_cast<int32_t>(offsetof(AudioClipWrapper_t2389205601, ___readPos_1)); }
	inline int32_t get_readPos_1() const { return ___readPos_1; }
	inline int32_t* get_address_of_readPos_1() { return &___readPos_1; }
	inline void set_readPos_1(int32_t value)
	{
		___readPos_1 = value;
	}

	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(AudioClipWrapper_t2389205601, ___startTime_2)); }
	inline float get_startTime_2() const { return ___startTime_2; }
	inline float* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(float value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CLoopU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AudioClipWrapper_t2389205601, ___U3CLoopU3Ek__BackingField_3)); }
	inline bool get_U3CLoopU3Ek__BackingField_3() const { return ___U3CLoopU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CLoopU3Ek__BackingField_3() { return &___U3CLoopU3Ek__BackingField_3; }
	inline void set_U3CLoopU3Ek__BackingField_3(bool value)
	{
		___U3CLoopU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_playing_4() { return static_cast<int32_t>(offsetof(AudioClipWrapper_t2389205601, ___playing_4)); }
	inline bool get_playing_4() const { return ___playing_4; }
	inline bool* get_address_of_playing_4() { return &___playing_4; }
	inline void set_playing_4(bool value)
	{
		___playing_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
