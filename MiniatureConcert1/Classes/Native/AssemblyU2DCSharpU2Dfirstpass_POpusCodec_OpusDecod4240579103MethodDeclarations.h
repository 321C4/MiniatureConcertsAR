#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// POpusCodec.OpusDecoder
struct OpusDecoder_t4240579103;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Sam1724360513.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Cha2724365786.h"
#include "mscorlib_System_Nullable_1_gen177890096.h"

// System.Void POpusCodec.OpusDecoder::.ctor(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
extern "C"  void OpusDecoder__ctor_m2874895360 (OpusDecoder_t4240579103 * __this, int32_t ___outputSamplingRateHz0, int32_t ___numChannels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String POpusCodec.OpusDecoder::get_Version()
extern "C"  String_t* OpusDecoder_get_Version_m3787079849 (OpusDecoder_t4240579103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<POpusCodec.Enums.Bandwidth> POpusCodec.OpusDecoder::get_PreviousPacketBandwidth()
extern "C"  Nullable_1_t177890096  OpusDecoder_get_PreviousPacketBandwidth_m592509714 (OpusDecoder_t4240579103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] POpusCodec.OpusDecoder::DecodePacketFloat(System.Byte[])
extern "C"  SingleU5BU5D_t577127397* OpusDecoder_DecodePacketFloat_m1163218206 (OpusDecoder_t4240579103 * __this, ByteU5BU5D_t3397334013* ___packetData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] POpusCodec.OpusDecoder::DecodePacketShort(System.Byte[])
extern "C"  Int16U5BU5D_t3104283263* OpusDecoder_DecodePacketShort_m3575937596 (OpusDecoder_t4240579103 * __this, ByteU5BU5D_t3397334013* ___packetData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusDecoder::Dispose()
extern "C"  void OpusDecoder_Dispose_m3020892232 (OpusDecoder_t4240579103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusDecoder::.cctor()
extern "C"  void OpusDecoder__cctor_m1015924188 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
