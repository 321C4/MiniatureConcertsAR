#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Voice.LocalVoice
struct LocalVoice_t3474856357;
// ExitGames.Client.Photon.Voice.VoiceInfo
struct VoiceInfo_t82194312;
// POpusCodec.OpusEncoder
struct OpusEncoder_t1386821339;
// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t1446637455;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LocalVoice
struct  LocalVoice_t3474856357  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.Voice.LocalVoice::<AudioGroup>k__BackingField
	uint8_t ___U3CAudioGroupU3Ek__BackingField_1;
	// System.Boolean ExitGames.Client.Photon.Voice.LocalVoice::<Transmit>k__BackingField
	bool ___U3CTransmitU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::<FramesSent>k__BackingField
	int32_t ___U3CFramesSentU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::<FramesSentBytes>k__BackingField
	int32_t ___U3CFramesSentBytesU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::voiceDetectorCalibrateCount
	int32_t ___voiceDetectorCalibrateCount_5;
	// ExitGames.Client.Photon.Voice.VoiceInfo ExitGames.Client.Photon.Voice.LocalVoice::info
	VoiceInfo_t82194312 * ___info_6;
	// POpusCodec.OpusEncoder ExitGames.Client.Photon.Voice.LocalVoice::opusEncoder
	OpusEncoder_t1386821339 * ___opusEncoder_7;
	// System.Byte ExitGames.Client.Photon.Voice.LocalVoice::id
	uint8_t ___id_8;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::channelId
	int32_t ___channelId_9;
	// System.Byte ExitGames.Client.Photon.Voice.LocalVoice::evNumber
	uint8_t ___evNumber_10;
	// ExitGames.Client.Photon.Voice.VoiceClient ExitGames.Client.Photon.Voice.LocalVoice::voiceClient
	VoiceClient_t426870209 * ___voiceClient_11;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::sourceSamplingRateHz
	int32_t ___sourceSamplingRateHz_12;
	// System.Int32 ExitGames.Client.Photon.Voice.LocalVoice::sourceFrameSize
	int32_t ___sourceFrameSize_13;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> ExitGames.Client.Photon.Voice.LocalVoice::eventTimestamps
	Dictionary_2_t1446637455 * ___eventTimestamps_14;

public:
	inline static int32_t get_offset_of_U3CAudioGroupU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___U3CAudioGroupU3Ek__BackingField_1)); }
	inline uint8_t get_U3CAudioGroupU3Ek__BackingField_1() const { return ___U3CAudioGroupU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CAudioGroupU3Ek__BackingField_1() { return &___U3CAudioGroupU3Ek__BackingField_1; }
	inline void set_U3CAudioGroupU3Ek__BackingField_1(uint8_t value)
	{
		___U3CAudioGroupU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTransmitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___U3CTransmitU3Ek__BackingField_2)); }
	inline bool get_U3CTransmitU3Ek__BackingField_2() const { return ___U3CTransmitU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CTransmitU3Ek__BackingField_2() { return &___U3CTransmitU3Ek__BackingField_2; }
	inline void set_U3CTransmitU3Ek__BackingField_2(bool value)
	{
		___U3CTransmitU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___U3CFramesSentU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesSentU3Ek__BackingField_3() const { return ___U3CFramesSentU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesSentU3Ek__BackingField_3() { return &___U3CFramesSentU3Ek__BackingField_3; }
	inline void set_U3CFramesSentU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesSentU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___U3CFramesSentBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CFramesSentBytesU3Ek__BackingField_4() const { return ___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFramesSentBytesU3Ek__BackingField_4() { return &___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline void set_U3CFramesSentBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CFramesSentBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_voiceDetectorCalibrateCount_5() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___voiceDetectorCalibrateCount_5)); }
	inline int32_t get_voiceDetectorCalibrateCount_5() const { return ___voiceDetectorCalibrateCount_5; }
	inline int32_t* get_address_of_voiceDetectorCalibrateCount_5() { return &___voiceDetectorCalibrateCount_5; }
	inline void set_voiceDetectorCalibrateCount_5(int32_t value)
	{
		___voiceDetectorCalibrateCount_5 = value;
	}

	inline static int32_t get_offset_of_info_6() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___info_6)); }
	inline VoiceInfo_t82194312 * get_info_6() const { return ___info_6; }
	inline VoiceInfo_t82194312 ** get_address_of_info_6() { return &___info_6; }
	inline void set_info_6(VoiceInfo_t82194312 * value)
	{
		___info_6 = value;
		Il2CppCodeGenWriteBarrier(&___info_6, value);
	}

	inline static int32_t get_offset_of_opusEncoder_7() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___opusEncoder_7)); }
	inline OpusEncoder_t1386821339 * get_opusEncoder_7() const { return ___opusEncoder_7; }
	inline OpusEncoder_t1386821339 ** get_address_of_opusEncoder_7() { return &___opusEncoder_7; }
	inline void set_opusEncoder_7(OpusEncoder_t1386821339 * value)
	{
		___opusEncoder_7 = value;
		Il2CppCodeGenWriteBarrier(&___opusEncoder_7, value);
	}

	inline static int32_t get_offset_of_id_8() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___id_8)); }
	inline uint8_t get_id_8() const { return ___id_8; }
	inline uint8_t* get_address_of_id_8() { return &___id_8; }
	inline void set_id_8(uint8_t value)
	{
		___id_8 = value;
	}

	inline static int32_t get_offset_of_channelId_9() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___channelId_9)); }
	inline int32_t get_channelId_9() const { return ___channelId_9; }
	inline int32_t* get_address_of_channelId_9() { return &___channelId_9; }
	inline void set_channelId_9(int32_t value)
	{
		___channelId_9 = value;
	}

	inline static int32_t get_offset_of_evNumber_10() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___evNumber_10)); }
	inline uint8_t get_evNumber_10() const { return ___evNumber_10; }
	inline uint8_t* get_address_of_evNumber_10() { return &___evNumber_10; }
	inline void set_evNumber_10(uint8_t value)
	{
		___evNumber_10 = value;
	}

	inline static int32_t get_offset_of_voiceClient_11() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___voiceClient_11)); }
	inline VoiceClient_t426870209 * get_voiceClient_11() const { return ___voiceClient_11; }
	inline VoiceClient_t426870209 ** get_address_of_voiceClient_11() { return &___voiceClient_11; }
	inline void set_voiceClient_11(VoiceClient_t426870209 * value)
	{
		___voiceClient_11 = value;
		Il2CppCodeGenWriteBarrier(&___voiceClient_11, value);
	}

	inline static int32_t get_offset_of_sourceSamplingRateHz_12() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___sourceSamplingRateHz_12)); }
	inline int32_t get_sourceSamplingRateHz_12() const { return ___sourceSamplingRateHz_12; }
	inline int32_t* get_address_of_sourceSamplingRateHz_12() { return &___sourceSamplingRateHz_12; }
	inline void set_sourceSamplingRateHz_12(int32_t value)
	{
		___sourceSamplingRateHz_12 = value;
	}

	inline static int32_t get_offset_of_sourceFrameSize_13() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___sourceFrameSize_13)); }
	inline int32_t get_sourceFrameSize_13() const { return ___sourceFrameSize_13; }
	inline int32_t* get_address_of_sourceFrameSize_13() { return &___sourceFrameSize_13; }
	inline void set_sourceFrameSize_13(int32_t value)
	{
		___sourceFrameSize_13 = value;
	}

	inline static int32_t get_offset_of_eventTimestamps_14() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357, ___eventTimestamps_14)); }
	inline Dictionary_2_t1446637455 * get_eventTimestamps_14() const { return ___eventTimestamps_14; }
	inline Dictionary_2_t1446637455 ** get_address_of_eventTimestamps_14() { return &___eventTimestamps_14; }
	inline void set_eventTimestamps_14(Dictionary_2_t1446637455 * value)
	{
		___eventTimestamps_14 = value;
		Il2CppCodeGenWriteBarrier(&___eventTimestamps_14, value);
	}
};

struct LocalVoice_t3474856357_StaticFields
{
public:
	// ExitGames.Client.Photon.Voice.LocalVoice ExitGames.Client.Photon.Voice.LocalVoice::Dummy
	LocalVoice_t3474856357 * ___Dummy_0;

public:
	inline static int32_t get_offset_of_Dummy_0() { return static_cast<int32_t>(offsetof(LocalVoice_t3474856357_StaticFields, ___Dummy_0)); }
	inline LocalVoice_t3474856357 * get_Dummy_0() const { return ___Dummy_0; }
	inline LocalVoice_t3474856357 ** get_address_of_Dummy_0() { return &___Dummy_0; }
	inline void set_Dummy_0(LocalVoice_t3474856357 * value)
	{
		___Dummy_0 = value;
		Il2CppCodeGenWriteBarrier(&___Dummy_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
