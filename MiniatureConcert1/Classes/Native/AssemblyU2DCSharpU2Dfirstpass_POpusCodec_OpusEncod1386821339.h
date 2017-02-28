#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Sam1724360513.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Cha2724365786.h"
#include "mscorlib_System_ArraySegment_1_gen2594217482.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Dela980262139.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// POpusCodec.OpusEncoder
struct  OpusEncoder_t1386821339  : public Il2CppObject
{
public:
	// System.IntPtr POpusCodec.OpusEncoder::_handle
	IntPtr_t ____handle_1;
	// System.String POpusCodec.OpusEncoder::_version
	String_t* ____version_2;
	// System.Int32 POpusCodec.OpusEncoder::_frameSizePerChannel
	int32_t ____frameSizePerChannel_4;
	// POpusCodec.Enums.SamplingRate POpusCodec.OpusEncoder::_inputSamplingRate
	int32_t ____inputSamplingRate_5;
	// POpusCodec.Enums.Channels POpusCodec.OpusEncoder::_inputChannels
	int32_t ____inputChannels_6;
	// System.Byte[] POpusCodec.OpusEncoder::writePacket
	ByteU5BU5D_t3397334013* ___writePacket_7;
	// POpusCodec.Enums.Delay POpusCodec.OpusEncoder::_encoderDelay
	int32_t ____encoderDelay_9;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(OpusEncoder_t1386821339, ____handle_1)); }
	inline IntPtr_t get__handle_1() const { return ____handle_1; }
	inline IntPtr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(IntPtr_t value)
	{
		____handle_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(OpusEncoder_t1386821339, ____version_2)); }
	inline String_t* get__version_2() const { return ____version_2; }
	inline String_t** get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(String_t* value)
	{
		____version_2 = value;
		Il2CppCodeGenWriteBarrier(&____version_2, value);
	}

	inline static int32_t get_offset_of__frameSizePerChannel_4() { return static_cast<int32_t>(offsetof(OpusEncoder_t1386821339, ____frameSizePerChannel_4)); }
	inline int32_t get__frameSizePerChannel_4() const { return ____frameSizePerChannel_4; }
	inline int32_t* get_address_of__frameSizePerChannel_4() { return &____frameSizePerChannel_4; }
	inline void set__frameSizePerChannel_4(int32_t value)
	{
		____frameSizePerChannel_4 = value;
	}

	inline static int32_t get_offset_of__inputSamplingRate_5() { return static_cast<int32_t>(offsetof(OpusEncoder_t1386821339, ____inputSamplingRate_5)); }
	inline int32_t get__inputSamplingRate_5() const { return ____inputSamplingRate_5; }
	inline int32_t* get_address_of__inputSamplingRate_5() { return &____inputSamplingRate_5; }
	inline void set__inputSamplingRate_5(int32_t value)
	{
		____inputSamplingRate_5 = value;
	}

	inline static int32_t get_offset_of__inputChannels_6() { return static_cast<int32_t>(offsetof(OpusEncoder_t1386821339, ____inputChannels_6)); }
	inline int32_t get__inputChannels_6() const { return ____inputChannels_6; }
	inline int32_t* get_address_of__inputChannels_6() { return &____inputChannels_6; }
	inline void set__inputChannels_6(int32_t value)
	{
		____inputChannels_6 = value;
	}

	inline static int32_t get_offset_of_writePacket_7() { return static_cast<int32_t>(offsetof(OpusEncoder_t1386821339, ___writePacket_7)); }
	inline ByteU5BU5D_t3397334013* get_writePacket_7() const { return ___writePacket_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_writePacket_7() { return &___writePacket_7; }
	inline void set_writePacket_7(ByteU5BU5D_t3397334013* value)
	{
		___writePacket_7 = value;
		Il2CppCodeGenWriteBarrier(&___writePacket_7, value);
	}

	inline static int32_t get_offset_of__encoderDelay_9() { return static_cast<int32_t>(offsetof(OpusEncoder_t1386821339, ____encoderDelay_9)); }
	inline int32_t get__encoderDelay_9() const { return ____encoderDelay_9; }
	inline int32_t* get_address_of__encoderDelay_9() { return &____encoderDelay_9; }
	inline void set__encoderDelay_9(int32_t value)
	{
		____encoderDelay_9 = value;
	}
};

struct OpusEncoder_t1386821339_StaticFields
{
public:
	// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::EmptyBuffer
	ArraySegment_1_t2594217482  ___EmptyBuffer_8;

public:
	inline static int32_t get_offset_of_EmptyBuffer_8() { return static_cast<int32_t>(offsetof(OpusEncoder_t1386821339_StaticFields, ___EmptyBuffer_8)); }
	inline ArraySegment_1_t2594217482  get_EmptyBuffer_8() const { return ___EmptyBuffer_8; }
	inline ArraySegment_1_t2594217482 * get_address_of_EmptyBuffer_8() { return &___EmptyBuffer_8; }
	inline void set_EmptyBuffer_8(ArraySegment_1_t2594217482  value)
	{
		___EmptyBuffer_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
