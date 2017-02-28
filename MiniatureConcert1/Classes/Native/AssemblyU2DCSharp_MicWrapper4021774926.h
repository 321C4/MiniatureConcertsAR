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
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MicWrapper
struct  MicWrapper_t4021774926  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip MicWrapper::mic
	AudioClip_t1932558630 * ___mic_0;
	// System.String MicWrapper::device
	String_t* ___device_1;
	// System.Int32 MicWrapper::micPrevPos
	int32_t ___micPrevPos_2;
	// System.Int32 MicWrapper::micLoopCnt
	int32_t ___micLoopCnt_3;
	// System.Int32 MicWrapper::readAbsPos
	int32_t ___readAbsPos_4;

public:
	inline static int32_t get_offset_of_mic_0() { return static_cast<int32_t>(offsetof(MicWrapper_t4021774926, ___mic_0)); }
	inline AudioClip_t1932558630 * get_mic_0() const { return ___mic_0; }
	inline AudioClip_t1932558630 ** get_address_of_mic_0() { return &___mic_0; }
	inline void set_mic_0(AudioClip_t1932558630 * value)
	{
		___mic_0 = value;
		Il2CppCodeGenWriteBarrier(&___mic_0, value);
	}

	inline static int32_t get_offset_of_device_1() { return static_cast<int32_t>(offsetof(MicWrapper_t4021774926, ___device_1)); }
	inline String_t* get_device_1() const { return ___device_1; }
	inline String_t** get_address_of_device_1() { return &___device_1; }
	inline void set_device_1(String_t* value)
	{
		___device_1 = value;
		Il2CppCodeGenWriteBarrier(&___device_1, value);
	}

	inline static int32_t get_offset_of_micPrevPos_2() { return static_cast<int32_t>(offsetof(MicWrapper_t4021774926, ___micPrevPos_2)); }
	inline int32_t get_micPrevPos_2() const { return ___micPrevPos_2; }
	inline int32_t* get_address_of_micPrevPos_2() { return &___micPrevPos_2; }
	inline void set_micPrevPos_2(int32_t value)
	{
		___micPrevPos_2 = value;
	}

	inline static int32_t get_offset_of_micLoopCnt_3() { return static_cast<int32_t>(offsetof(MicWrapper_t4021774926, ___micLoopCnt_3)); }
	inline int32_t get_micLoopCnt_3() const { return ___micLoopCnt_3; }
	inline int32_t* get_address_of_micLoopCnt_3() { return &___micLoopCnt_3; }
	inline void set_micLoopCnt_3(int32_t value)
	{
		___micLoopCnt_3 = value;
	}

	inline static int32_t get_offset_of_readAbsPos_4() { return static_cast<int32_t>(offsetof(MicWrapper_t4021774926, ___readAbsPos_4)); }
	inline int32_t get_readAbsPos_4() const { return ___readAbsPos_4; }
	inline int32_t* get_address_of_readAbsPos_4() { return &___readAbsPos_4; }
	inline void set_readAbsPos_4(int32_t value)
	{
		___readAbsPos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
