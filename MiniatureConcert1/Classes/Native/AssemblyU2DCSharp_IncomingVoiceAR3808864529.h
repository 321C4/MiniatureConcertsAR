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

#include "AssemblyU2DCSharp_Photon_PunBehaviour692890556.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IncomingVoiceAR
struct  IncomingVoiceAR_t3808864529  : public PunBehaviour_t692890556
{
public:
	// UnityEngine.AudioSource IncomingVoiceAR::source
	AudioSource_t1135106623 * ___source_3;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(IncomingVoiceAR_t3808864529, ___source_3)); }
	inline AudioSource_t1135106623 * get_source_3() const { return ___source_3; }
	inline AudioSource_t1135106623 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(AudioSource_t1135106623 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
