#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker>
struct Dictionary_2_t1209538947;
// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo>
struct Action_3_t329678864;
// System.Action`2<System.Int32,System.Byte>
struct Action_2_t2981472501;
// System.Action`3<System.Int32,System.Byte,System.Single[]>
struct Action_3_t824611949;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>
struct Action_1_t3812182506;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3450336510;

#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3785750841.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityVoiceFrontend
struct  UnityVoiceFrontend_t4221749441  : public LoadBalancingFrontend_t3785750841
{
public:
	// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Byte>,PhotonVoiceSpeaker> UnityVoiceFrontend::voiceSpeakers
	Dictionary_2_t1209538947 * ___voiceSpeakers_46;
	// System.Action`3<System.Int32,System.Byte,ExitGames.Client.Photon.Voice.VoiceInfo> UnityVoiceFrontend::<OnRemoteVoiceInfoAction>k__BackingField
	Action_3_t329678864 * ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47;
	// System.Action`2<System.Int32,System.Byte> UnityVoiceFrontend::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_2_t2981472501 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48;
	// System.Action`3<System.Int32,System.Byte,System.Single[]> UnityVoiceFrontend::<OnAudioFrameAction>k__BackingField
	Action_3_t824611949 * ___U3COnAudioFrameActionU3Ek__BackingField_49;
	// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> UnityVoiceFrontend::<OnStateChangeAction>k__BackingField
	Action_1_t3812182506 * ___U3COnStateChangeActionU3Ek__BackingField_50;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> UnityVoiceFrontend::<OnOpResponseAction>k__BackingField
	Action_1_t3450336510 * ___U3COnOpResponseActionU3Ek__BackingField_51;
	// System.Boolean UnityVoiceFrontend::reconnect
	bool ___reconnect_52;

public:
	inline static int32_t get_offset_of_voiceSpeakers_46() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t4221749441, ___voiceSpeakers_46)); }
	inline Dictionary_2_t1209538947 * get_voiceSpeakers_46() const { return ___voiceSpeakers_46; }
	inline Dictionary_2_t1209538947 ** get_address_of_voiceSpeakers_46() { return &___voiceSpeakers_46; }
	inline void set_voiceSpeakers_46(Dictionary_2_t1209538947 * value)
	{
		___voiceSpeakers_46 = value;
		Il2CppCodeGenWriteBarrier(&___voiceSpeakers_46, value);
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t4221749441, ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47)); }
	inline Action_3_t329678864 * get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47() const { return ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47; }
	inline Action_3_t329678864 ** get_address_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47() { return &___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47; }
	inline void set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_47(Action_3_t329678864 * value)
	{
		___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnRemoteVoiceInfoActionU3Ek__BackingField_47, value);
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t4221749441, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48)); }
	inline Action_2_t2981472501 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48; }
	inline Action_2_t2981472501 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48(Action_2_t2981472501 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_48, value);
	}

	inline static int32_t get_offset_of_U3COnAudioFrameActionU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t4221749441, ___U3COnAudioFrameActionU3Ek__BackingField_49)); }
	inline Action_3_t824611949 * get_U3COnAudioFrameActionU3Ek__BackingField_49() const { return ___U3COnAudioFrameActionU3Ek__BackingField_49; }
	inline Action_3_t824611949 ** get_address_of_U3COnAudioFrameActionU3Ek__BackingField_49() { return &___U3COnAudioFrameActionU3Ek__BackingField_49; }
	inline void set_U3COnAudioFrameActionU3Ek__BackingField_49(Action_3_t824611949 * value)
	{
		___U3COnAudioFrameActionU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnAudioFrameActionU3Ek__BackingField_49, value);
	}

	inline static int32_t get_offset_of_U3COnStateChangeActionU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t4221749441, ___U3COnStateChangeActionU3Ek__BackingField_50)); }
	inline Action_1_t3812182506 * get_U3COnStateChangeActionU3Ek__BackingField_50() const { return ___U3COnStateChangeActionU3Ek__BackingField_50; }
	inline Action_1_t3812182506 ** get_address_of_U3COnStateChangeActionU3Ek__BackingField_50() { return &___U3COnStateChangeActionU3Ek__BackingField_50; }
	inline void set_U3COnStateChangeActionU3Ek__BackingField_50(Action_1_t3812182506 * value)
	{
		___U3COnStateChangeActionU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnStateChangeActionU3Ek__BackingField_50, value);
	}

	inline static int32_t get_offset_of_U3COnOpResponseActionU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t4221749441, ___U3COnOpResponseActionU3Ek__BackingField_51)); }
	inline Action_1_t3450336510 * get_U3COnOpResponseActionU3Ek__BackingField_51() const { return ___U3COnOpResponseActionU3Ek__BackingField_51; }
	inline Action_1_t3450336510 ** get_address_of_U3COnOpResponseActionU3Ek__BackingField_51() { return &___U3COnOpResponseActionU3Ek__BackingField_51; }
	inline void set_U3COnOpResponseActionU3Ek__BackingField_51(Action_1_t3450336510 * value)
	{
		___U3COnOpResponseActionU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnOpResponseActionU3Ek__BackingField_51, value);
	}

	inline static int32_t get_offset_of_reconnect_52() { return static_cast<int32_t>(offsetof(UnityVoiceFrontend_t4221749441, ___reconnect_52)); }
	inline bool get_reconnect_52() const { return ___reconnect_52; }
	inline bool* get_address_of_reconnect_52() { return &___reconnect_52; }
	inline void set_reconnect_52(bool value)
	{
		___reconnect_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
