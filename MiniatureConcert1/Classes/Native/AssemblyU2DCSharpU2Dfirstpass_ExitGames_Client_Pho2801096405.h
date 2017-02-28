#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.RoomOptions
struct  RoomOptions_t2801096405  : public Il2CppObject
{
public:
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte ExitGames.Client.Photon.LoadBalancing.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::<CheckUserOnJoin>k__BackingField
	bool ___U3CCheckUserOnJoinU3Ek__BackingField_5;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_6;
	// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.RoomOptions::CustomRoomProperties
	Hashtable_t995404622 * ___CustomRoomProperties_7;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t1642385972* ___CustomRoomPropertiesForLobby_8;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.RoomOptions::Plugins
	StringU5BU5D_t1642385972* ___Plugins_9;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_10;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_U3CCheckUserOnJoinU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___U3CCheckUserOnJoinU3Ek__BackingField_5)); }
	inline bool get_U3CCheckUserOnJoinU3Ek__BackingField_5() const { return ___U3CCheckUserOnJoinU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CCheckUserOnJoinU3Ek__BackingField_5() { return &___U3CCheckUserOnJoinU3Ek__BackingField_5; }
	inline void set_U3CCheckUserOnJoinU3Ek__BackingField_5(bool value)
	{
		___U3CCheckUserOnJoinU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_6() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___cleanupCacheOnLeave_6)); }
	inline bool get_cleanupCacheOnLeave_6() const { return ___cleanupCacheOnLeave_6; }
	inline bool* get_address_of_cleanupCacheOnLeave_6() { return &___cleanupCacheOnLeave_6; }
	inline void set_cleanupCacheOnLeave_6(bool value)
	{
		___cleanupCacheOnLeave_6 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_7() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___CustomRoomProperties_7)); }
	inline Hashtable_t995404622 * get_CustomRoomProperties_7() const { return ___CustomRoomProperties_7; }
	inline Hashtable_t995404622 ** get_address_of_CustomRoomProperties_7() { return &___CustomRoomProperties_7; }
	inline void set_CustomRoomProperties_7(Hashtable_t995404622 * value)
	{
		___CustomRoomProperties_7 = value;
		Il2CppCodeGenWriteBarrier(&___CustomRoomProperties_7, value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_8() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___CustomRoomPropertiesForLobby_8)); }
	inline StringU5BU5D_t1642385972* get_CustomRoomPropertiesForLobby_8() const { return ___CustomRoomPropertiesForLobby_8; }
	inline StringU5BU5D_t1642385972** get_address_of_CustomRoomPropertiesForLobby_8() { return &___CustomRoomPropertiesForLobby_8; }
	inline void set_CustomRoomPropertiesForLobby_8(StringU5BU5D_t1642385972* value)
	{
		___CustomRoomPropertiesForLobby_8 = value;
		Il2CppCodeGenWriteBarrier(&___CustomRoomPropertiesForLobby_8, value);
	}

	inline static int32_t get_offset_of_Plugins_9() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___Plugins_9)); }
	inline StringU5BU5D_t1642385972* get_Plugins_9() const { return ___Plugins_9; }
	inline StringU5BU5D_t1642385972** get_address_of_Plugins_9() { return &___Plugins_9; }
	inline void set_Plugins_9(StringU5BU5D_t1642385972* value)
	{
		___Plugins_9 = value;
		Il2CppCodeGenWriteBarrier(&___Plugins_9, value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___U3CSuppressRoomEventsU3Ek__BackingField_10)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_10() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_10() { return &___U3CSuppressRoomEventsU3Ek__BackingField_10; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_10(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_t2801096405, ___U3CPublishUserIdU3Ek__BackingField_11)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_11() const { return ___U3CPublishUserIdU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_11() { return &___U3CPublishUserIdU3Ek__BackingField_11; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_11(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
