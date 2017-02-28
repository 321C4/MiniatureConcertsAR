#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonVoiceRecorder
struct PhotonVoiceRecorder_t3997080430;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightRecorder
struct  HighlightRecorder_t2481915234  : public MonoBehaviour_t1158329972
{
public:
	// PhotonVoiceRecorder HighlightRecorder::recorder
	PhotonVoiceRecorder_t3997080430 * ___recorder_2;
	// UnityEngine.Renderer HighlightRecorder::rendererComp
	Renderer_t257310565 * ___rendererComp_3;

public:
	inline static int32_t get_offset_of_recorder_2() { return static_cast<int32_t>(offsetof(HighlightRecorder_t2481915234, ___recorder_2)); }
	inline PhotonVoiceRecorder_t3997080430 * get_recorder_2() const { return ___recorder_2; }
	inline PhotonVoiceRecorder_t3997080430 ** get_address_of_recorder_2() { return &___recorder_2; }
	inline void set_recorder_2(PhotonVoiceRecorder_t3997080430 * value)
	{
		___recorder_2 = value;
		Il2CppCodeGenWriteBarrier(&___recorder_2, value);
	}

	inline static int32_t get_offset_of_rendererComp_3() { return static_cast<int32_t>(offsetof(HighlightRecorder_t2481915234, ___rendererComp_3)); }
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
