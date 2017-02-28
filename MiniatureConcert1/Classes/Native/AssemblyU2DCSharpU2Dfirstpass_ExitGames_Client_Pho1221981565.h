#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.LoadBalancing.Room
struct Room_t139205435;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.Player
struct  Player_t1221981565  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.LoadBalancing.Room ExitGames.Client.Photon.LoadBalancing.Player::<RoomReference>k__BackingField
	Room_t139205435 * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.LoadBalancing.Player::actorID
	int32_t ___actorID_1;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.Player::IsLocal
	bool ___IsLocal_2;
	// System.String ExitGames.Client.Photon.LoadBalancing.Player::nickName
	String_t* ___nickName_3;
	// System.Boolean ExitGames.Client.Photon.LoadBalancing.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_4;
	// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadBalancing.Player::<CustomProperties>k__BackingField
	Hashtable_t995404622 * ___U3CCustomPropertiesU3Ek__BackingField_5;
	// System.Object ExitGames.Client.Photon.LoadBalancing.Player::Tag
	Il2CppObject * ___Tag_6;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_t1221981565, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t139205435 * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t139205435 ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t139205435 * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRoomReferenceU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_actorID_1() { return static_cast<int32_t>(offsetof(Player_t1221981565, ___actorID_1)); }
	inline int32_t get_actorID_1() const { return ___actorID_1; }
	inline int32_t* get_address_of_actorID_1() { return &___actorID_1; }
	inline void set_actorID_1(int32_t value)
	{
		___actorID_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_t1221981565, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_nickName_3() { return static_cast<int32_t>(offsetof(Player_t1221981565, ___nickName_3)); }
	inline String_t* get_nickName_3() const { return ___nickName_3; }
	inline String_t** get_address_of_nickName_3() { return &___nickName_3; }
	inline void set_nickName_3(String_t* value)
	{
		___nickName_3 = value;
		Il2CppCodeGenWriteBarrier(&___nickName_3, value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Player_t1221981565, ___U3CIsInactiveU3Ek__BackingField_4)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_4() const { return ___U3CIsInactiveU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_4() { return &___U3CIsInactiveU3Ek__BackingField_4; }
	inline void set_U3CIsInactiveU3Ek__BackingField_4(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_t1221981565, ___U3CCustomPropertiesU3Ek__BackingField_5)); }
	inline Hashtable_t995404622 * get_U3CCustomPropertiesU3Ek__BackingField_5() const { return ___U3CCustomPropertiesU3Ek__BackingField_5; }
	inline Hashtable_t995404622 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_5() { return &___U3CCustomPropertiesU3Ek__BackingField_5; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_5(Hashtable_t995404622 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCustomPropertiesU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_Tag_6() { return static_cast<int32_t>(offsetof(Player_t1221981565, ___Tag_6)); }
	inline Il2CppObject * get_Tag_6() const { return ___Tag_6; }
	inline Il2CppObject ** get_address_of_Tag_6() { return &___Tag_6; }
	inline void set_Tag_6(Il2CppObject * value)
	{
		___Tag_6 = value;
		Il2CppCodeGenWriteBarrier(&___Tag_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
