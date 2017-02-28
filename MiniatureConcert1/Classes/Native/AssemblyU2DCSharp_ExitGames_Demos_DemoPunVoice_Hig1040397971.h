#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t209405766;
// PhotonVoiceRecorder
struct PhotonVoiceRecorder_t3997080430;
// PhotonVoiceSpeaker
struct PhotonVoiceSpeaker_t555915945;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoPunVoice.Highlighter
struct  Highlighter_t1040397971  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas ExitGames.Demos.DemoPunVoice.Highlighter::canvas
	Canvas_t209405766 * ___canvas_2;
	// PhotonVoiceRecorder ExitGames.Demos.DemoPunVoice.Highlighter::recorder
	PhotonVoiceRecorder_t3997080430 * ___recorder_3;
	// PhotonVoiceSpeaker ExitGames.Demos.DemoPunVoice.Highlighter::speaker
	PhotonVoiceSpeaker_t555915945 * ___speaker_4;
	// UnityEngine.UI.Image ExitGames.Demos.DemoPunVoice.Highlighter::recorderSprite
	Image_t2042527209 * ___recorderSprite_5;
	// UnityEngine.UI.Image ExitGames.Demos.DemoPunVoice.Highlighter::speakerSprite
	Image_t2042527209 * ___speakerSprite_6;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.Highlighter::bufferLagText
	Text_t356221433 * ___bufferLagText_7;
	// System.Boolean ExitGames.Demos.DemoPunVoice.Highlighter::showSpeakerLag
	bool ___showSpeakerLag_8;

public:
	inline static int32_t get_offset_of_canvas_2() { return static_cast<int32_t>(offsetof(Highlighter_t1040397971, ___canvas_2)); }
	inline Canvas_t209405766 * get_canvas_2() const { return ___canvas_2; }
	inline Canvas_t209405766 ** get_address_of_canvas_2() { return &___canvas_2; }
	inline void set_canvas_2(Canvas_t209405766 * value)
	{
		___canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_2, value);
	}

	inline static int32_t get_offset_of_recorder_3() { return static_cast<int32_t>(offsetof(Highlighter_t1040397971, ___recorder_3)); }
	inline PhotonVoiceRecorder_t3997080430 * get_recorder_3() const { return ___recorder_3; }
	inline PhotonVoiceRecorder_t3997080430 ** get_address_of_recorder_3() { return &___recorder_3; }
	inline void set_recorder_3(PhotonVoiceRecorder_t3997080430 * value)
	{
		___recorder_3 = value;
		Il2CppCodeGenWriteBarrier(&___recorder_3, value);
	}

	inline static int32_t get_offset_of_speaker_4() { return static_cast<int32_t>(offsetof(Highlighter_t1040397971, ___speaker_4)); }
	inline PhotonVoiceSpeaker_t555915945 * get_speaker_4() const { return ___speaker_4; }
	inline PhotonVoiceSpeaker_t555915945 ** get_address_of_speaker_4() { return &___speaker_4; }
	inline void set_speaker_4(PhotonVoiceSpeaker_t555915945 * value)
	{
		___speaker_4 = value;
		Il2CppCodeGenWriteBarrier(&___speaker_4, value);
	}

	inline static int32_t get_offset_of_recorderSprite_5() { return static_cast<int32_t>(offsetof(Highlighter_t1040397971, ___recorderSprite_5)); }
	inline Image_t2042527209 * get_recorderSprite_5() const { return ___recorderSprite_5; }
	inline Image_t2042527209 ** get_address_of_recorderSprite_5() { return &___recorderSprite_5; }
	inline void set_recorderSprite_5(Image_t2042527209 * value)
	{
		___recorderSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___recorderSprite_5, value);
	}

	inline static int32_t get_offset_of_speakerSprite_6() { return static_cast<int32_t>(offsetof(Highlighter_t1040397971, ___speakerSprite_6)); }
	inline Image_t2042527209 * get_speakerSprite_6() const { return ___speakerSprite_6; }
	inline Image_t2042527209 ** get_address_of_speakerSprite_6() { return &___speakerSprite_6; }
	inline void set_speakerSprite_6(Image_t2042527209 * value)
	{
		___speakerSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___speakerSprite_6, value);
	}

	inline static int32_t get_offset_of_bufferLagText_7() { return static_cast<int32_t>(offsetof(Highlighter_t1040397971, ___bufferLagText_7)); }
	inline Text_t356221433 * get_bufferLagText_7() const { return ___bufferLagText_7; }
	inline Text_t356221433 ** get_address_of_bufferLagText_7() { return &___bufferLagText_7; }
	inline void set_bufferLagText_7(Text_t356221433 * value)
	{
		___bufferLagText_7 = value;
		Il2CppCodeGenWriteBarrier(&___bufferLagText_7, value);
	}

	inline static int32_t get_offset_of_showSpeakerLag_8() { return static_cast<int32_t>(offsetof(Highlighter_t1040397971, ___showSpeakerLag_8)); }
	inline bool get_showSpeakerLag_8() const { return ___showSpeakerLag_8; }
	inline bool* get_address_of_showSpeakerLag_8() { return &___showSpeakerLag_8; }
	inline void set_showSpeakerLag_8(bool value)
	{
		___showSpeakerLag_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
