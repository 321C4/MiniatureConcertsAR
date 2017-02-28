#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient
struct LoadBalancingClient_t3349497658;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.LoadBalancing.Player>
struct Dictionary_2_t229807200;

#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2713209379.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.Room
struct  Room_t139205435  : public RoomInfo_t2713209379
{
public:
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.Room::PlayerTTL
	int32_t ___PlayerTTL_12;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.Room::RoomTTL
	int32_t ___RoomTTL_13;
	// ExitGames.Client.Photon.LoadBalancing.LoadBalancingClient ExitGames.Client.Photon.LoadBalancing.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_t3349497658 * ___U3CLoadBalancingClientU3Ek__BackingField_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.LoadBalancing.Player> ExitGames.Client.Photon.LoadBalancing.Room::players
	Dictionary_2_t229807200 * ___players_15;

public:
	inline static int32_t get_offset_of_PlayerTTL_12() { return static_cast<int32_t>(offsetof(Room_t139205435, ___PlayerTTL_12)); }
	inline int32_t get_PlayerTTL_12() const { return ___PlayerTTL_12; }
	inline int32_t* get_address_of_PlayerTTL_12() { return &___PlayerTTL_12; }
	inline void set_PlayerTTL_12(int32_t value)
	{
		___PlayerTTL_12 = value;
	}

	inline static int32_t get_offset_of_RoomTTL_13() { return static_cast<int32_t>(offsetof(Room_t139205435, ___RoomTTL_13)); }
	inline int32_t get_RoomTTL_13() const { return ___RoomTTL_13; }
	inline int32_t* get_address_of_RoomTTL_13() { return &___RoomTTL_13; }
	inline void set_RoomTTL_13(int32_t value)
	{
		___RoomTTL_13 = value;
	}

	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Room_t139205435, ___U3CLoadBalancingClientU3Ek__BackingField_14)); }
	inline LoadBalancingClient_t3349497658 * get_U3CLoadBalancingClientU3Ek__BackingField_14() const { return ___U3CLoadBalancingClientU3Ek__BackingField_14; }
	inline LoadBalancingClient_t3349497658 ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_14() { return &___U3CLoadBalancingClientU3Ek__BackingField_14; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_14(LoadBalancingClient_t3349497658 * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLoadBalancingClientU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t139205435, ___players_15)); }
	inline Dictionary_2_t229807200 * get_players_15() const { return ___players_15; }
	inline Dictionary_2_t229807200 ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_t229807200 * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier(&___players_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
