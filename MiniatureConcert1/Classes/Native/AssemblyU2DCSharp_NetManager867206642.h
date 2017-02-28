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

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetManager
struct  NetManager_t867206642  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.GameObject NetManager::headPrefab
	GameObject_t1756533147 * ___headPrefab_3;
	// UnityEngine.GameObject NetManager::leftHandPrefab
	GameObject_t1756533147 * ___leftHandPrefab_4;
	// UnityEngine.GameObject NetManager::rightHandPrefab
	GameObject_t1756533147 * ___rightHandPrefab_5;
	// System.Byte NetManager::Version
	uint8_t ___Version_6;

public:
	inline static int32_t get_offset_of_headPrefab_3() { return static_cast<int32_t>(offsetof(NetManager_t867206642, ___headPrefab_3)); }
	inline GameObject_t1756533147 * get_headPrefab_3() const { return ___headPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_headPrefab_3() { return &___headPrefab_3; }
	inline void set_headPrefab_3(GameObject_t1756533147 * value)
	{
		___headPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___headPrefab_3, value);
	}

	inline static int32_t get_offset_of_leftHandPrefab_4() { return static_cast<int32_t>(offsetof(NetManager_t867206642, ___leftHandPrefab_4)); }
	inline GameObject_t1756533147 * get_leftHandPrefab_4() const { return ___leftHandPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_leftHandPrefab_4() { return &___leftHandPrefab_4; }
	inline void set_leftHandPrefab_4(GameObject_t1756533147 * value)
	{
		___leftHandPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___leftHandPrefab_4, value);
	}

	inline static int32_t get_offset_of_rightHandPrefab_5() { return static_cast<int32_t>(offsetof(NetManager_t867206642, ___rightHandPrefab_5)); }
	inline GameObject_t1756533147 * get_rightHandPrefab_5() const { return ___rightHandPrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_rightHandPrefab_5() { return &___rightHandPrefab_5; }
	inline void set_rightHandPrefab_5(GameObject_t1756533147 * value)
	{
		___rightHandPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___rightHandPrefab_5, value);
	}

	inline static int32_t get_offset_of_Version_6() { return static_cast<int32_t>(offsetof(NetManager_t867206642, ___Version_6)); }
	inline uint8_t get_Version_6() const { return ___Version_6; }
	inline uint8_t* get_address_of_Version_6() { return &___Version_6; }
	inline void set_Version_6(uint8_t value)
	{
		___Version_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
