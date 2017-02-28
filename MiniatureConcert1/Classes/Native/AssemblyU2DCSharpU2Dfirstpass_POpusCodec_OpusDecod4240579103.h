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
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Nullable_1_gen177890096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// POpusCodec.OpusDecoder
struct  OpusDecoder_t4240579103  : public Il2CppObject
{
public:
	// System.IntPtr POpusCodec.OpusDecoder::_handle
	IntPtr_t ____handle_0;
	// System.String POpusCodec.OpusDecoder::_version
	String_t* ____version_1;
	// System.Boolean POpusCodec.OpusDecoder::_previousPacketInvalid
	bool ____previousPacketInvalid_3;
	// System.Int32 POpusCodec.OpusDecoder::_channelCount
	int32_t ____channelCount_4;
	// System.Nullable`1<POpusCodec.Enums.Bandwidth> POpusCodec.OpusDecoder::_previousPacketBandwidth
	Nullable_1_t177890096  ____previousPacketBandwidth_7;
	// System.Single[] POpusCodec.OpusDecoder::bufferFloat
	SingleU5BU5D_t577127397* ___bufferFloat_8;
	// System.Int16[] POpusCodec.OpusDecoder::bufferShort
	Int16U5BU5D_t3104283263* ___bufferShort_9;

public:
	inline static int32_t get_offset_of__handle_0() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103, ____handle_0)); }
	inline IntPtr_t get__handle_0() const { return ____handle_0; }
	inline IntPtr_t* get_address_of__handle_0() { return &____handle_0; }
	inline void set__handle_0(IntPtr_t value)
	{
		____handle_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103, ____version_1)); }
	inline String_t* get__version_1() const { return ____version_1; }
	inline String_t** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(String_t* value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier(&____version_1, value);
	}

	inline static int32_t get_offset_of__previousPacketInvalid_3() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103, ____previousPacketInvalid_3)); }
	inline bool get__previousPacketInvalid_3() const { return ____previousPacketInvalid_3; }
	inline bool* get_address_of__previousPacketInvalid_3() { return &____previousPacketInvalid_3; }
	inline void set__previousPacketInvalid_3(bool value)
	{
		____previousPacketInvalid_3 = value;
	}

	inline static int32_t get_offset_of__channelCount_4() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103, ____channelCount_4)); }
	inline int32_t get__channelCount_4() const { return ____channelCount_4; }
	inline int32_t* get_address_of__channelCount_4() { return &____channelCount_4; }
	inline void set__channelCount_4(int32_t value)
	{
		____channelCount_4 = value;
	}

	inline static int32_t get_offset_of__previousPacketBandwidth_7() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103, ____previousPacketBandwidth_7)); }
	inline Nullable_1_t177890096  get__previousPacketBandwidth_7() const { return ____previousPacketBandwidth_7; }
	inline Nullable_1_t177890096 * get_address_of__previousPacketBandwidth_7() { return &____previousPacketBandwidth_7; }
	inline void set__previousPacketBandwidth_7(Nullable_1_t177890096  value)
	{
		____previousPacketBandwidth_7 = value;
	}

	inline static int32_t get_offset_of_bufferFloat_8() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103, ___bufferFloat_8)); }
	inline SingleU5BU5D_t577127397* get_bufferFloat_8() const { return ___bufferFloat_8; }
	inline SingleU5BU5D_t577127397** get_address_of_bufferFloat_8() { return &___bufferFloat_8; }
	inline void set_bufferFloat_8(SingleU5BU5D_t577127397* value)
	{
		___bufferFloat_8 = value;
		Il2CppCodeGenWriteBarrier(&___bufferFloat_8, value);
	}

	inline static int32_t get_offset_of_bufferShort_9() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103, ___bufferShort_9)); }
	inline Int16U5BU5D_t3104283263* get_bufferShort_9() const { return ___bufferShort_9; }
	inline Int16U5BU5D_t3104283263** get_address_of_bufferShort_9() { return &___bufferShort_9; }
	inline void set_bufferShort_9(Int16U5BU5D_t3104283263* value)
	{
		___bufferShort_9 = value;
		Il2CppCodeGenWriteBarrier(&___bufferShort_9, value);
	}
};

struct OpusDecoder_t4240579103_StaticFields
{
public:
	// System.Single[] POpusCodec.OpusDecoder::EmptyBufferFloat
	SingleU5BU5D_t577127397* ___EmptyBufferFloat_5;
	// System.Int16[] POpusCodec.OpusDecoder::EmptyBufferShort
	Int16U5BU5D_t3104283263* ___EmptyBufferShort_6;

public:
	inline static int32_t get_offset_of_EmptyBufferFloat_5() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103_StaticFields, ___EmptyBufferFloat_5)); }
	inline SingleU5BU5D_t577127397* get_EmptyBufferFloat_5() const { return ___EmptyBufferFloat_5; }
	inline SingleU5BU5D_t577127397** get_address_of_EmptyBufferFloat_5() { return &___EmptyBufferFloat_5; }
	inline void set_EmptyBufferFloat_5(SingleU5BU5D_t577127397* value)
	{
		___EmptyBufferFloat_5 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyBufferFloat_5, value);
	}

	inline static int32_t get_offset_of_EmptyBufferShort_6() { return static_cast<int32_t>(offsetof(OpusDecoder_t4240579103_StaticFields, ___EmptyBufferShort_6)); }
	inline Int16U5BU5D_t3104283263* get_EmptyBufferShort_6() const { return ___EmptyBufferShort_6; }
	inline Int16U5BU5D_t3104283263** get_address_of_EmptyBufferShort_6() { return &___EmptyBufferShort_6; }
	inline void set_EmptyBufferShort_6(Int16U5BU5D_t3104283263* value)
	{
		___EmptyBufferShort_6 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyBufferShort_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
