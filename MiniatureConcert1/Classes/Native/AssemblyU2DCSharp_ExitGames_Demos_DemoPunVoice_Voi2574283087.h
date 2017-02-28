#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.UI.Button
struct Button_t2872111280;
// PhotonVoiceRecorder
struct PhotonVoiceRecorder_t3997080430;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle
struct OnDebugToggle_t1852275875;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI
struct  VoiceDemoUI_t2574283087  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punState
	Text_t356221433 * ___punState_2;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceState
	Text_t356221433 * ___voiceState_3;
	// UnityEngine.Canvas ExitGames.Demos.DemoPunVoice.VoiceDemoUI::canvas
	Canvas_t209405766 * ___canvas_4;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punSwitch
	Button_t2872111280 * ___punSwitch_5;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punSwitchText
	Text_t356221433 * ___punSwitchText_6;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceSwitch
	Button_t2872111280 * ___voiceSwitch_7;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceSwitchText
	Text_t356221433 * ___voiceSwitchText_8;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrateButton
	Button_t2872111280 * ___calibrateButton_9;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrateText
	Text_t356221433 * ___calibrateText_10;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceDebugText
	Text_t356221433 * ___voiceDebugText_11;
	// PhotonVoiceRecorder ExitGames.Demos.DemoPunVoice.VoiceDemoUI::rec
	PhotonVoiceRecorder_t3997080430 * ___rec_12;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::inGameSettings
	GameObject_t1756533147 * ___inGameSettings_13;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::globalSettings
	GameObject_t1756533147 * ___globalSettings_14;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::devicesInfoText
	Text_t356221433 * ___devicesInfoText_15;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::debugGO
	GameObject_t1756533147 * ___debugGO_16;
	// System.Boolean ExitGames.Demos.DemoPunVoice.VoiceDemoUI::debugMode
	bool ___debugMode_17;
	// System.Single ExitGames.Demos.DemoPunVoice.VoiceDemoUI::volumeBeforeMute
	float ___volumeBeforeMute_18;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Demos.DemoPunVoice.VoiceDemoUI::previousDebugLevel
	uint8_t ___previousDebugLevel_19;
	// System.Int32 ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrationMilliSeconds
	int32_t ___calibrationMilliSeconds_21;

public:
	inline static int32_t get_offset_of_punState_2() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___punState_2)); }
	inline Text_t356221433 * get_punState_2() const { return ___punState_2; }
	inline Text_t356221433 ** get_address_of_punState_2() { return &___punState_2; }
	inline void set_punState_2(Text_t356221433 * value)
	{
		___punState_2 = value;
		Il2CppCodeGenWriteBarrier(&___punState_2, value);
	}

	inline static int32_t get_offset_of_voiceState_3() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___voiceState_3)); }
	inline Text_t356221433 * get_voiceState_3() const { return ___voiceState_3; }
	inline Text_t356221433 ** get_address_of_voiceState_3() { return &___voiceState_3; }
	inline void set_voiceState_3(Text_t356221433 * value)
	{
		___voiceState_3 = value;
		Il2CppCodeGenWriteBarrier(&___voiceState_3, value);
	}

	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___canvas_4)); }
	inline Canvas_t209405766 * get_canvas_4() const { return ___canvas_4; }
	inline Canvas_t209405766 ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(Canvas_t209405766 * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_4, value);
	}

	inline static int32_t get_offset_of_punSwitch_5() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___punSwitch_5)); }
	inline Button_t2872111280 * get_punSwitch_5() const { return ___punSwitch_5; }
	inline Button_t2872111280 ** get_address_of_punSwitch_5() { return &___punSwitch_5; }
	inline void set_punSwitch_5(Button_t2872111280 * value)
	{
		___punSwitch_5 = value;
		Il2CppCodeGenWriteBarrier(&___punSwitch_5, value);
	}

	inline static int32_t get_offset_of_punSwitchText_6() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___punSwitchText_6)); }
	inline Text_t356221433 * get_punSwitchText_6() const { return ___punSwitchText_6; }
	inline Text_t356221433 ** get_address_of_punSwitchText_6() { return &___punSwitchText_6; }
	inline void set_punSwitchText_6(Text_t356221433 * value)
	{
		___punSwitchText_6 = value;
		Il2CppCodeGenWriteBarrier(&___punSwitchText_6, value);
	}

	inline static int32_t get_offset_of_voiceSwitch_7() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___voiceSwitch_7)); }
	inline Button_t2872111280 * get_voiceSwitch_7() const { return ___voiceSwitch_7; }
	inline Button_t2872111280 ** get_address_of_voiceSwitch_7() { return &___voiceSwitch_7; }
	inline void set_voiceSwitch_7(Button_t2872111280 * value)
	{
		___voiceSwitch_7 = value;
		Il2CppCodeGenWriteBarrier(&___voiceSwitch_7, value);
	}

	inline static int32_t get_offset_of_voiceSwitchText_8() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___voiceSwitchText_8)); }
	inline Text_t356221433 * get_voiceSwitchText_8() const { return ___voiceSwitchText_8; }
	inline Text_t356221433 ** get_address_of_voiceSwitchText_8() { return &___voiceSwitchText_8; }
	inline void set_voiceSwitchText_8(Text_t356221433 * value)
	{
		___voiceSwitchText_8 = value;
		Il2CppCodeGenWriteBarrier(&___voiceSwitchText_8, value);
	}

	inline static int32_t get_offset_of_calibrateButton_9() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___calibrateButton_9)); }
	inline Button_t2872111280 * get_calibrateButton_9() const { return ___calibrateButton_9; }
	inline Button_t2872111280 ** get_address_of_calibrateButton_9() { return &___calibrateButton_9; }
	inline void set_calibrateButton_9(Button_t2872111280 * value)
	{
		___calibrateButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___calibrateButton_9, value);
	}

	inline static int32_t get_offset_of_calibrateText_10() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___calibrateText_10)); }
	inline Text_t356221433 * get_calibrateText_10() const { return ___calibrateText_10; }
	inline Text_t356221433 ** get_address_of_calibrateText_10() { return &___calibrateText_10; }
	inline void set_calibrateText_10(Text_t356221433 * value)
	{
		___calibrateText_10 = value;
		Il2CppCodeGenWriteBarrier(&___calibrateText_10, value);
	}

	inline static int32_t get_offset_of_voiceDebugText_11() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___voiceDebugText_11)); }
	inline Text_t356221433 * get_voiceDebugText_11() const { return ___voiceDebugText_11; }
	inline Text_t356221433 ** get_address_of_voiceDebugText_11() { return &___voiceDebugText_11; }
	inline void set_voiceDebugText_11(Text_t356221433 * value)
	{
		___voiceDebugText_11 = value;
		Il2CppCodeGenWriteBarrier(&___voiceDebugText_11, value);
	}

	inline static int32_t get_offset_of_rec_12() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___rec_12)); }
	inline PhotonVoiceRecorder_t3997080430 * get_rec_12() const { return ___rec_12; }
	inline PhotonVoiceRecorder_t3997080430 ** get_address_of_rec_12() { return &___rec_12; }
	inline void set_rec_12(PhotonVoiceRecorder_t3997080430 * value)
	{
		___rec_12 = value;
		Il2CppCodeGenWriteBarrier(&___rec_12, value);
	}

	inline static int32_t get_offset_of_inGameSettings_13() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___inGameSettings_13)); }
	inline GameObject_t1756533147 * get_inGameSettings_13() const { return ___inGameSettings_13; }
	inline GameObject_t1756533147 ** get_address_of_inGameSettings_13() { return &___inGameSettings_13; }
	inline void set_inGameSettings_13(GameObject_t1756533147 * value)
	{
		___inGameSettings_13 = value;
		Il2CppCodeGenWriteBarrier(&___inGameSettings_13, value);
	}

	inline static int32_t get_offset_of_globalSettings_14() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___globalSettings_14)); }
	inline GameObject_t1756533147 * get_globalSettings_14() const { return ___globalSettings_14; }
	inline GameObject_t1756533147 ** get_address_of_globalSettings_14() { return &___globalSettings_14; }
	inline void set_globalSettings_14(GameObject_t1756533147 * value)
	{
		___globalSettings_14 = value;
		Il2CppCodeGenWriteBarrier(&___globalSettings_14, value);
	}

	inline static int32_t get_offset_of_devicesInfoText_15() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___devicesInfoText_15)); }
	inline Text_t356221433 * get_devicesInfoText_15() const { return ___devicesInfoText_15; }
	inline Text_t356221433 ** get_address_of_devicesInfoText_15() { return &___devicesInfoText_15; }
	inline void set_devicesInfoText_15(Text_t356221433 * value)
	{
		___devicesInfoText_15 = value;
		Il2CppCodeGenWriteBarrier(&___devicesInfoText_15, value);
	}

	inline static int32_t get_offset_of_debugGO_16() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___debugGO_16)); }
	inline GameObject_t1756533147 * get_debugGO_16() const { return ___debugGO_16; }
	inline GameObject_t1756533147 ** get_address_of_debugGO_16() { return &___debugGO_16; }
	inline void set_debugGO_16(GameObject_t1756533147 * value)
	{
		___debugGO_16 = value;
		Il2CppCodeGenWriteBarrier(&___debugGO_16, value);
	}

	inline static int32_t get_offset_of_debugMode_17() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___debugMode_17)); }
	inline bool get_debugMode_17() const { return ___debugMode_17; }
	inline bool* get_address_of_debugMode_17() { return &___debugMode_17; }
	inline void set_debugMode_17(bool value)
	{
		___debugMode_17 = value;
	}

	inline static int32_t get_offset_of_volumeBeforeMute_18() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___volumeBeforeMute_18)); }
	inline float get_volumeBeforeMute_18() const { return ___volumeBeforeMute_18; }
	inline float* get_address_of_volumeBeforeMute_18() { return &___volumeBeforeMute_18; }
	inline void set_volumeBeforeMute_18(float value)
	{
		___volumeBeforeMute_18 = value;
	}

	inline static int32_t get_offset_of_previousDebugLevel_19() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___previousDebugLevel_19)); }
	inline uint8_t get_previousDebugLevel_19() const { return ___previousDebugLevel_19; }
	inline uint8_t* get_address_of_previousDebugLevel_19() { return &___previousDebugLevel_19; }
	inline void set_previousDebugLevel_19(uint8_t value)
	{
		___previousDebugLevel_19 = value;
	}

	inline static int32_t get_offset_of_calibrationMilliSeconds_21() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087, ___calibrationMilliSeconds_21)); }
	inline int32_t get_calibrationMilliSeconds_21() const { return ___calibrationMilliSeconds_21; }
	inline int32_t* get_address_of_calibrationMilliSeconds_21() { return &___calibrationMilliSeconds_21; }
	inline void set_calibrationMilliSeconds_21(int32_t value)
	{
		___calibrationMilliSeconds_21 = value;
	}
};

struct VoiceDemoUI_t2574283087_StaticFields
{
public:
	// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle ExitGames.Demos.DemoPunVoice.VoiceDemoUI::DebugToggled
	OnDebugToggle_t1852275875 * ___DebugToggled_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ExitGames.Demos.DemoPunVoice.VoiceDemoUI::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ExitGames.Demos.DemoPunVoice.VoiceDemoUI::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_23;

public:
	inline static int32_t get_offset_of_DebugToggled_20() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087_StaticFields, ___DebugToggled_20)); }
	inline OnDebugToggle_t1852275875 * get_DebugToggled_20() const { return ___DebugToggled_20; }
	inline OnDebugToggle_t1852275875 ** get_address_of_DebugToggled_20() { return &___DebugToggled_20; }
	inline void set_DebugToggled_20(OnDebugToggle_t1852275875 * value)
	{
		___DebugToggled_20 = value;
		Il2CppCodeGenWriteBarrier(&___DebugToggled_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_22() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087_StaticFields, ___U3CU3Ef__switchU24map0_22)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_22() const { return ___U3CU3Ef__switchU24map0_22; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_22() { return &___U3CU3Ef__switchU24map0_22; }
	inline void set_U3CU3Ef__switchU24map0_22(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_23() { return static_cast<int32_t>(offsetof(VoiceDemoUI_t2574283087_StaticFields, ___U3CU3Ef__switchU24map1_23)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_23() const { return ___U3CU3Ef__switchU24map1_23; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_23() { return &___U3CU3Ef__switchU24map1_23; }
	inline void set_U3CU3Ef__switchU24map1_23(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
