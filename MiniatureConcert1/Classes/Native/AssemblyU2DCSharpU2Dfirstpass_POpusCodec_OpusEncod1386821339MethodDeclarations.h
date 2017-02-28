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

// POpusCodec.OpusEncoder
struct OpusEncoder_t1386821339;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Sam1724360513.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Cha2724365786.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Opu1831742255.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Dela980262139.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Ban1914823781.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Com2893002614.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Sig3497228595.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_For1587777763.h"
#include "mscorlib_System_ArraySegment_1_gen2594217482.h"

// System.Void POpusCodec.OpusEncoder::.ctor(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,System.Int32,POpusCodec.Enums.OpusApplicationType,POpusCodec.Enums.Delay)
extern "C"  void OpusEncoder__ctor_m2958016871 (OpusEncoder_t1386821339 * __this, int32_t ___inputSamplingRateHz0, int32_t ___numChannels1, int32_t ___bitrate2, int32_t ___applicationType3, int32_t ___encoderDelay4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.SamplingRate POpusCodec.OpusEncoder::get_InputSamplingRate()
extern "C"  int32_t OpusEncoder_get_InputSamplingRate_m2576322702 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.Channels POpusCodec.OpusEncoder::get_InputChannels()
extern "C"  int32_t OpusEncoder_get_InputChannels_m1543829870 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String POpusCodec.OpusEncoder::get_Version()
extern "C"  String_t* OpusEncoder_get_Version_m1418179579 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_EncoderDelay(POpusCodec.Enums.Delay)
extern "C"  void OpusEncoder_set_EncoderDelay_m2712207187 (OpusEncoder_t1386821339 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.Delay POpusCodec.OpusEncoder::get_EncoderDelay()
extern "C"  int32_t OpusEncoder_get_EncoderDelay_m3790811978 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.OpusEncoder::get_FrameSizePerChannel()
extern "C"  int32_t OpusEncoder_get_FrameSizePerChannel_m438165498 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.OpusEncoder::get_Bitrate()
extern "C"  int32_t OpusEncoder_get_Bitrate_m2968845711 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_Bitrate(System.Int32)
extern "C"  void OpusEncoder_set_Bitrate_m404708714 (OpusEncoder_t1386821339 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.Bandwidth POpusCodec.OpusEncoder::get_MaxBandwidth()
extern "C"  int32_t OpusEncoder_get_MaxBandwidth_m3565723152 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_MaxBandwidth(POpusCodec.Enums.Bandwidth)
extern "C"  void OpusEncoder_set_MaxBandwidth_m1564952775 (OpusEncoder_t1386821339 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.Complexity POpusCodec.OpusEncoder::get_Complexity()
extern "C"  int32_t OpusEncoder_get_Complexity_m3776344728 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_Complexity(POpusCodec.Enums.Complexity)
extern "C"  void OpusEncoder_set_Complexity_m684163743 (OpusEncoder_t1386821339 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.OpusEncoder::get_ExpectedPacketLossPercentage()
extern "C"  int32_t OpusEncoder_get_ExpectedPacketLossPercentage_m2613446643 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_ExpectedPacketLossPercentage(System.Int32)
extern "C"  void OpusEncoder_set_ExpectedPacketLossPercentage_m1517115634 (OpusEncoder_t1386821339 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.SignalHint POpusCodec.OpusEncoder::get_SignalHint()
extern "C"  int32_t OpusEncoder_get_SignalHint_m3085169022 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_SignalHint(POpusCodec.Enums.SignalHint)
extern "C"  void OpusEncoder_set_SignalHint_m3398853087 (OpusEncoder_t1386821339 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.ForceChannels POpusCodec.OpusEncoder::get_ForceChannels()
extern "C"  int32_t OpusEncoder_get_ForceChannels_m4150469358 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_ForceChannels(POpusCodec.Enums.ForceChannels)
extern "C"  void OpusEncoder_set_ForceChannels_m4248578983 (OpusEncoder_t1386821339 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean POpusCodec.OpusEncoder::get_UseInbandFEC()
extern "C"  bool OpusEncoder_get_UseInbandFEC_m1801139161 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_UseInbandFEC(System.Boolean)
extern "C"  void OpusEncoder_set_UseInbandFEC_m881029854 (OpusEncoder_t1386821339 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean POpusCodec.OpusEncoder::get_UseUnconstrainedVBR()
extern "C"  bool OpusEncoder_get_UseUnconstrainedVBR_m1905660910 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_UseUnconstrainedVBR(System.Boolean)
extern "C"  void OpusEncoder_set_UseUnconstrainedVBR_m3194275533 (OpusEncoder_t1386821339 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean POpusCodec.OpusEncoder::get_DtxEnabled()
extern "C"  bool OpusEncoder_get_DtxEnabled_m1993902737 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::set_DtxEnabled(System.Boolean)
extern "C"  void OpusEncoder_set_DtxEnabled_m1925449356 (OpusEncoder_t1386821339 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::Encode(System.Single[])
extern "C"  ArraySegment_1_t2594217482  OpusEncoder_Encode_m590366398 (OpusEncoder_t1386821339 * __this, SingleU5BU5D_t577127397* ___pcmSamples0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::Encode(System.Int16[])
extern "C"  ArraySegment_1_t2594217482  OpusEncoder_Encode_m4088819074 (OpusEncoder_t1386821339 * __this, Int16U5BU5D_t3104283263* ___pcmSamples0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::Dispose()
extern "C"  void OpusEncoder_Dispose_m1203301812 (OpusEncoder_t1386821339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.OpusEncoder::.cctor()
extern "C"  void OpusEncoder__cctor_m110411228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
