#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Demos.DemoPunVoice.FirstPersonController
struct FirstPersonController_t1998731623;
// ExitGames.Demos.DemoPunVoice.ThirdPersonController
struct ThirdPersonController_t216949860;
// ExitGames.Demos.DemoPunVoice.OrthographicController
struct OrthographicController_t1887578290;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button
struct Button_t2872111280;
// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged
struct OnCameraChanged_t3412203069;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.ChangePOV
struct  ChangePOV_t2182825393  : public MonoBehaviour_t1158329972
{
public:
	// ExitGames.Demos.DemoPunVoice.FirstPersonController ExitGames.Demos.DemoPunVoice.ChangePOV::firstPersonController
	FirstPersonController_t1998731623 * ___firstPersonController_2;
	// ExitGames.Demos.DemoPunVoice.ThirdPersonController ExitGames.Demos.DemoPunVoice.ChangePOV::thirdPersonController
	ThirdPersonController_t216949860 * ___thirdPersonController_3;
	// ExitGames.Demos.DemoPunVoice.OrthographicController ExitGames.Demos.DemoPunVoice.ChangePOV::orthographicController
	OrthographicController_t1887578290 * ___orthographicController_4;
	// UnityEngine.Vector3 ExitGames.Demos.DemoPunVoice.ChangePOV::initialCameraPosition
	Vector3_t2243707580  ___initialCameraPosition_5;
	// UnityEngine.Quaternion ExitGames.Demos.DemoPunVoice.ChangePOV::initialCameraRotation
	Quaternion_t4030073918  ___initialCameraRotation_6;
	// UnityEngine.Camera ExitGames.Demos.DemoPunVoice.ChangePOV::defaultCamera
	Camera_t189460977 * ___defaultCamera_7;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.ChangePOV::ButtonsHolder
	GameObject_t1756533147 * ___ButtonsHolder_8;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.ChangePOV::FirstPersonCamActivator
	Button_t2872111280 * ___FirstPersonCamActivator_9;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.ChangePOV::ThirdPersonCamActivator
	Button_t2872111280 * ___ThirdPersonCamActivator_10;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.ChangePOV::OrthographicCamActivator
	Button_t2872111280 * ___OrthographicCamActivator_11;

public:
	inline static int32_t get_offset_of_firstPersonController_2() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___firstPersonController_2)); }
	inline FirstPersonController_t1998731623 * get_firstPersonController_2() const { return ___firstPersonController_2; }
	inline FirstPersonController_t1998731623 ** get_address_of_firstPersonController_2() { return &___firstPersonController_2; }
	inline void set_firstPersonController_2(FirstPersonController_t1998731623 * value)
	{
		___firstPersonController_2 = value;
		Il2CppCodeGenWriteBarrier(&___firstPersonController_2, value);
	}

	inline static int32_t get_offset_of_thirdPersonController_3() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___thirdPersonController_3)); }
	inline ThirdPersonController_t216949860 * get_thirdPersonController_3() const { return ___thirdPersonController_3; }
	inline ThirdPersonController_t216949860 ** get_address_of_thirdPersonController_3() { return &___thirdPersonController_3; }
	inline void set_thirdPersonController_3(ThirdPersonController_t216949860 * value)
	{
		___thirdPersonController_3 = value;
		Il2CppCodeGenWriteBarrier(&___thirdPersonController_3, value);
	}

	inline static int32_t get_offset_of_orthographicController_4() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___orthographicController_4)); }
	inline OrthographicController_t1887578290 * get_orthographicController_4() const { return ___orthographicController_4; }
	inline OrthographicController_t1887578290 ** get_address_of_orthographicController_4() { return &___orthographicController_4; }
	inline void set_orthographicController_4(OrthographicController_t1887578290 * value)
	{
		___orthographicController_4 = value;
		Il2CppCodeGenWriteBarrier(&___orthographicController_4, value);
	}

	inline static int32_t get_offset_of_initialCameraPosition_5() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___initialCameraPosition_5)); }
	inline Vector3_t2243707580  get_initialCameraPosition_5() const { return ___initialCameraPosition_5; }
	inline Vector3_t2243707580 * get_address_of_initialCameraPosition_5() { return &___initialCameraPosition_5; }
	inline void set_initialCameraPosition_5(Vector3_t2243707580  value)
	{
		___initialCameraPosition_5 = value;
	}

	inline static int32_t get_offset_of_initialCameraRotation_6() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___initialCameraRotation_6)); }
	inline Quaternion_t4030073918  get_initialCameraRotation_6() const { return ___initialCameraRotation_6; }
	inline Quaternion_t4030073918 * get_address_of_initialCameraRotation_6() { return &___initialCameraRotation_6; }
	inline void set_initialCameraRotation_6(Quaternion_t4030073918  value)
	{
		___initialCameraRotation_6 = value;
	}

	inline static int32_t get_offset_of_defaultCamera_7() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___defaultCamera_7)); }
	inline Camera_t189460977 * get_defaultCamera_7() const { return ___defaultCamera_7; }
	inline Camera_t189460977 ** get_address_of_defaultCamera_7() { return &___defaultCamera_7; }
	inline void set_defaultCamera_7(Camera_t189460977 * value)
	{
		___defaultCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___defaultCamera_7, value);
	}

	inline static int32_t get_offset_of_ButtonsHolder_8() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___ButtonsHolder_8)); }
	inline GameObject_t1756533147 * get_ButtonsHolder_8() const { return ___ButtonsHolder_8; }
	inline GameObject_t1756533147 ** get_address_of_ButtonsHolder_8() { return &___ButtonsHolder_8; }
	inline void set_ButtonsHolder_8(GameObject_t1756533147 * value)
	{
		___ButtonsHolder_8 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonsHolder_8, value);
	}

	inline static int32_t get_offset_of_FirstPersonCamActivator_9() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___FirstPersonCamActivator_9)); }
	inline Button_t2872111280 * get_FirstPersonCamActivator_9() const { return ___FirstPersonCamActivator_9; }
	inline Button_t2872111280 ** get_address_of_FirstPersonCamActivator_9() { return &___FirstPersonCamActivator_9; }
	inline void set_FirstPersonCamActivator_9(Button_t2872111280 * value)
	{
		___FirstPersonCamActivator_9 = value;
		Il2CppCodeGenWriteBarrier(&___FirstPersonCamActivator_9, value);
	}

	inline static int32_t get_offset_of_ThirdPersonCamActivator_10() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___ThirdPersonCamActivator_10)); }
	inline Button_t2872111280 * get_ThirdPersonCamActivator_10() const { return ___ThirdPersonCamActivator_10; }
	inline Button_t2872111280 ** get_address_of_ThirdPersonCamActivator_10() { return &___ThirdPersonCamActivator_10; }
	inline void set_ThirdPersonCamActivator_10(Button_t2872111280 * value)
	{
		___ThirdPersonCamActivator_10 = value;
		Il2CppCodeGenWriteBarrier(&___ThirdPersonCamActivator_10, value);
	}

	inline static int32_t get_offset_of_OrthographicCamActivator_11() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393, ___OrthographicCamActivator_11)); }
	inline Button_t2872111280 * get_OrthographicCamActivator_11() const { return ___OrthographicCamActivator_11; }
	inline Button_t2872111280 ** get_address_of_OrthographicCamActivator_11() { return &___OrthographicCamActivator_11; }
	inline void set_OrthographicCamActivator_11(Button_t2872111280 * value)
	{
		___OrthographicCamActivator_11 = value;
		Il2CppCodeGenWriteBarrier(&___OrthographicCamActivator_11, value);
	}
};

struct ChangePOV_t2182825393_StaticFields
{
public:
	// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged ExitGames.Demos.DemoPunVoice.ChangePOV::CameraChanged
	OnCameraChanged_t3412203069 * ___CameraChanged_12;

public:
	inline static int32_t get_offset_of_CameraChanged_12() { return static_cast<int32_t>(offsetof(ChangePOV_t2182825393_StaticFields, ___CameraChanged_12)); }
	inline OnCameraChanged_t3412203069 * get_CameraChanged_12() const { return ___CameraChanged_12; }
	inline OnCameraChanged_t3412203069 ** get_address_of_CameraChanged_12() { return &___CameraChanged_12; }
	inline void set_CameraChanged_12(OnCameraChanged_t3412203069 * value)
	{
		___CameraChanged_12 = value;
		Il2CppCodeGenWriteBarrier(&___CameraChanged_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
