#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AudioStreamPlayer
struct AudioStreamPlayer_t2390138271;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonVoiceSpeaker
struct  PhotonVoiceSpeaker_t555915945  : public MonoBehaviour_t3914164484
{
public:
	// AudioStreamPlayer PhotonVoiceSpeaker::player
	AudioStreamPlayer_t2390138271 * ___player_3;
	// System.Single PhotonVoiceSpeaker::<LastRecvTime>k__BackingField
	float ___U3CLastRecvTimeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(PhotonVoiceSpeaker_t555915945, ___player_3)); }
	inline AudioStreamPlayer_t2390138271 * get_player_3() const { return ___player_3; }
	inline AudioStreamPlayer_t2390138271 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(AudioStreamPlayer_t2390138271 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_U3CLastRecvTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PhotonVoiceSpeaker_t555915945, ___U3CLastRecvTimeU3Ek__BackingField_4)); }
	inline float get_U3CLastRecvTimeU3Ek__BackingField_4() const { return ___U3CLastRecvTimeU3Ek__BackingField_4; }
	inline float* get_address_of_U3CLastRecvTimeU3Ek__BackingField_4() { return &___U3CLastRecvTimeU3Ek__BackingField_4; }
	inline void set_U3CLastRecvTimeU3Ek__BackingField_4(float value)
	{
		___U3CLastRecvTimeU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
