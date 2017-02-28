#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Voice.LevelMeter`1<System.Object>
struct  LevelMeter_1_t3795451226  : public Il2CppObject
{
public:
	// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1::ampSum
	float ___ampSum_0;
	// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1::ampPeak
	float ___ampPeak_1;
	// System.Int32 ExitGames.Client.Photon.Voice.LevelMeter`1::bufferSize
	int32_t ___bufferSize_2;
	// System.Single[] ExitGames.Client.Photon.Voice.LevelMeter`1::buffer
	SingleU5BU5D_t577127397* ___buffer_3;
	// System.Int32 ExitGames.Client.Photon.Voice.LevelMeter`1::prevValuesPtr
	int32_t ___prevValuesPtr_4;
	// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1::accumAvgPeakAmpSum
	float ___accumAvgPeakAmpSum_5;
	// System.Int32 ExitGames.Client.Photon.Voice.LevelMeter`1::accumAvgPeakAmpCount
	int32_t ___accumAvgPeakAmpCount_6;
	// System.Single ExitGames.Client.Photon.Voice.LevelMeter`1::<CurrentPeakAmp>k__BackingField
	float ___U3CCurrentPeakAmpU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_ampSum_0() { return static_cast<int32_t>(offsetof(LevelMeter_1_t3795451226, ___ampSum_0)); }
	inline float get_ampSum_0() const { return ___ampSum_0; }
	inline float* get_address_of_ampSum_0() { return &___ampSum_0; }
	inline void set_ampSum_0(float value)
	{
		___ampSum_0 = value;
	}

	inline static int32_t get_offset_of_ampPeak_1() { return static_cast<int32_t>(offsetof(LevelMeter_1_t3795451226, ___ampPeak_1)); }
	inline float get_ampPeak_1() const { return ___ampPeak_1; }
	inline float* get_address_of_ampPeak_1() { return &___ampPeak_1; }
	inline void set_ampPeak_1(float value)
	{
		___ampPeak_1 = value;
	}

	inline static int32_t get_offset_of_bufferSize_2() { return static_cast<int32_t>(offsetof(LevelMeter_1_t3795451226, ___bufferSize_2)); }
	inline int32_t get_bufferSize_2() const { return ___bufferSize_2; }
	inline int32_t* get_address_of_bufferSize_2() { return &___bufferSize_2; }
	inline void set_bufferSize_2(int32_t value)
	{
		___bufferSize_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(LevelMeter_1_t3795451226, ___buffer_3)); }
	inline SingleU5BU5D_t577127397* get_buffer_3() const { return ___buffer_3; }
	inline SingleU5BU5D_t577127397** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(SingleU5BU5D_t577127397* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_3, value);
	}

	inline static int32_t get_offset_of_prevValuesPtr_4() { return static_cast<int32_t>(offsetof(LevelMeter_1_t3795451226, ___prevValuesPtr_4)); }
	inline int32_t get_prevValuesPtr_4() const { return ___prevValuesPtr_4; }
	inline int32_t* get_address_of_prevValuesPtr_4() { return &___prevValuesPtr_4; }
	inline void set_prevValuesPtr_4(int32_t value)
	{
		___prevValuesPtr_4 = value;
	}

	inline static int32_t get_offset_of_accumAvgPeakAmpSum_5() { return static_cast<int32_t>(offsetof(LevelMeter_1_t3795451226, ___accumAvgPeakAmpSum_5)); }
	inline float get_accumAvgPeakAmpSum_5() const { return ___accumAvgPeakAmpSum_5; }
	inline float* get_address_of_accumAvgPeakAmpSum_5() { return &___accumAvgPeakAmpSum_5; }
	inline void set_accumAvgPeakAmpSum_5(float value)
	{
		___accumAvgPeakAmpSum_5 = value;
	}

	inline static int32_t get_offset_of_accumAvgPeakAmpCount_6() { return static_cast<int32_t>(offsetof(LevelMeter_1_t3795451226, ___accumAvgPeakAmpCount_6)); }
	inline int32_t get_accumAvgPeakAmpCount_6() const { return ___accumAvgPeakAmpCount_6; }
	inline int32_t* get_address_of_accumAvgPeakAmpCount_6() { return &___accumAvgPeakAmpCount_6; }
	inline void set_accumAvgPeakAmpCount_6(int32_t value)
	{
		___accumAvgPeakAmpCount_6 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentPeakAmpU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LevelMeter_1_t3795451226, ___U3CCurrentPeakAmpU3Ek__BackingField_7)); }
	inline float get_U3CCurrentPeakAmpU3Ek__BackingField_7() const { return ___U3CCurrentPeakAmpU3Ek__BackingField_7; }
	inline float* get_address_of_U3CCurrentPeakAmpU3Ek__BackingField_7() { return &___U3CCurrentPeakAmpU3Ek__BackingField_7; }
	inline void set_U3CCurrentPeakAmpU3Ek__BackingField_7(float value)
	{
		___U3CCurrentPeakAmpU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
