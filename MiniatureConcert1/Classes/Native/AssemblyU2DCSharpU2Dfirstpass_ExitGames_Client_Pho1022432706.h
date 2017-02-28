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
// POpusCodec.OpusDecoder
struct OpusDecoder_t4240579103;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.RemoteVoice
struct  RemoteVoice_t1022432706  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.Voice.VoiceInfo ExitGames.Client.Photon.Voice.RemoteVoice::<Info>k__BackingField
	VoiceInfo_t82194312 * ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.Voice.RemoteVoice::channelId
	int32_t ___channelId_1;
	// System.Int32 ExitGames.Client.Photon.Voice.RemoteVoice::playerId
	int32_t ___playerId_2;
	// System.Byte ExitGames.Client.Photon.Voice.RemoteVoice::voiceId
	uint8_t ___voiceId_3;
	// System.Object ExitGames.Client.Photon.Voice.RemoteVoice::<LocalUserObject>k__BackingField
	Il2CppObject * ___U3CLocalUserObjectU3Ek__BackingField_4;
	// System.Byte ExitGames.Client.Photon.Voice.RemoteVoice::lastEvNumber
	uint8_t ___lastEvNumber_5;
	// POpusCodec.OpusDecoder ExitGames.Client.Photon.Voice.RemoteVoice::opusDecoder
	OpusDecoder_t4240579103 * ___opusDecoder_6;
	// ExitGames.Client.Photon.Voice.VoiceClient ExitGames.Client.Photon.Voice.RemoteVoice::voiceClient
	VoiceClient_t426870209 * ___voiceClient_7;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoice_t1022432706, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_t82194312 * get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_t82194312 ** get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_t82194312 * value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInfoU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_channelId_1() { return static_cast<int32_t>(offsetof(RemoteVoice_t1022432706, ___channelId_1)); }
	inline int32_t get_channelId_1() const { return ___channelId_1; }
	inline int32_t* get_address_of_channelId_1() { return &___channelId_1; }
	inline void set_channelId_1(int32_t value)
	{
		___channelId_1 = value;
	}

	inline static int32_t get_offset_of_playerId_2() { return static_cast<int32_t>(offsetof(RemoteVoice_t1022432706, ___playerId_2)); }
	inline int32_t get_playerId_2() const { return ___playerId_2; }
	inline int32_t* get_address_of_playerId_2() { return &___playerId_2; }
	inline void set_playerId_2(int32_t value)
	{
		___playerId_2 = value;
	}

	inline static int32_t get_offset_of_voiceId_3() { return static_cast<int32_t>(offsetof(RemoteVoice_t1022432706, ___voiceId_3)); }
	inline uint8_t get_voiceId_3() const { return ___voiceId_3; }
	inline uint8_t* get_address_of_voiceId_3() { return &___voiceId_3; }
	inline void set_voiceId_3(uint8_t value)
	{
		___voiceId_3 = value;
	}

	inline static int32_t get_offset_of_U3CLocalUserObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RemoteVoice_t1022432706, ___U3CLocalUserObjectU3Ek__BackingField_4)); }
	inline Il2CppObject * get_U3CLocalUserObjectU3Ek__BackingField_4() const { return ___U3CLocalUserObjectU3Ek__BackingField_4; }
	inline Il2CppObject ** get_address_of_U3CLocalUserObjectU3Ek__BackingField_4() { return &___U3CLocalUserObjectU3Ek__BackingField_4; }
	inline void set_U3CLocalUserObjectU3Ek__BackingField_4(Il2CppObject * value)
	{
		___U3CLocalUserObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLocalUserObjectU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_lastEvNumber_5() { return static_cast<int32_t>(offsetof(RemoteVoice_t1022432706, ___lastEvNumber_5)); }
	inline uint8_t get_lastEvNumber_5() const { return ___lastEvNumber_5; }
	inline uint8_t* get_address_of_lastEvNumber_5() { return &___lastEvNumber_5; }
	inline void set_lastEvNumber_5(uint8_t value)
	{
		___lastEvNumber_5 = value;
	}

	inline static int32_t get_offset_of_opusDecoder_6() { return static_cast<int32_t>(offsetof(RemoteVoice_t1022432706, ___opusDecoder_6)); }
	inline OpusDecoder_t4240579103 * get_opusDecoder_6() const { return ___opusDecoder_6; }
	inline OpusDecoder_t4240579103 ** get_address_of_opusDecoder_6() { return &___opusDecoder_6; }
	inline void set_opusDecoder_6(OpusDecoder_t4240579103 * value)
	{
		___opusDecoder_6 = value;
		Il2CppCodeGenWriteBarrier(&___opusDecoder_6, value);
	}

	inline static int32_t get_offset_of_voiceClient_7() { return static_cast<int32_t>(offsetof(RemoteVoice_t1022432706, ___voiceClient_7)); }
	inline VoiceClient_t426870209 * get_voiceClient_7() const { return ___voiceClient_7; }
	inline VoiceClient_t426870209 ** get_address_of_voiceClient_7() { return &___voiceClient_7; }
	inline void set_voiceClient_7(VoiceClient_t426870209 * value)
	{
		___voiceClient_7 = value;
		Il2CppCodeGenWriteBarrier(&___voiceClient_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
