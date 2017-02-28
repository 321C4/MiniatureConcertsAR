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

// MicWrapper
struct MicWrapper_t4021774926;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void MicWrapper::.ctor(System.String,System.Int32)
extern "C"  void MicWrapper__ctor_m1958168336 (MicWrapper_t4021774926 * __this, String_t* ___device0, int32_t ___suggestedFrequency1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MicWrapper::Dispose()
extern "C"  void MicWrapper_Dispose_m3195937412 (MicWrapper_t4021774926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MicWrapper::get_SamplingRate()
extern "C"  int32_t MicWrapper_get_SamplingRate_m1787229149 (MicWrapper_t4021774926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MicWrapper::get_Channels()
extern "C"  int32_t MicWrapper_get_Channels_m805240058 (MicWrapper_t4021774926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MicWrapper::GetData(System.Single[])
extern "C"  bool MicWrapper_GetData_m3453840404 (MicWrapper_t4021774926 * __this, SingleU5BU5D_t577127397* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
