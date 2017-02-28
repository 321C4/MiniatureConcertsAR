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

// ExitGames.Client.Photon.LoadBalancing.AuthenticationValues
struct AuthenticationValues_t2603619994;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho4124217555.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::.ctor()
extern "C"  void AuthenticationValues__ctor_m1606871776 (AuthenticationValues_t2603619994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::.ctor(System.String)
extern "C"  void AuthenticationValues__ctor_m1752896666 (AuthenticationValues_t2603619994 * __this, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.LoadBalancing.CustomAuthenticationType ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::get_AuthType()
extern "C"  uint8_t AuthenticationValues_get_AuthType_m757551432 (AuthenticationValues_t2603619994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::set_AuthType(ExitGames.Client.Photon.LoadBalancing.CustomAuthenticationType)
extern "C"  void AuthenticationValues_set_AuthType_m2130209339 (AuthenticationValues_t2603619994 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::get_AuthGetParameters()
extern "C"  String_t* AuthenticationValues_get_AuthGetParameters_m3672165506 (AuthenticationValues_t2603619994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C"  void AuthenticationValues_set_AuthGetParameters_m2691697885 (AuthenticationValues_t2603619994 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::get_AuthPostData()
extern "C"  Il2CppObject * AuthenticationValues_get_AuthPostData_m1789928020 (AuthenticationValues_t2603619994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::set_AuthPostData(System.Object)
extern "C"  void AuthenticationValues_set_AuthPostData_m3851774909 (AuthenticationValues_t2603619994 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::get_Token()
extern "C"  String_t* AuthenticationValues_get_Token_m3374390237 (AuthenticationValues_t2603619994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::set_Token(System.String)
extern "C"  void AuthenticationValues_set_Token_m3023679900 (AuthenticationValues_t2603619994 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::get_UserId()
extern "C"  String_t* AuthenticationValues_get_UserId_m2020992872 (AuthenticationValues_t2603619994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::set_UserId(System.String)
extern "C"  void AuthenticationValues_set_UserId_m21171773 (AuthenticationValues_t2603619994 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::SetAuthPostData(System.String)
extern "C"  void AuthenticationValues_SetAuthPostData_m2918724258 (AuthenticationValues_t2603619994 * __this, String_t* ___stringData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C"  void AuthenticationValues_SetAuthPostData_m2933588915 (AuthenticationValues_t2603619994 * __this, ByteU5BU5D_t3397334013* ___byteData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C"  void AuthenticationValues_AddAuthParameter_m1985015872 (AuthenticationValues_t2603619994 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.LoadBalancing.AuthenticationValues::ToString()
extern "C"  String_t* AuthenticationValues_ToString_m1582397209 (AuthenticationValues_t2603619994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
