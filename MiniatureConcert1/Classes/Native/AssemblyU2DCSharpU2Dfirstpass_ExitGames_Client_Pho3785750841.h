#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Voice.VoiceClient
struct VoiceClient_t426870209;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t4223148500;
// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState>
struct Action_1_t3812182506;

#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3349497658.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LoadBalancingFrontend
struct  LoadBalancingFrontend_t3785750841  : public LoadBalancingClient_t3349497658
{
public:
	// ExitGames.Client.Photon.Voice.VoiceClient ExitGames.Client.Photon.Voice.LoadBalancingFrontend::voiceClient
	VoiceClient_t426870209 * ___voiceClient_42;
	// System.Action`1<ExitGames.Client.Photon.EventData> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::<OnEventAction>k__BackingField
	Action_1_t4223148500 * ___U3COnEventActionU3Ek__BackingField_43;
	// System.Action`1<ExitGames.Client.Photon.LoadBalancing.ClientState> ExitGames.Client.Photon.Voice.LoadBalancingFrontend::<OnStateChangeAction>k__BackingField
	Action_1_t3812182506 * ___U3COnStateChangeActionU3Ek__BackingField_44;
	// System.Boolean ExitGames.Client.Photon.Voice.LoadBalancingFrontend::debugEchoMode
	bool ___debugEchoMode_45;

public:
	inline static int32_t get_offset_of_voiceClient_42() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t3785750841, ___voiceClient_42)); }
	inline VoiceClient_t426870209 * get_voiceClient_42() const { return ___voiceClient_42; }
	inline VoiceClient_t426870209 ** get_address_of_voiceClient_42() { return &___voiceClient_42; }
	inline void set_voiceClient_42(VoiceClient_t426870209 * value)
	{
		___voiceClient_42 = value;
		Il2CppCodeGenWriteBarrier(&___voiceClient_42, value);
	}

	inline static int32_t get_offset_of_U3COnEventActionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t3785750841, ___U3COnEventActionU3Ek__BackingField_43)); }
	inline Action_1_t4223148500 * get_U3COnEventActionU3Ek__BackingField_43() const { return ___U3COnEventActionU3Ek__BackingField_43; }
	inline Action_1_t4223148500 ** get_address_of_U3COnEventActionU3Ek__BackingField_43() { return &___U3COnEventActionU3Ek__BackingField_43; }
	inline void set_U3COnEventActionU3Ek__BackingField_43(Action_1_t4223148500 * value)
	{
		___U3COnEventActionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnEventActionU3Ek__BackingField_43, value);
	}

	inline static int32_t get_offset_of_U3COnStateChangeActionU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t3785750841, ___U3COnStateChangeActionU3Ek__BackingField_44)); }
	inline Action_1_t3812182506 * get_U3COnStateChangeActionU3Ek__BackingField_44() const { return ___U3COnStateChangeActionU3Ek__BackingField_44; }
	inline Action_1_t3812182506 ** get_address_of_U3COnStateChangeActionU3Ek__BackingField_44() { return &___U3COnStateChangeActionU3Ek__BackingField_44; }
	inline void set_U3COnStateChangeActionU3Ek__BackingField_44(Action_1_t3812182506 * value)
	{
		___U3COnStateChangeActionU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnStateChangeActionU3Ek__BackingField_44, value);
	}

	inline static int32_t get_offset_of_debugEchoMode_45() { return static_cast<int32_t>(offsetof(LoadBalancingFrontend_t3785750841, ___debugEchoMode_45)); }
	inline bool get_debugEchoMode_45() const { return ___debugEchoMode_45; }
	inline bool* get_address_of_debugEchoMode_45() { return &___debugEchoMode_45; }
	inline void set_debugEchoMode_45(bool value)
	{
		___debugEchoMode_45 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
