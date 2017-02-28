#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.RemoteVoiceInfo
struct  RemoteVoiceInfo_t106536674  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.Voice.VoiceInfo ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<Info>k__BackingField
	VoiceInfo_t82194312 * ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_2;
	// System.Byte ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<VoiceId>k__BackingField
	uint8_t ___U3CVoiceIdU3Ek__BackingField_3;
	// System.Object ExitGames.Client.Photon.Voice.RemoteVoiceInfo::<LocalUserObject>k__BackingField
	Il2CppObject * ___U3CLocalUserObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t106536674, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_t82194312 * get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_t82194312 ** get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_t82194312 * value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInfoU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t106536674, ___U3CChannelIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_1() const { return ___U3CChannelIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_1() { return &___U3CChannelIdU3Ek__BackingField_1; }
	inline void set_U3CChannelIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t106536674, ___U3CPlayerIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_2() const { return ___U3CPlayerIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_2() { return &___U3CPlayerIdU3Ek__BackingField_2; }
	inline void set_U3CPlayerIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t106536674, ___U3CVoiceIdU3Ek__BackingField_3)); }
	inline uint8_t get_U3CVoiceIdU3Ek__BackingField_3() const { return ___U3CVoiceIdU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CVoiceIdU3Ek__BackingField_3() { return &___U3CVoiceIdU3Ek__BackingField_3; }
	inline void set_U3CVoiceIdU3Ek__BackingField_3(uint8_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CLocalUserObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t106536674, ___U3CLocalUserObjectU3Ek__BackingField_4)); }
	inline Il2CppObject * get_U3CLocalUserObjectU3Ek__BackingField_4() const { return ___U3CLocalUserObjectU3Ek__BackingField_4; }
	inline Il2CppObject ** get_address_of_U3CLocalUserObjectU3Ek__BackingField_4() { return &___U3CLocalUserObjectU3Ek__BackingField_4; }
	inline void set_U3CLocalUserObjectU3Ek__BackingField_4(Il2CppObject * value)
	{
		___U3CLocalUserObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLocalUserObjectU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
