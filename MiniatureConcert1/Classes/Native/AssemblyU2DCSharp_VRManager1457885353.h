#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// VRManager
struct VRManager_t1457885353;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRManager
struct  VRManager_t1457885353  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.GameObject VRManager::head
	GameObject_t1756533147 * ___head_3;
	// UnityEngine.GameObject VRManager::leftHand
	GameObject_t1756533147 * ___leftHand_4;
	// UnityEngine.GameObject VRManager::rightHand
	GameObject_t1756533147 * ___rightHand_5;

public:
	inline static int32_t get_offset_of_head_3() { return static_cast<int32_t>(offsetof(VRManager_t1457885353, ___head_3)); }
	inline GameObject_t1756533147 * get_head_3() const { return ___head_3; }
	inline GameObject_t1756533147 ** get_address_of_head_3() { return &___head_3; }
	inline void set_head_3(GameObject_t1756533147 * value)
	{
		___head_3 = value;
		Il2CppCodeGenWriteBarrier(&___head_3, value);
	}

	inline static int32_t get_offset_of_leftHand_4() { return static_cast<int32_t>(offsetof(VRManager_t1457885353, ___leftHand_4)); }
	inline GameObject_t1756533147 * get_leftHand_4() const { return ___leftHand_4; }
	inline GameObject_t1756533147 ** get_address_of_leftHand_4() { return &___leftHand_4; }
	inline void set_leftHand_4(GameObject_t1756533147 * value)
	{
		___leftHand_4 = value;
		Il2CppCodeGenWriteBarrier(&___leftHand_4, value);
	}

	inline static int32_t get_offset_of_rightHand_5() { return static_cast<int32_t>(offsetof(VRManager_t1457885353, ___rightHand_5)); }
	inline GameObject_t1756533147 * get_rightHand_5() const { return ___rightHand_5; }
	inline GameObject_t1756533147 ** get_address_of_rightHand_5() { return &___rightHand_5; }
	inline void set_rightHand_5(GameObject_t1756533147 * value)
	{
		___rightHand_5 = value;
		Il2CppCodeGenWriteBarrier(&___rightHand_5, value);
	}
};

struct VRManager_t1457885353_StaticFields
{
public:
	// VRManager VRManager::Instance
	VRManager_t1457885353 * ___Instance_6;

public:
	inline static int32_t get_offset_of_Instance_6() { return static_cast<int32_t>(offsetof(VRManager_t1457885353_StaticFields, ___Instance_6)); }
	inline VRManager_t1457885353 * get_Instance_6() const { return ___Instance_6; }
	inline VRManager_t1457885353 ** get_address_of_Instance_6() { return &___Instance_6; }
	inline void set_Instance_6(VRManager_t1457885353 * value)
	{
		___Instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
