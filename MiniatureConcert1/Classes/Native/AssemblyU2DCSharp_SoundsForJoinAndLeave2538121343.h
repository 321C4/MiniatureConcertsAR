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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_Photon_PunBehaviour692890556.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundsForJoinAndLeave
struct  SoundsForJoinAndLeave_t2538121343  : public PunBehaviour_t692890556
{
public:
	// UnityEngine.AudioClip SoundsForJoinAndLeave::JoinClip
	AudioClip_t1932558630 * ___JoinClip_3;
	// UnityEngine.AudioClip SoundsForJoinAndLeave::LeaveClip
	AudioClip_t1932558630 * ___LeaveClip_4;
	// UnityEngine.AudioSource SoundsForJoinAndLeave::source
	AudioSource_t1135106623 * ___source_5;

public:
	inline static int32_t get_offset_of_JoinClip_3() { return static_cast<int32_t>(offsetof(SoundsForJoinAndLeave_t2538121343, ___JoinClip_3)); }
	inline AudioClip_t1932558630 * get_JoinClip_3() const { return ___JoinClip_3; }
	inline AudioClip_t1932558630 ** get_address_of_JoinClip_3() { return &___JoinClip_3; }
	inline void set_JoinClip_3(AudioClip_t1932558630 * value)
	{
		___JoinClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___JoinClip_3, value);
	}

	inline static int32_t get_offset_of_LeaveClip_4() { return static_cast<int32_t>(offsetof(SoundsForJoinAndLeave_t2538121343, ___LeaveClip_4)); }
	inline AudioClip_t1932558630 * get_LeaveClip_4() const { return ___LeaveClip_4; }
	inline AudioClip_t1932558630 ** get_address_of_LeaveClip_4() { return &___LeaveClip_4; }
	inline void set_LeaveClip_4(AudioClip_t1932558630 * value)
	{
		___LeaveClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___LeaveClip_4, value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(SoundsForJoinAndLeave_t2538121343, ___source_5)); }
	inline AudioSource_t1135106623 * get_source_5() const { return ___source_5; }
	inline AudioSource_t1135106623 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(AudioSource_t1135106623 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier(&___source_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
