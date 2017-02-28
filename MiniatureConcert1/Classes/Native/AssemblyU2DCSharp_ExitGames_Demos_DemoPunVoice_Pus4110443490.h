#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// ExitGames.Demos.DemoPunVoice.PushToTalkScript
struct PushToTalkScript_t3176732350;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.PushToTalkPrivateButton
struct  PushToTalkPrivateButton_t4110443490  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.PushToTalkPrivateButton::pushToTalkPrivateButton
	Button_t2872111280 * ___pushToTalkPrivateButton_2;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.PushToTalkPrivateButton::buttonText
	Text_t356221433 * ___buttonText_3;
	// ExitGames.Demos.DemoPunVoice.PushToTalkScript ExitGames.Demos.DemoPunVoice.PushToTalkPrivateButton::pttScript
	PushToTalkScript_t3176732350 * ___pttScript_4;
	// System.Byte ExitGames.Demos.DemoPunVoice.PushToTalkPrivateButton::AudioGroup
	uint8_t ___AudioGroup_5;
	// System.Boolean ExitGames.Demos.DemoPunVoice.PushToTalkPrivateButton::Subscribed
	bool ___Subscribed_6;

public:
	inline static int32_t get_offset_of_pushToTalkPrivateButton_2() { return static_cast<int32_t>(offsetof(PushToTalkPrivateButton_t4110443490, ___pushToTalkPrivateButton_2)); }
	inline Button_t2872111280 * get_pushToTalkPrivateButton_2() const { return ___pushToTalkPrivateButton_2; }
	inline Button_t2872111280 ** get_address_of_pushToTalkPrivateButton_2() { return &___pushToTalkPrivateButton_2; }
	inline void set_pushToTalkPrivateButton_2(Button_t2872111280 * value)
	{
		___pushToTalkPrivateButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___pushToTalkPrivateButton_2, value);
	}

	inline static int32_t get_offset_of_buttonText_3() { return static_cast<int32_t>(offsetof(PushToTalkPrivateButton_t4110443490, ___buttonText_3)); }
	inline Text_t356221433 * get_buttonText_3() const { return ___buttonText_3; }
	inline Text_t356221433 ** get_address_of_buttonText_3() { return &___buttonText_3; }
	inline void set_buttonText_3(Text_t356221433 * value)
	{
		___buttonText_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonText_3, value);
	}

	inline static int32_t get_offset_of_pttScript_4() { return static_cast<int32_t>(offsetof(PushToTalkPrivateButton_t4110443490, ___pttScript_4)); }
	inline PushToTalkScript_t3176732350 * get_pttScript_4() const { return ___pttScript_4; }
	inline PushToTalkScript_t3176732350 ** get_address_of_pttScript_4() { return &___pttScript_4; }
	inline void set_pttScript_4(PushToTalkScript_t3176732350 * value)
	{
		___pttScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___pttScript_4, value);
	}

	inline static int32_t get_offset_of_AudioGroup_5() { return static_cast<int32_t>(offsetof(PushToTalkPrivateButton_t4110443490, ___AudioGroup_5)); }
	inline uint8_t get_AudioGroup_5() const { return ___AudioGroup_5; }
	inline uint8_t* get_address_of_AudioGroup_5() { return &___AudioGroup_5; }
	inline void set_AudioGroup_5(uint8_t value)
	{
		___AudioGroup_5 = value;
	}

	inline static int32_t get_offset_of_Subscribed_6() { return static_cast<int32_t>(offsetof(PushToTalkPrivateButton_t4110443490, ___Subscribed_6)); }
	inline bool get_Subscribed_6() const { return ___Subscribed_6; }
	inline bool* get_address_of_Subscribed_6() { return &___Subscribed_6; }
	inline void set_Subscribed_6(bool value)
	{
		___Subscribed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
