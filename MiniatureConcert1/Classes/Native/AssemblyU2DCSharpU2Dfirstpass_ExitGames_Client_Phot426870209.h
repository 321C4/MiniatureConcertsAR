#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Voice.IVoiceFrontend
struct IVoiceFrontend_t866841943;
// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_t1755651461;
// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate
struct RemoteVoiceRemoveDelegate_t1505106365;
// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate
struct AudioFrameFloatDelegate_t771091044;
// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate
struct AudioFrameShortDelegate_t729549624;
// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.Voice.LocalVoice>
struct Dictionary_2_t2849616364;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ExitGames.Client.Photon.Voice.LocalVoice>>
struct Dictionary_2_t1851803124;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.Voice.RemoteVoice>>>
struct Dictionary_2_t2707811279;
// System.Random
struct Random_t1044426839;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.VoiceClient
struct  VoiceClient_t426870209  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.Voice.IVoiceFrontend ExitGames.Client.Photon.Voice.VoiceClient::frontend
	Il2CppObject * ___frontend_0;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<FramesLost>k__BackingField
	int32_t ___U3CFramesLostU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<FramesReceived>k__BackingField
	int32_t ___U3CFramesReceivedU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<RoundTripTime>k__BackingField
	int32_t ___U3CRoundTripTimeU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<RoundTripTimeVariance>k__BackingField
	int32_t ___U3CRoundTripTimeVarianceU3Ek__BackingField_4;
	// System.Boolean ExitGames.Client.Photon.Voice.VoiceClient::<SuppressInfoDuplicateWarning>k__BackingField
	bool ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5;
	// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate ExitGames.Client.Photon.Voice.VoiceClient::<OnRemoteVoiceInfoAction>k__BackingField
	RemoteVoiceInfoDelegate_t1755651461 * ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Voice.VoiceClient/RemoteVoiceRemoveDelegate ExitGames.Client.Photon.Voice.VoiceClient::<OnRemoteVoiceRemoveAction>k__BackingField
	RemoteVoiceRemoveDelegate_t1505106365 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7;
	// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameFloatDelegate ExitGames.Client.Photon.Voice.VoiceClient::<OnAudioFrameFloatAction>k__BackingField
	AudioFrameFloatDelegate_t771091044 * ___U3COnAudioFrameFloatActionU3Ek__BackingField_8;
	// ExitGames.Client.Photon.Voice.VoiceClient/AudioFrameShortDelegate ExitGames.Client.Photon.Voice.VoiceClient::<OnAudioFrameShortAction>k__BackingField
	AudioFrameShortDelegate_t729549624 * ___U3COnAudioFrameShortActionU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::<DebugLostPercent>k__BackingField
	int32_t ___U3CDebugLostPercentU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.Voice.VoiceClient::prevRtt
	int32_t ___prevRtt_11;
	// System.Byte ExitGames.Client.Photon.Voice.VoiceClient::globalAudioGroup
	uint8_t ___globalAudioGroup_12;
	// System.Byte ExitGames.Client.Photon.Voice.VoiceClient::voiceIdCnt
	uint8_t ___voiceIdCnt_13;
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.Voice.LocalVoice> ExitGames.Client.Photon.Voice.VoiceClient::localVoices
	Dictionary_2_t2849616364 * ___localVoices_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ExitGames.Client.Photon.Voice.LocalVoice>> ExitGames.Client.Photon.Voice.VoiceClient::localVoicesPerChannel
	Dictionary_2_t1851803124 * ___localVoicesPerChannel_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.Voice.RemoteVoice>>> ExitGames.Client.Photon.Voice.VoiceClient::remoteVoices
	Dictionary_2_t2707811279 * ___remoteVoices_16;
	// System.Random ExitGames.Client.Photon.Voice.VoiceClient::rnd
	Random_t1044426839 * ___rnd_17;

public:
	inline static int32_t get_offset_of_frontend_0() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___frontend_0)); }
	inline Il2CppObject * get_frontend_0() const { return ___frontend_0; }
	inline Il2CppObject ** get_address_of_frontend_0() { return &___frontend_0; }
	inline void set_frontend_0(Il2CppObject * value)
	{
		___frontend_0 = value;
		Il2CppCodeGenWriteBarrier(&___frontend_0, value);
	}

	inline static int32_t get_offset_of_U3CFramesLostU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3CFramesLostU3Ek__BackingField_1)); }
	inline int32_t get_U3CFramesLostU3Ek__BackingField_1() const { return ___U3CFramesLostU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFramesLostU3Ek__BackingField_1() { return &___U3CFramesLostU3Ek__BackingField_1; }
	inline void set_U3CFramesLostU3Ek__BackingField_1(int32_t value)
	{
		___U3CFramesLostU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3CFramesReceivedU3Ek__BackingField_2)); }
	inline int32_t get_U3CFramesReceivedU3Ek__BackingField_2() const { return ___U3CFramesReceivedU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFramesReceivedU3Ek__BackingField_2() { return &___U3CFramesReceivedU3Ek__BackingField_2; }
	inline void set_U3CFramesReceivedU3Ek__BackingField_2(int32_t value)
	{
		___U3CFramesReceivedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3CRoundTripTimeU3Ek__BackingField_3)); }
	inline int32_t get_U3CRoundTripTimeU3Ek__BackingField_3() const { return ___U3CRoundTripTimeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CRoundTripTimeU3Ek__BackingField_3() { return &___U3CRoundTripTimeU3Ek__BackingField_3; }
	inline void set_U3CRoundTripTimeU3Ek__BackingField_3(int32_t value)
	{
		___U3CRoundTripTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeVarianceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3CRoundTripTimeVarianceU3Ek__BackingField_4)); }
	inline int32_t get_U3CRoundTripTimeVarianceU3Ek__BackingField_4() const { return ___U3CRoundTripTimeVarianceU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRoundTripTimeVarianceU3Ek__BackingField_4() { return &___U3CRoundTripTimeVarianceU3Ek__BackingField_4; }
	inline void set_U3CRoundTripTimeVarianceU3Ek__BackingField_4(int32_t value)
	{
		___U3CRoundTripTimeVarianceU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5)); }
	inline bool get_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5() const { return ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5() { return &___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5; }
	inline void set_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5(bool value)
	{
		___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6)); }
	inline RemoteVoiceInfoDelegate_t1755651461 * get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_6() const { return ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6; }
	inline RemoteVoiceInfoDelegate_t1755651461 ** get_address_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_6() { return &___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6; }
	inline void set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_6(RemoteVoiceInfoDelegate_t1755651461 * value)
	{
		___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7)); }
	inline RemoteVoiceRemoveDelegate_t1505106365 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7; }
	inline RemoteVoiceRemoveDelegate_t1505106365 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7(RemoteVoiceRemoveDelegate_t1505106365 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3COnAudioFrameFloatActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3COnAudioFrameFloatActionU3Ek__BackingField_8)); }
	inline AudioFrameFloatDelegate_t771091044 * get_U3COnAudioFrameFloatActionU3Ek__BackingField_8() const { return ___U3COnAudioFrameFloatActionU3Ek__BackingField_8; }
	inline AudioFrameFloatDelegate_t771091044 ** get_address_of_U3COnAudioFrameFloatActionU3Ek__BackingField_8() { return &___U3COnAudioFrameFloatActionU3Ek__BackingField_8; }
	inline void set_U3COnAudioFrameFloatActionU3Ek__BackingField_8(AudioFrameFloatDelegate_t771091044 * value)
	{
		___U3COnAudioFrameFloatActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnAudioFrameFloatActionU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3COnAudioFrameShortActionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3COnAudioFrameShortActionU3Ek__BackingField_9)); }
	inline AudioFrameShortDelegate_t729549624 * get_U3COnAudioFrameShortActionU3Ek__BackingField_9() const { return ___U3COnAudioFrameShortActionU3Ek__BackingField_9; }
	inline AudioFrameShortDelegate_t729549624 ** get_address_of_U3COnAudioFrameShortActionU3Ek__BackingField_9() { return &___U3COnAudioFrameShortActionU3Ek__BackingField_9; }
	inline void set_U3COnAudioFrameShortActionU3Ek__BackingField_9(AudioFrameShortDelegate_t729549624 * value)
	{
		___U3COnAudioFrameShortActionU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnAudioFrameShortActionU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CDebugLostPercentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___U3CDebugLostPercentU3Ek__BackingField_10)); }
	inline int32_t get_U3CDebugLostPercentU3Ek__BackingField_10() const { return ___U3CDebugLostPercentU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CDebugLostPercentU3Ek__BackingField_10() { return &___U3CDebugLostPercentU3Ek__BackingField_10; }
	inline void set_U3CDebugLostPercentU3Ek__BackingField_10(int32_t value)
	{
		___U3CDebugLostPercentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_prevRtt_11() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___prevRtt_11)); }
	inline int32_t get_prevRtt_11() const { return ___prevRtt_11; }
	inline int32_t* get_address_of_prevRtt_11() { return &___prevRtt_11; }
	inline void set_prevRtt_11(int32_t value)
	{
		___prevRtt_11 = value;
	}

	inline static int32_t get_offset_of_globalAudioGroup_12() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___globalAudioGroup_12)); }
	inline uint8_t get_globalAudioGroup_12() const { return ___globalAudioGroup_12; }
	inline uint8_t* get_address_of_globalAudioGroup_12() { return &___globalAudioGroup_12; }
	inline void set_globalAudioGroup_12(uint8_t value)
	{
		___globalAudioGroup_12 = value;
	}

	inline static int32_t get_offset_of_voiceIdCnt_13() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___voiceIdCnt_13)); }
	inline uint8_t get_voiceIdCnt_13() const { return ___voiceIdCnt_13; }
	inline uint8_t* get_address_of_voiceIdCnt_13() { return &___voiceIdCnt_13; }
	inline void set_voiceIdCnt_13(uint8_t value)
	{
		___voiceIdCnt_13 = value;
	}

	inline static int32_t get_offset_of_localVoices_14() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___localVoices_14)); }
	inline Dictionary_2_t2849616364 * get_localVoices_14() const { return ___localVoices_14; }
	inline Dictionary_2_t2849616364 ** get_address_of_localVoices_14() { return &___localVoices_14; }
	inline void set_localVoices_14(Dictionary_2_t2849616364 * value)
	{
		___localVoices_14 = value;
		Il2CppCodeGenWriteBarrier(&___localVoices_14, value);
	}

	inline static int32_t get_offset_of_localVoicesPerChannel_15() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___localVoicesPerChannel_15)); }
	inline Dictionary_2_t1851803124 * get_localVoicesPerChannel_15() const { return ___localVoicesPerChannel_15; }
	inline Dictionary_2_t1851803124 ** get_address_of_localVoicesPerChannel_15() { return &___localVoicesPerChannel_15; }
	inline void set_localVoicesPerChannel_15(Dictionary_2_t1851803124 * value)
	{
		___localVoicesPerChannel_15 = value;
		Il2CppCodeGenWriteBarrier(&___localVoicesPerChannel_15, value);
	}

	inline static int32_t get_offset_of_remoteVoices_16() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___remoteVoices_16)); }
	inline Dictionary_2_t2707811279 * get_remoteVoices_16() const { return ___remoteVoices_16; }
	inline Dictionary_2_t2707811279 ** get_address_of_remoteVoices_16() { return &___remoteVoices_16; }
	inline void set_remoteVoices_16(Dictionary_2_t2707811279 * value)
	{
		___remoteVoices_16 = value;
		Il2CppCodeGenWriteBarrier(&___remoteVoices_16, value);
	}

	inline static int32_t get_offset_of_rnd_17() { return static_cast<int32_t>(offsetof(VoiceClient_t426870209, ___rnd_17)); }
	inline Random_t1044426839 * get_rnd_17() const { return ___rnd_17; }
	inline Random_t1044426839 ** get_address_of_rnd_17() { return &___rnd_17; }
	inline void set_rnd_17(Random_t1044426839 * value)
	{
		___rnd_17 = value;
		Il2CppCodeGenWriteBarrier(&___rnd_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
