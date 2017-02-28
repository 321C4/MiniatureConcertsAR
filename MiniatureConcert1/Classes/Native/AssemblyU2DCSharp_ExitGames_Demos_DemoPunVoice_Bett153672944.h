#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle
struct OnToggle_t2574747669;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.BetterToggle
struct  BetterToggle_t153672944  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle ExitGames.Demos.DemoPunVoice.BetterToggle::toggle
	Toggle_t3976754468 * ___toggle_2;

public:
	inline static int32_t get_offset_of_toggle_2() { return static_cast<int32_t>(offsetof(BetterToggle_t153672944, ___toggle_2)); }
	inline Toggle_t3976754468 * get_toggle_2() const { return ___toggle_2; }
	inline Toggle_t3976754468 ** get_address_of_toggle_2() { return &___toggle_2; }
	inline void set_toggle_2(Toggle_t3976754468 * value)
	{
		___toggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_2, value);
	}
};

struct BetterToggle_t153672944_StaticFields
{
public:
	// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle ExitGames.Demos.DemoPunVoice.BetterToggle::ToggleValueChanged
	OnToggle_t2574747669 * ___ToggleValueChanged_3;

public:
	inline static int32_t get_offset_of_ToggleValueChanged_3() { return static_cast<int32_t>(offsetof(BetterToggle_t153672944_StaticFields, ___ToggleValueChanged_3)); }
	inline OnToggle_t2574747669 * get_ToggleValueChanged_3() const { return ___ToggleValueChanged_3; }
	inline OnToggle_t2574747669 ** get_address_of_ToggleValueChanged_3() { return &___ToggleValueChanged_3; }
	inline void set_ToggleValueChanged_3(OnToggle_t2574747669 * value)
	{
		___ToggleValueChanged_3 = value;
		Il2CppCodeGenWriteBarrier(&___ToggleValueChanged_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
