﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.FriendInfo
struct  FriendInfo_t1100435706  : public Il2CppObject
{
public:
	// System.String ExitGames.Client.Photon.LoadBalancing.FriendInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.FriendInfo::<IsOnline>k__BackingField
	bool ___U3CIsOnlineU3Ek__BackingField_1;
	// System.String ExitGames.Client.Photon.LoadBalancing.FriendInfo::<Room>k__BackingField
	String_t* ___U3CRoomU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FriendInfo_t1100435706, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CIsOnlineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FriendInfo_t1100435706, ___U3CIsOnlineU3Ek__BackingField_1)); }
	inline bool get_U3CIsOnlineU3Ek__BackingField_1() const { return ___U3CIsOnlineU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsOnlineU3Ek__BackingField_1() { return &___U3CIsOnlineU3Ek__BackingField_1; }
	inline void set_U3CIsOnlineU3Ek__BackingField_1(bool value)
	{
		___U3CIsOnlineU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRoomU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FriendInfo_t1100435706, ___U3CRoomU3Ek__BackingField_2)); }
	inline String_t* get_U3CRoomU3Ek__BackingField_2() const { return ___U3CRoomU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CRoomU3Ek__BackingField_2() { return &___U3CRoomU3Ek__BackingField_2; }
	inline void set_U3CRoomU3Ek__BackingField_2(String_t* value)
	{
		___U3CRoomU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRoomU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
