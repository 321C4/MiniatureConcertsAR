#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseLookHelper
struct  MouseLookHelper_t2169371148  : public Il2CppObject
{
public:
	// System.Single MouseLookHelper::XSensitivity
	float ___XSensitivity_0;
	// System.Single MouseLookHelper::YSensitivity
	float ___YSensitivity_1;
	// System.Boolean MouseLookHelper::clampVerticalRotation
	bool ___clampVerticalRotation_2;
	// System.Single MouseLookHelper::MinimumX
	float ___MinimumX_3;
	// System.Single MouseLookHelper::MaximumX
	float ___MaximumX_4;
	// System.Boolean MouseLookHelper::smooth
	bool ___smooth_5;
	// System.Single MouseLookHelper::smoothTime
	float ___smoothTime_6;
	// UnityEngine.Quaternion MouseLookHelper::m_CharacterTargetRot
	Quaternion_t4030073918  ___m_CharacterTargetRot_7;
	// UnityEngine.Quaternion MouseLookHelper::m_CameraTargetRot
	Quaternion_t4030073918  ___m_CameraTargetRot_8;

public:
	inline static int32_t get_offset_of_XSensitivity_0() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___XSensitivity_0)); }
	inline float get_XSensitivity_0() const { return ___XSensitivity_0; }
	inline float* get_address_of_XSensitivity_0() { return &___XSensitivity_0; }
	inline void set_XSensitivity_0(float value)
	{
		___XSensitivity_0 = value;
	}

	inline static int32_t get_offset_of_YSensitivity_1() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___YSensitivity_1)); }
	inline float get_YSensitivity_1() const { return ___YSensitivity_1; }
	inline float* get_address_of_YSensitivity_1() { return &___YSensitivity_1; }
	inline void set_YSensitivity_1(float value)
	{
		___YSensitivity_1 = value;
	}

	inline static int32_t get_offset_of_clampVerticalRotation_2() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___clampVerticalRotation_2)); }
	inline bool get_clampVerticalRotation_2() const { return ___clampVerticalRotation_2; }
	inline bool* get_address_of_clampVerticalRotation_2() { return &___clampVerticalRotation_2; }
	inline void set_clampVerticalRotation_2(bool value)
	{
		___clampVerticalRotation_2 = value;
	}

	inline static int32_t get_offset_of_MinimumX_3() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___MinimumX_3)); }
	inline float get_MinimumX_3() const { return ___MinimumX_3; }
	inline float* get_address_of_MinimumX_3() { return &___MinimumX_3; }
	inline void set_MinimumX_3(float value)
	{
		___MinimumX_3 = value;
	}

	inline static int32_t get_offset_of_MaximumX_4() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___MaximumX_4)); }
	inline float get_MaximumX_4() const { return ___MaximumX_4; }
	inline float* get_address_of_MaximumX_4() { return &___MaximumX_4; }
	inline void set_MaximumX_4(float value)
	{
		___MaximumX_4 = value;
	}

	inline static int32_t get_offset_of_smooth_5() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___smooth_5)); }
	inline bool get_smooth_5() const { return ___smooth_5; }
	inline bool* get_address_of_smooth_5() { return &___smooth_5; }
	inline void set_smooth_5(bool value)
	{
		___smooth_5 = value;
	}

	inline static int32_t get_offset_of_smoothTime_6() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___smoothTime_6)); }
	inline float get_smoothTime_6() const { return ___smoothTime_6; }
	inline float* get_address_of_smoothTime_6() { return &___smoothTime_6; }
	inline void set_smoothTime_6(float value)
	{
		___smoothTime_6 = value;
	}

	inline static int32_t get_offset_of_m_CharacterTargetRot_7() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___m_CharacterTargetRot_7)); }
	inline Quaternion_t4030073918  get_m_CharacterTargetRot_7() const { return ___m_CharacterTargetRot_7; }
	inline Quaternion_t4030073918 * get_address_of_m_CharacterTargetRot_7() { return &___m_CharacterTargetRot_7; }
	inline void set_m_CharacterTargetRot_7(Quaternion_t4030073918  value)
	{
		___m_CharacterTargetRot_7 = value;
	}

	inline static int32_t get_offset_of_m_CameraTargetRot_8() { return static_cast<int32_t>(offsetof(MouseLookHelper_t2169371148, ___m_CameraTargetRot_8)); }
	inline Quaternion_t4030073918  get_m_CameraTargetRot_8() const { return ___m_CameraTargetRot_8; }
	inline Quaternion_t4030073918 * get_address_of_m_CameraTargetRot_8() { return &___m_CameraTargetRot_8; }
	inline void set_m_CameraTargetRot_8(Quaternion_t4030073918  value)
	{
		___m_CameraTargetRot_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
