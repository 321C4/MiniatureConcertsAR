﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot198890120.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo
struct  TypedLobbyInfo_t2163961574  : public TypedLobby_t198890120
{
public:
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo::PlayerCount
	int32_t ___PlayerCount_3;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.TypedLobbyInfo::RoomCount
	int32_t ___RoomCount_4;

public:
	inline static int32_t get_offset_of_PlayerCount_3() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t2163961574, ___PlayerCount_3)); }
	inline int32_t get_PlayerCount_3() const { return ___PlayerCount_3; }
	inline int32_t* get_address_of_PlayerCount_3() { return &___PlayerCount_3; }
	inline void set_PlayerCount_3(int32_t value)
	{
		___PlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_RoomCount_4() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t2163961574, ___RoomCount_4)); }
	inline int32_t get_RoomCount_4() const { return ___RoomCount_4; }
	inline int32_t* get_address_of_RoomCount_4() { return &___RoomCount_4; }
	inline void set_RoomCount_4(int32_t value)
	{
		___RoomCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
