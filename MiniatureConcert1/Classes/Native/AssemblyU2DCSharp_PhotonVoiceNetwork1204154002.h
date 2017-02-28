#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonVoiceNetwork
struct PhotonVoiceNetwork_t1204154002;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;
// UnityVoiceFrontend
struct UnityVoiceFrontend_t4221749441;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonVoiceNetwork
struct  PhotonVoiceNetwork_t1204154002  : public MonoBehaviour_t1158329972
{
public:
	// UnityVoiceFrontend PhotonVoiceNetwork::client
	UnityVoiceFrontend_t4221749441 * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t1204154002, ___client_6)); }
	inline UnityVoiceFrontend_t4221749441 * get_client_6() const { return ___client_6; }
	inline UnityVoiceFrontend_t4221749441 ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(UnityVoiceFrontend_t4221749441 * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier(&___client_6, value);
	}
};

struct PhotonVoiceNetwork_t1204154002_StaticFields
{
public:
	// PhotonVoiceNetwork PhotonVoiceNetwork::_instance
	PhotonVoiceNetwork_t1204154002 * ____instance_2;
	// UnityEngine.GameObject PhotonVoiceNetwork::_singleton
	GameObject_t1756533147 * ____singleton_3;
	// System.Object PhotonVoiceNetwork::instanceLock
	Il2CppObject * ___instanceLock_4;
	// System.Boolean PhotonVoiceNetwork::destroyed
	bool ___destroyed_5;
	// System.String PhotonVoiceNetwork::microphoneDevice
	String_t* ___microphoneDevice_7;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t1204154002_StaticFields, ____instance_2)); }
	inline PhotonVoiceNetwork_t1204154002 * get__instance_2() const { return ____instance_2; }
	inline PhotonVoiceNetwork_t1204154002 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(PhotonVoiceNetwork_t1204154002 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of__singleton_3() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t1204154002_StaticFields, ____singleton_3)); }
	inline GameObject_t1756533147 * get__singleton_3() const { return ____singleton_3; }
	inline GameObject_t1756533147 ** get_address_of__singleton_3() { return &____singleton_3; }
	inline void set__singleton_3(GameObject_t1756533147 * value)
	{
		____singleton_3 = value;
		Il2CppCodeGenWriteBarrier(&____singleton_3, value);
	}

	inline static int32_t get_offset_of_instanceLock_4() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t1204154002_StaticFields, ___instanceLock_4)); }
	inline Il2CppObject * get_instanceLock_4() const { return ___instanceLock_4; }
	inline Il2CppObject ** get_address_of_instanceLock_4() { return &___instanceLock_4; }
	inline void set_instanceLock_4(Il2CppObject * value)
	{
		___instanceLock_4 = value;
		Il2CppCodeGenWriteBarrier(&___instanceLock_4, value);
	}

	inline static int32_t get_offset_of_destroyed_5() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t1204154002_StaticFields, ___destroyed_5)); }
	inline bool get_destroyed_5() const { return ___destroyed_5; }
	inline bool* get_address_of_destroyed_5() { return &___destroyed_5; }
	inline void set_destroyed_5(bool value)
	{
		___destroyed_5 = value;
	}

	inline static int32_t get_offset_of_microphoneDevice_7() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t1204154002_StaticFields, ___microphoneDevice_7)); }
	inline String_t* get_microphoneDevice_7() const { return ___microphoneDevice_7; }
	inline String_t** get_address_of_microphoneDevice_7() { return &___microphoneDevice_7; }
	inline void set_microphoneDevice_7(String_t* value)
	{
		___microphoneDevice_7 = value;
		Il2CppCodeGenWriteBarrier(&___microphoneDevice_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
