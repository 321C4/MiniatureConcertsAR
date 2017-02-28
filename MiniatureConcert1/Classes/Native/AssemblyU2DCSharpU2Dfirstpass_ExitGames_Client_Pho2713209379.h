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
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.RoomInfo
struct  RoomInfo_t2713209379  : public Il2CppObject
{
public:
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::removedFromList
	bool ___removedFromList_0;
	// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.RoomInfo::customProperties
	Hashtable_t995404622 * ___customProperties_1;
	// System.Byte ExitGames.Client.Photon.LoadBalancing.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.RoomInfo::expectedUsersField
	StringU5BU5D_t1642385972* ___expectedUsersField_3;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::isOpen
	bool ___isOpen_4;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::isVisible
	bool ___isVisible_5;
	// System.String ExitGames.Client.Photon.LoadBalancing.RoomInfo::name
	String_t* ___name_6;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.RoomInfo::masterClientIdField
	int32_t ___masterClientIdField_7;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::<serverSideMasterClient>k__BackingField
	bool ___U3CserverSideMasterClientU3Ek__BackingField_8;
	// System.String[] ExitGames.Client.Photon.LoadBalancing.RoomInfo::propsListedInLobby
	StringU5BU5D_t1642385972* ___propsListedInLobby_9;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_10;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.RoomInfo::<IsLocalClientInside>k__BackingField
	bool ___U3CIsLocalClientInsideU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_removedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___removedFromList_0)); }
	inline bool get_removedFromList_0() const { return ___removedFromList_0; }
	inline bool* get_address_of_removedFromList_0() { return &___removedFromList_0; }
	inline void set_removedFromList_0(bool value)
	{
		___removedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___customProperties_1)); }
	inline Hashtable_t995404622 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_t995404622 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_t995404622 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier(&___customProperties_1, value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_expectedUsersField_3() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___expectedUsersField_3)); }
	inline StringU5BU5D_t1642385972* get_expectedUsersField_3() const { return ___expectedUsersField_3; }
	inline StringU5BU5D_t1642385972** get_address_of_expectedUsersField_3() { return &___expectedUsersField_3; }
	inline void set_expectedUsersField_3(StringU5BU5D_t1642385972* value)
	{
		___expectedUsersField_3 = value;
		Il2CppCodeGenWriteBarrier(&___expectedUsersField_3, value);
	}

	inline static int32_t get_offset_of_isOpen_4() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___isOpen_4)); }
	inline bool get_isOpen_4() const { return ___isOpen_4; }
	inline bool* get_address_of_isOpen_4() { return &___isOpen_4; }
	inline void set_isOpen_4(bool value)
	{
		___isOpen_4 = value;
	}

	inline static int32_t get_offset_of_isVisible_5() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___isVisible_5)); }
	inline bool get_isVisible_5() const { return ___isVisible_5; }
	inline bool* get_address_of_isVisible_5() { return &___isVisible_5; }
	inline void set_isVisible_5(bool value)
	{
		___isVisible_5 = value;
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier(&___name_6, value);
	}

	inline static int32_t get_offset_of_masterClientIdField_7() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___masterClientIdField_7)); }
	inline int32_t get_masterClientIdField_7() const { return ___masterClientIdField_7; }
	inline int32_t* get_address_of_masterClientIdField_7() { return &___masterClientIdField_7; }
	inline void set_masterClientIdField_7(int32_t value)
	{
		___masterClientIdField_7 = value;
	}

	inline static int32_t get_offset_of_U3CserverSideMasterClientU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___U3CserverSideMasterClientU3Ek__BackingField_8)); }
	inline bool get_U3CserverSideMasterClientU3Ek__BackingField_8() const { return ___U3CserverSideMasterClientU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CserverSideMasterClientU3Ek__BackingField_8() { return &___U3CserverSideMasterClientU3Ek__BackingField_8; }
	inline void set_U3CserverSideMasterClientU3Ek__BackingField_8(bool value)
	{
		___U3CserverSideMasterClientU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_propsListedInLobby_9() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___propsListedInLobby_9)); }
	inline StringU5BU5D_t1642385972* get_propsListedInLobby_9() const { return ___propsListedInLobby_9; }
	inline StringU5BU5D_t1642385972** get_address_of_propsListedInLobby_9() { return &___propsListedInLobby_9; }
	inline void set_propsListedInLobby_9(StringU5BU5D_t1642385972* value)
	{
		___propsListedInLobby_9 = value;
		Il2CppCodeGenWriteBarrier(&___propsListedInLobby_9, value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___U3CPlayerCountU3Ek__BackingField_10)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_10() const { return ___U3CPlayerCountU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_10() { return &___U3CPlayerCountU3Ek__BackingField_10; }
	inline void set_U3CPlayerCountU3Ek__BackingField_10(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsLocalClientInsideU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomInfo_t2713209379, ___U3CIsLocalClientInsideU3Ek__BackingField_11)); }
	inline bool get_U3CIsLocalClientInsideU3Ek__BackingField_11() const { return ___U3CIsLocalClientInsideU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsLocalClientInsideU3Ek__BackingField_11() { return &___U3CIsLocalClientInsideU3Ek__BackingField_11; }
	inline void set_U3CIsLocalClientInsideU3Ek__BackingField_11(bool value)
	{
		___U3CIsLocalClientInsideU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
