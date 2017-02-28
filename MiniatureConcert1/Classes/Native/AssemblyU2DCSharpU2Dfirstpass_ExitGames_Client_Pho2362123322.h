#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions
struct RaiseEventOptions_t2362123322;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// ExitGames.Client.Photon.LoadBalancing.WebFlags
struct WebFlags_t1281188997;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3233817281.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2395411352.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions
struct  RaiseEventOptions_t2362123322  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.LoadBalancing.EventCaching ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions::CachingOption
	uint8_t ___CachingOption_1;
	// System.Byte ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions::InterestGroup
	uint8_t ___InterestGroup_2;
	// System.Int32[] ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions::TargetActors
	Int32U5BU5D_t3030399641* ___TargetActors_3;
	// ExitGames.Client.Photon.LoadBalancing.ReceiverGroup ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions::Receivers
	uint8_t ___Receivers_4;
	// System.Byte ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions::SequenceChannel
	uint8_t ___SequenceChannel_5;
	// ExitGames.Client.Photon.LoadBalancing.WebFlags ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions::Flags
	WebFlags_t1281188997 * ___Flags_6;

public:
	inline static int32_t get_offset_of_CachingOption_1() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2362123322, ___CachingOption_1)); }
	inline uint8_t get_CachingOption_1() const { return ___CachingOption_1; }
	inline uint8_t* get_address_of_CachingOption_1() { return &___CachingOption_1; }
	inline void set_CachingOption_1(uint8_t value)
	{
		___CachingOption_1 = value;
	}

	inline static int32_t get_offset_of_InterestGroup_2() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2362123322, ___InterestGroup_2)); }
	inline uint8_t get_InterestGroup_2() const { return ___InterestGroup_2; }
	inline uint8_t* get_address_of_InterestGroup_2() { return &___InterestGroup_2; }
	inline void set_InterestGroup_2(uint8_t value)
	{
		___InterestGroup_2 = value;
	}

	inline static int32_t get_offset_of_TargetActors_3() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2362123322, ___TargetActors_3)); }
	inline Int32U5BU5D_t3030399641* get_TargetActors_3() const { return ___TargetActors_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_TargetActors_3() { return &___TargetActors_3; }
	inline void set_TargetActors_3(Int32U5BU5D_t3030399641* value)
	{
		___TargetActors_3 = value;
		Il2CppCodeGenWriteBarrier(&___TargetActors_3, value);
	}

	inline static int32_t get_offset_of_Receivers_4() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2362123322, ___Receivers_4)); }
	inline uint8_t get_Receivers_4() const { return ___Receivers_4; }
	inline uint8_t* get_address_of_Receivers_4() { return &___Receivers_4; }
	inline void set_Receivers_4(uint8_t value)
	{
		___Receivers_4 = value;
	}

	inline static int32_t get_offset_of_SequenceChannel_5() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2362123322, ___SequenceChannel_5)); }
	inline uint8_t get_SequenceChannel_5() const { return ___SequenceChannel_5; }
	inline uint8_t* get_address_of_SequenceChannel_5() { return &___SequenceChannel_5; }
	inline void set_SequenceChannel_5(uint8_t value)
	{
		___SequenceChannel_5 = value;
	}

	inline static int32_t get_offset_of_Flags_6() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2362123322, ___Flags_6)); }
	inline WebFlags_t1281188997 * get_Flags_6() const { return ___Flags_6; }
	inline WebFlags_t1281188997 ** get_address_of_Flags_6() { return &___Flags_6; }
	inline void set_Flags_6(WebFlags_t1281188997 * value)
	{
		___Flags_6 = value;
		Il2CppCodeGenWriteBarrier(&___Flags_6, value);
	}
};

struct RaiseEventOptions_t2362123322_StaticFields
{
public:
	// ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions ExitGames.Client.Photon.LoadBalancing.RaiseEventOptions::Default
	RaiseEventOptions_t2362123322 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(RaiseEventOptions_t2362123322_StaticFields, ___Default_0)); }
	inline RaiseEventOptions_t2362123322 * get_Default_0() const { return ___Default_0; }
	inline RaiseEventOptions_t2362123322 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(RaiseEventOptions_t2362123322 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
