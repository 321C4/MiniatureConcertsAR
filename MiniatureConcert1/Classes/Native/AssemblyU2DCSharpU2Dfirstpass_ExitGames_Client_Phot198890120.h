#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// ExitGames.Client.Photon.LoadBalancing.TypedLobby
struct TypedLobby_t198890120;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3955363032.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.TypedLobby
struct  TypedLobby_t198890120  : public Il2CppObject
{
public:
	// System.String ExitGames.Client.Photon.LoadBalancing.TypedLobby::Name
	String_t* ___Name_0;
	// ExitGames.Client.Photon.LoadBalancing.LobbyType ExitGames.Client.Photon.LoadBalancing.TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_t198890120, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_t198890120, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_t198890120_StaticFields
{
public:
	// ExitGames.Client.Photon.LoadBalancing.TypedLobby ExitGames.Client.Photon.LoadBalancing.TypedLobby::Default
	TypedLobby_t198890120 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_t198890120_StaticFields, ___Default_2)); }
	inline TypedLobby_t198890120 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_t198890120 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_t198890120 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier(&___Default_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
