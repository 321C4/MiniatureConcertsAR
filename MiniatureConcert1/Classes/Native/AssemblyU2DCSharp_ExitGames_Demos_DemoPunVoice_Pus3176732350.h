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
// PhotonVoiceRecorder
struct PhotonVoiceRecorder_t3997080430;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Demos.DemoPunVoice.PushToTalkPrivateButton>
struct Dictionary_2_t3118269125;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.PushToTalkScript
struct  PushToTalkScript_t3176732350  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.PushToTalkScript::pushToTalkButton
	Button_t2872111280 * ___pushToTalkButton_2;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.PushToTalkScript::pushToTalkText
	Text_t356221433 * ___pushToTalkText_3;
	// PhotonVoiceRecorder ExitGames.Demos.DemoPunVoice.PushToTalkScript::rec
	PhotonVoiceRecorder_t3997080430 * ___rec_4;
	// UnityEngine.Transform ExitGames.Demos.DemoPunVoice.PushToTalkScript::parent
	Transform_t3275118058 * ___parent_5;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.PushToTalkScript::buttonPrefab
	GameObject_t1756533147 * ___buttonPrefab_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Demos.DemoPunVoice.PushToTalkPrivateButton> ExitGames.Demos.DemoPunVoice.PushToTalkScript::buttons
	Dictionary_2_t3118269125 * ___buttons_7;

public:
	inline static int32_t get_offset_of_pushToTalkButton_2() { return static_cast<int32_t>(offsetof(PushToTalkScript_t3176732350, ___pushToTalkButton_2)); }
	inline Button_t2872111280 * get_pushToTalkButton_2() const { return ___pushToTalkButton_2; }
	inline Button_t2872111280 ** get_address_of_pushToTalkButton_2() { return &___pushToTalkButton_2; }
	inline void set_pushToTalkButton_2(Button_t2872111280 * value)
	{
		___pushToTalkButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___pushToTalkButton_2, value);
	}

	inline static int32_t get_offset_of_pushToTalkText_3() { return static_cast<int32_t>(offsetof(PushToTalkScript_t3176732350, ___pushToTalkText_3)); }
	inline Text_t356221433 * get_pushToTalkText_3() const { return ___pushToTalkText_3; }
	inline Text_t356221433 ** get_address_of_pushToTalkText_3() { return &___pushToTalkText_3; }
	inline void set_pushToTalkText_3(Text_t356221433 * value)
	{
		___pushToTalkText_3 = value;
		Il2CppCodeGenWriteBarrier(&___pushToTalkText_3, value);
	}

	inline static int32_t get_offset_of_rec_4() { return static_cast<int32_t>(offsetof(PushToTalkScript_t3176732350, ___rec_4)); }
	inline PhotonVoiceRecorder_t3997080430 * get_rec_4() const { return ___rec_4; }
	inline PhotonVoiceRecorder_t3997080430 ** get_address_of_rec_4() { return &___rec_4; }
	inline void set_rec_4(PhotonVoiceRecorder_t3997080430 * value)
	{
		___rec_4 = value;
		Il2CppCodeGenWriteBarrier(&___rec_4, value);
	}

	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(PushToTalkScript_t3176732350, ___parent_5)); }
	inline Transform_t3275118058 * get_parent_5() const { return ___parent_5; }
	inline Transform_t3275118058 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(Transform_t3275118058 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier(&___parent_5, value);
	}

	inline static int32_t get_offset_of_buttonPrefab_6() { return static_cast<int32_t>(offsetof(PushToTalkScript_t3176732350, ___buttonPrefab_6)); }
	inline GameObject_t1756533147 * get_buttonPrefab_6() const { return ___buttonPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_buttonPrefab_6() { return &___buttonPrefab_6; }
	inline void set_buttonPrefab_6(GameObject_t1756533147 * value)
	{
		___buttonPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___buttonPrefab_6, value);
	}

	inline static int32_t get_offset_of_buttons_7() { return static_cast<int32_t>(offsetof(PushToTalkScript_t3176732350, ___buttons_7)); }
	inline Dictionary_2_t3118269125 * get_buttons_7() const { return ___buttons_7; }
	inline Dictionary_2_t3118269125 ** get_address_of_buttons_7() { return &___buttons_7; }
	inline void set_buttons_7(Dictionary_2_t3118269125 * value)
	{
		___buttons_7 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
