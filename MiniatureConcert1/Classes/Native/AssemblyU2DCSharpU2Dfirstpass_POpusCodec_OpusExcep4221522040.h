#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Opu1013124642.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// POpusCodec.OpusException
struct  OpusException_t4221522040  : public Exception_t1927440687
{
public:
	// POpusCodec.Enums.OpusStatusCode POpusCodec.OpusException::_statusCode
	int32_t ____statusCode_11;

public:
	inline static int32_t get_offset_of__statusCode_11() { return static_cast<int32_t>(offsetof(OpusException_t4221522040, ____statusCode_11)); }
	inline int32_t get__statusCode_11() const { return ____statusCode_11; }
	inline int32_t* get_address_of__statusCode_11() { return &____statusCode_11; }
	inline void set__statusCode_11(int32_t value)
	{
		____statusCode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
