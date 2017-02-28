#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ExitGames_Demos_DemoPunVoice_Thir216949860.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.OrthographicController
struct  OrthographicController_t1887578290  : public ThirdPersonController_t216949860
{
public:
	// System.Single ExitGames.Demos.DemoPunVoice.OrthographicController::smoothing
	float ___smoothing_15;
	// UnityEngine.Vector3 ExitGames.Demos.DemoPunVoice.OrthographicController::offset
	Vector3_t2243707580  ___offset_16;

public:
	inline static int32_t get_offset_of_smoothing_15() { return static_cast<int32_t>(offsetof(OrthographicController_t1887578290, ___smoothing_15)); }
	inline float get_smoothing_15() const { return ___smoothing_15; }
	inline float* get_address_of_smoothing_15() { return &___smoothing_15; }
	inline void set_smoothing_15(float value)
	{
		___smoothing_15 = value;
	}

	inline static int32_t get_offset_of_offset_16() { return static_cast<int32_t>(offsetof(OrthographicController_t1887578290, ___offset_16)); }
	inline Vector3_t2243707580  get_offset_16() const { return ___offset_16; }
	inline Vector3_t2243707580 * get_address_of_offset_16() { return &___offset_16; }
	inline void set_offset_16(Vector3_t2243707580  value)
	{
		___offset_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
