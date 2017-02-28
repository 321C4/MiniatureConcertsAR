#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.BaseController
struct  BaseController_t1073401859  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera ExitGames.Demos.DemoPunVoice.BaseController::ControllerCamera
	Camera_t189460977 * ___ControllerCamera_2;
	// UnityEngine.Rigidbody ExitGames.Demos.DemoPunVoice.BaseController::rigidBody
	Rigidbody_t4233889191 * ___rigidBody_3;
	// UnityEngine.Animator ExitGames.Demos.DemoPunVoice.BaseController::animator
	Animator_t69676727 * ___animator_4;
	// UnityEngine.Transform ExitGames.Demos.DemoPunVoice.BaseController::camTrans
	Transform_t3275118058 * ___camTrans_5;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::h
	float ___h_6;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::v
	float ___v_7;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::speed
	float ___speed_8;
	// UnityEngine.Touch ExitGames.Demos.DemoPunVoice.BaseController::myTouch
	Touch_t407273883  ___myTouch_9;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::x
	float ___x_10;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::y
	float ___y_11;
	// UnityEngine.Vector2 ExitGames.Demos.DemoPunVoice.BaseController::touchOrigin
	Vector2_t2243707579  ___touchOrigin_12;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::cameraDistance
	float ___cameraDistance_13;

public:
	inline static int32_t get_offset_of_ControllerCamera_2() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___ControllerCamera_2)); }
	inline Camera_t189460977 * get_ControllerCamera_2() const { return ___ControllerCamera_2; }
	inline Camera_t189460977 ** get_address_of_ControllerCamera_2() { return &___ControllerCamera_2; }
	inline void set_ControllerCamera_2(Camera_t189460977 * value)
	{
		___ControllerCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___ControllerCamera_2, value);
	}

	inline static int32_t get_offset_of_rigidBody_3() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___rigidBody_3)); }
	inline Rigidbody_t4233889191 * get_rigidBody_3() const { return ___rigidBody_3; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidBody_3() { return &___rigidBody_3; }
	inline void set_rigidBody_3(Rigidbody_t4233889191 * value)
	{
		___rigidBody_3 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_3, value);
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___animator_4)); }
	inline Animator_t69676727 * get_animator_4() const { return ___animator_4; }
	inline Animator_t69676727 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t69676727 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___animator_4, value);
	}

	inline static int32_t get_offset_of_camTrans_5() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___camTrans_5)); }
	inline Transform_t3275118058 * get_camTrans_5() const { return ___camTrans_5; }
	inline Transform_t3275118058 ** get_address_of_camTrans_5() { return &___camTrans_5; }
	inline void set_camTrans_5(Transform_t3275118058 * value)
	{
		___camTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___camTrans_5, value);
	}

	inline static int32_t get_offset_of_h_6() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___h_6)); }
	inline float get_h_6() const { return ___h_6; }
	inline float* get_address_of_h_6() { return &___h_6; }
	inline void set_h_6(float value)
	{
		___h_6 = value;
	}

	inline static int32_t get_offset_of_v_7() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___v_7)); }
	inline float get_v_7() const { return ___v_7; }
	inline float* get_address_of_v_7() { return &___v_7; }
	inline void set_v_7(float value)
	{
		___v_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_myTouch_9() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___myTouch_9)); }
	inline Touch_t407273883  get_myTouch_9() const { return ___myTouch_9; }
	inline Touch_t407273883 * get_address_of_myTouch_9() { return &___myTouch_9; }
	inline void set_myTouch_9(Touch_t407273883  value)
	{
		___myTouch_9 = value;
	}

	inline static int32_t get_offset_of_x_10() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___x_10)); }
	inline float get_x_10() const { return ___x_10; }
	inline float* get_address_of_x_10() { return &___x_10; }
	inline void set_x_10(float value)
	{
		___x_10 = value;
	}

	inline static int32_t get_offset_of_y_11() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___y_11)); }
	inline float get_y_11() const { return ___y_11; }
	inline float* get_address_of_y_11() { return &___y_11; }
	inline void set_y_11(float value)
	{
		___y_11 = value;
	}

	inline static int32_t get_offset_of_touchOrigin_12() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___touchOrigin_12)); }
	inline Vector2_t2243707579  get_touchOrigin_12() const { return ___touchOrigin_12; }
	inline Vector2_t2243707579 * get_address_of_touchOrigin_12() { return &___touchOrigin_12; }
	inline void set_touchOrigin_12(Vector2_t2243707579  value)
	{
		___touchOrigin_12 = value;
	}

	inline static int32_t get_offset_of_cameraDistance_13() { return static_cast<int32_t>(offsetof(BaseController_t1073401859, ___cameraDistance_13)); }
	inline float get_cameraDistance_13() const { return ___cameraDistance_13; }
	inline float* get_address_of_cameraDistance_13() { return &___cameraDistance_13; }
	inline void set_cameraDistance_13(float value)
	{
		___cameraDistance_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
