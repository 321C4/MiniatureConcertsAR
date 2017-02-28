#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MouseLookHelper
struct MouseLookHelper_t2169371148;

#include "AssemblyU2DCSharp_ExitGames_Demos_DemoPunVoice_Bas1073401859.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.FirstPersonController
struct  FirstPersonController_t1998731623  : public BaseController_t1073401859
{
public:
	// MouseLookHelper ExitGames.Demos.DemoPunVoice.FirstPersonController::mouseLook
	MouseLookHelper_t2169371148 * ___mouseLook_14;
	// System.Single ExitGames.Demos.DemoPunVoice.FirstPersonController::oldYRotation
	float ___oldYRotation_15;
	// UnityEngine.Quaternion ExitGames.Demos.DemoPunVoice.FirstPersonController::velRotation
	Quaternion_t4030073918  ___velRotation_16;

public:
	inline static int32_t get_offset_of_mouseLook_14() { return static_cast<int32_t>(offsetof(FirstPersonController_t1998731623, ___mouseLook_14)); }
	inline MouseLookHelper_t2169371148 * get_mouseLook_14() const { return ___mouseLook_14; }
	inline MouseLookHelper_t2169371148 ** get_address_of_mouseLook_14() { return &___mouseLook_14; }
	inline void set_mouseLook_14(MouseLookHelper_t2169371148 * value)
	{
		___mouseLook_14 = value;
		Il2CppCodeGenWriteBarrier(&___mouseLook_14, value);
	}

	inline static int32_t get_offset_of_oldYRotation_15() { return static_cast<int32_t>(offsetof(FirstPersonController_t1998731623, ___oldYRotation_15)); }
	inline float get_oldYRotation_15() const { return ___oldYRotation_15; }
	inline float* get_address_of_oldYRotation_15() { return &___oldYRotation_15; }
	inline void set_oldYRotation_15(float value)
	{
		___oldYRotation_15 = value;
	}

	inline static int32_t get_offset_of_velRotation_16() { return static_cast<int32_t>(offsetof(FirstPersonController_t1998731623, ___velRotation_16)); }
	inline Quaternion_t4030073918  get_velRotation_16() const { return ___velRotation_16; }
	inline Quaternion_t4030073918 * get_address_of_velRotation_16() { return &___velRotation_16; }
	inline void set_velRotation_16(Quaternion_t4030073918  value)
	{
		___velRotation_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
