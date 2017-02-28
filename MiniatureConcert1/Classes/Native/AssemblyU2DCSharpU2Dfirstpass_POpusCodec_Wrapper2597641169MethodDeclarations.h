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

// POpusCodec.Wrapper
struct Wrapper_t2597641169;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Cha2724365786.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Opu1013124642.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Sam1724360513.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Opu1831742255.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Opu1329269313.h"
#include "AssemblyU2DCSharpU2Dfirstpass_POpusCodec_Enums_Opu1315908173.h"

// System.Void POpusCodec.Wrapper::.ctor()
extern "C"  void Wrapper__ctor_m2877001287 (Wrapper_t2597641169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_encoder_get_size(POpusCodec.Enums.Channels)
extern "C"  int32_t Wrapper_opus_encoder_get_size_m1258208747 (Il2CppObject * __this /* static, unused */, int32_t ___channels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.OpusStatusCode POpusCodec.Wrapper::opus_encoder_init(System.IntPtr,POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,POpusCodec.Enums.OpusApplicationType)
extern "C"  int32_t Wrapper_opus_encoder_init_m15560055 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___Fs1, int32_t ___channels2, int32_t ___application3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr POpusCodec.Wrapper::opus_get_version_string()
extern "C"  IntPtr_t Wrapper_opus_get_version_string_m1473983917 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Int16[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Wrapper_opus_encode_m52685205 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, Int16U5BU5D_t3104283263* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_t3397334013* ___data3, int32_t ___max_data_bytes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_encode_float(System.IntPtr,System.Single[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Wrapper_opus_encode_float_m3301075186 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, SingleU5BU5D_t577127397* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_t3397334013* ___data3, int32_t ___max_data_bytes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_encoder_ctl_set(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
extern "C"  int32_t Wrapper_opus_encoder_ctl_set_m1615502419 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___request1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_encoder_ctl_get(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest,System.Int32&)
extern "C"  int32_t Wrapper_opus_encoder_ctl_get_m1103128133 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___request1, int32_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_decoder_ctl_set(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
extern "C"  int32_t Wrapper_opus_decoder_ctl_set_m4146398121 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___request1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_decoder_ctl_get(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest,System.Int32&)
extern "C"  int32_t Wrapper_opus_decoder_ctl_get_m3867966095 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___request1, int32_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_decoder_get_size(POpusCodec.Enums.Channels)
extern "C"  int32_t Wrapper_opus_decoder_get_size_m885163317 (Il2CppObject * __this /* static, unused */, int32_t ___channels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// POpusCodec.Enums.OpusStatusCode POpusCodec.Wrapper::opus_decoder_init(System.IntPtr,POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
extern "C"  int32_t Wrapper_opus_decoder_init_m2606826805 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___Fs1, int32_t ___channels2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,System.Byte[],System.Int32,System.Int16[],System.Int32,System.Int32)
extern "C"  int32_t Wrapper_opus_decode_m2633376548 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, ByteU5BU5D_t3397334013* ___data1, int32_t ___len2, Int16U5BU5D_t3104283263* ___pcm3, int32_t ___frame_size4, int32_t ___decode_fec5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_decode_float(System.IntPtr,System.Byte[],System.Int32,System.Single[],System.Int32,System.Int32)
extern "C"  int32_t Wrapper_opus_decode_float_m49627027 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, ByteU5BU5D_t3397334013* ___data1, int32_t ___len2, SingleU5BU5D_t577127397* ___pcm3, int32_t ___frame_size4, int32_t ___decode_fec5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_packet_get_bandwidth(System.Byte[])
extern "C"  int32_t Wrapper_opus_packet_get_bandwidth_m3613265897 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_packet_get_nb_channels(System.Byte[])
extern "C"  int32_t Wrapper_opus_packet_get_nb_channels_m3496370129 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr POpusCodec.Wrapper::opus_strerror(POpusCodec.Enums.OpusStatusCode)
extern "C"  IntPtr_t Wrapper_opus_strerror_m1319147986 (Il2CppObject * __this /* static, unused */, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr POpusCodec.Wrapper::opus_encoder_create(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,POpusCodec.Enums.OpusApplicationType)
extern "C"  IntPtr_t Wrapper_opus_encoder_create_m1464755408 (Il2CppObject * __this /* static, unused */, int32_t ___Fs0, int32_t ___channels1, int32_t ___application2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Int16[],System.Int32,System.Byte[])
extern "C"  int32_t Wrapper_opus_encode_m577238578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, Int16U5BU5D_t3104283263* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_t3397334013* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Single[],System.Int32,System.Byte[])
extern "C"  int32_t Wrapper_opus_encode_m3033062402 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, SingleU5BU5D_t577127397* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_t3397334013* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.Wrapper::opus_encoder_destroy(System.IntPtr)
extern "C"  void Wrapper_opus_encoder_destroy_m625817532 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::get_opus_encoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest)
extern "C"  int32_t Wrapper_get_opus_encoder_ctl_m2810746622 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.Wrapper::set_opus_encoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
extern "C"  void Wrapper_set_opus_encoder_ctl_m3840159733 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___request1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::get_opus_decoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest)
extern "C"  int32_t Wrapper_get_opus_decoder_ctl_m172931426 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.Wrapper::set_opus_decoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
extern "C"  void Wrapper_set_opus_decoder_ctl_m2527606227 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, int32_t ___request1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr POpusCodec.Wrapper::opus_decoder_create(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
extern "C"  IntPtr_t Wrapper_opus_decoder_create_m58742900 (Il2CppObject * __this /* static, unused */, int32_t ___Fs0, int32_t ___channels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.Wrapper::opus_decoder_destroy(System.IntPtr)
extern "C"  void Wrapper_opus_decoder_destroy_m2431554144 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,System.Byte[],System.Int16[],System.Int32,System.Int32)
extern "C"  int32_t Wrapper_opus_decode_m681748887 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, ByteU5BU5D_t3397334013* ___data1, Int16U5BU5D_t3104283263* ___pcm2, int32_t ___decode_fec3, int32_t ___channels4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,System.Byte[],System.Single[],System.Int32,System.Int32)
extern "C"  int32_t Wrapper_opus_decode_m2794170649 (Il2CppObject * __this /* static, unused */, IntPtr_t ___st0, ByteU5BU5D_t3397334013* ___data1, SingleU5BU5D_t577127397* ___pcm2, int32_t ___decode_fec3, int32_t ___channels4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void POpusCodec.Wrapper::HandleStatusCode(POpusCodec.Enums.OpusStatusCode)
extern "C"  void Wrapper_HandleStatusCode_m177204075 (Il2CppObject * __this /* static, unused */, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
