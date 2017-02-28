#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.LoadBalancing.WebFlags
struct WebFlags_t1281188997;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadBalancing.WebFlags
struct  WebFlags_t1281188997  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.LoadBalancing.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;

public:
	inline static int32_t get_offset_of_WebhookFlags_1() { return static_cast<int32_t>(offsetof(WebFlags_t1281188997, ___WebhookFlags_1)); }
	inline uint8_t get_WebhookFlags_1() const { return ___WebhookFlags_1; }
	inline uint8_t* get_address_of_WebhookFlags_1() { return &___WebhookFlags_1; }
	inline void set_WebhookFlags_1(uint8_t value)
	{
		___WebhookFlags_1 = value;
	}
};

struct WebFlags_t1281188997_StaticFields
{
public:
	// ExitGames.Client.Photon.LoadBalancing.WebFlags ExitGames.Client.Photon.LoadBalancing.WebFlags::Default
	WebFlags_t1281188997 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(WebFlags_t1281188997_StaticFields, ___Default_0)); }
	inline WebFlags_t1281188997 * get_Default_0() const { return ___Default_0; }
	inline WebFlags_t1281188997 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(WebFlags_t1281188997 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
