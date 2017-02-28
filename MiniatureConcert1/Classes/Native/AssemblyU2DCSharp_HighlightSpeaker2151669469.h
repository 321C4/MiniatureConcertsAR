#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonVoiceSpeaker
struct PhotonVoiceSpeaker_t555915945;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightSpeaker
struct  HighlightSpeaker_t2151669469  : public MonoBehaviour_t1158329972
{
public:
	// PhotonVoiceSpeaker HighlightSpeaker::speaker
	PhotonVoiceSpeaker_t555915945 * ___speaker_2;
	// UnityEngine.Renderer HighlightSpeaker::rendererComp
	Renderer_t257310565 * ___rendererComp_3;

public:
	inline static int32_t get_offset_of_speaker_2() { return static_cast<int32_t>(offsetof(HighlightSpeaker_t2151669469, ___speaker_2)); }
	inline PhotonVoiceSpeaker_t555915945 * get_speaker_2() const { return ___speaker_2; }
	inline PhotonVoiceSpeaker_t555915945 ** get_address_of_speaker_2() { return &___speaker_2; }
	inline void set_speaker_2(PhotonVoiceSpeaker_t555915945 * value)
	{
		___speaker_2 = value;
		Il2CppCodeGenWriteBarrier(&___speaker_2, value);
	}

	inline static int32_t get_offset_of_rendererComp_3() { return static_cast<int32_t>(offsetof(HighlightSpeaker_t2151669469, ___rendererComp_3)); }
	inline Renderer_t257310565 * get_rendererComp_3() const { return ___rendererComp_3; }
	inline Renderer_t257310565 ** get_address_of_rendererComp_3() { return &___rendererComp_3; }
	inline void set_rendererComp_3(Renderer_t257310565 * value)
	{
		___rendererComp_3 = value;
		Il2CppCodeGenWriteBarrier(&___rendererComp_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
