#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Voice.IAudioStream`1<System.Int16>
struct IAudioStream_1_t1422610889;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// ExitGames.Client.Photon.Voice.VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t1296419034;
// ExitGames.Client.Photon.Voice.LevelMeter`1<System.Int16>
struct LevelMeter_1_t852280549;

#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho3474856357.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LocalVoice`1<System.Int16>
struct  LocalVoice_1_t1431365289  : public LocalVoice_t3474856357
{
public:
	// ExitGames.Client.Photon.Voice.IAudioStream`1<T> ExitGames.Client.Photon.Voice.LocalVoice`1::audioStream
	Il2CppObject* ___audioStream_15;
	// T[] ExitGames.Client.Photon.Voice.LocalVoice`1::frameBuffer
	Int16U5BU5D_t3104283263* ___frameBuffer_16;
	// T[] ExitGames.Client.Photon.Voice.LocalVoice`1::sourceFrameBuffer
	Int16U5BU5D_t3104283263* ___sourceFrameBuffer_17;
	// ExitGames.Client.Photon.Voice.VoiceDetector`1<T> ExitGames.Client.Photon.Voice.LocalVoice`1::voiceDetector
	VoiceDetector_1_t1296419034 * ___voiceDetector_18;
	// ExitGames.Client.Photon.Voice.LevelMeter`1<T> ExitGames.Client.Photon.Voice.LocalVoice`1::levelMeter
	LevelMeter_1_t852280549 * ___levelMeter_19;

public:
	inline static int32_t get_offset_of_audioStream_15() { return static_cast<int32_t>(offsetof(LocalVoice_1_t1431365289, ___audioStream_15)); }
	inline Il2CppObject* get_audioStream_15() const { return ___audioStream_15; }
	inline Il2CppObject** get_address_of_audioStream_15() { return &___audioStream_15; }
	inline void set_audioStream_15(Il2CppObject* value)
	{
		___audioStream_15 = value;
		Il2CppCodeGenWriteBarrier(&___audioStream_15, value);
	}

	inline static int32_t get_offset_of_frameBuffer_16() { return static_cast<int32_t>(offsetof(LocalVoice_1_t1431365289, ___frameBuffer_16)); }
	inline Int16U5BU5D_t3104283263* get_frameBuffer_16() const { return ___frameBuffer_16; }
	inline Int16U5BU5D_t3104283263** get_address_of_frameBuffer_16() { return &___frameBuffer_16; }
	inline void set_frameBuffer_16(Int16U5BU5D_t3104283263* value)
	{
		___frameBuffer_16 = value;
		Il2CppCodeGenWriteBarrier(&___frameBuffer_16, value);
	}

	inline static int32_t get_offset_of_sourceFrameBuffer_17() { return static_cast<int32_t>(offsetof(LocalVoice_1_t1431365289, ___sourceFrameBuffer_17)); }
	inline Int16U5BU5D_t3104283263* get_sourceFrameBuffer_17() const { return ___sourceFrameBuffer_17; }
	inline Int16U5BU5D_t3104283263** get_address_of_sourceFrameBuffer_17() { return &___sourceFrameBuffer_17; }
	inline void set_sourceFrameBuffer_17(Int16U5BU5D_t3104283263* value)
	{
		___sourceFrameBuffer_17 = value;
		Il2CppCodeGenWriteBarrier(&___sourceFrameBuffer_17, value);
	}

	inline static int32_t get_offset_of_voiceDetector_18() { return static_cast<int32_t>(offsetof(LocalVoice_1_t1431365289, ___voiceDetector_18)); }
	inline VoiceDetector_1_t1296419034 * get_voiceDetector_18() const { return ___voiceDetector_18; }
	inline VoiceDetector_1_t1296419034 ** get_address_of_voiceDetector_18() { return &___voiceDetector_18; }
	inline void set_voiceDetector_18(VoiceDetector_1_t1296419034 * value)
	{
		___voiceDetector_18 = value;
		Il2CppCodeGenWriteBarrier(&___voiceDetector_18, value);
	}

	inline static int32_t get_offset_of_levelMeter_19() { return static_cast<int32_t>(offsetof(LocalVoice_1_t1431365289, ___levelMeter_19)); }
	inline LevelMeter_1_t852280549 * get_levelMeter_19() const { return ___levelMeter_19; }
	inline LevelMeter_1_t852280549 ** get_address_of_levelMeter_19() { return &___levelMeter_19; }
	inline void set_levelMeter_19(LevelMeter_1_t852280549 * value)
	{
		___levelMeter_19 = value;
		Il2CppCodeGenWriteBarrier(&___levelMeter_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
