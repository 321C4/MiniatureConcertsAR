﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonHandler
struct PhotonHandler_t3957736394;
// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1903595547;
// System.Func`1<System.Boolean>
struct Func_1_t1485000104;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "AssemblyU2DCSharp_CloudRegionCode989201940.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonHandler
struct  PhotonHandler_t3957736394  : public MonoBehaviour_t3914164484
{
public:
	// System.Int32 PhotonHandler::updateInterval
	int32_t ___updateInterval_4;
	// System.Int32 PhotonHandler::updateIntervalOnSerialize
	int32_t ___updateIntervalOnSerialize_5;
	// System.Int32 PhotonHandler::nextSendTickCount
	int32_t ___nextSendTickCount_6;
	// System.Int32 PhotonHandler::nextSendTickCountOnSerialize
	int32_t ___nextSendTickCountOnSerialize_7;

public:
	inline static int32_t get_offset_of_updateInterval_4() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394, ___updateInterval_4)); }
	inline int32_t get_updateInterval_4() const { return ___updateInterval_4; }
	inline int32_t* get_address_of_updateInterval_4() { return &___updateInterval_4; }
	inline void set_updateInterval_4(int32_t value)
	{
		___updateInterval_4 = value;
	}

	inline static int32_t get_offset_of_updateIntervalOnSerialize_5() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394, ___updateIntervalOnSerialize_5)); }
	inline int32_t get_updateIntervalOnSerialize_5() const { return ___updateIntervalOnSerialize_5; }
	inline int32_t* get_address_of_updateIntervalOnSerialize_5() { return &___updateIntervalOnSerialize_5; }
	inline void set_updateIntervalOnSerialize_5(int32_t value)
	{
		___updateIntervalOnSerialize_5 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_6() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394, ___nextSendTickCount_6)); }
	inline int32_t get_nextSendTickCount_6() const { return ___nextSendTickCount_6; }
	inline int32_t* get_address_of_nextSendTickCount_6() { return &___nextSendTickCount_6; }
	inline void set_nextSendTickCount_6(int32_t value)
	{
		___nextSendTickCount_6 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCountOnSerialize_7() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394, ___nextSendTickCountOnSerialize_7)); }
	inline int32_t get_nextSendTickCountOnSerialize_7() const { return ___nextSendTickCountOnSerialize_7; }
	inline int32_t* get_address_of_nextSendTickCountOnSerialize_7() { return &___nextSendTickCountOnSerialize_7; }
	inline void set_nextSendTickCountOnSerialize_7(int32_t value)
	{
		___nextSendTickCountOnSerialize_7 = value;
	}
};

struct PhotonHandler_t3957736394_StaticFields
{
public:
	// PhotonHandler PhotonHandler::SP
	PhotonHandler_t3957736394 * ___SP_3;
	// System.Boolean PhotonHandler::sendThreadShouldRun
	bool ___sendThreadShouldRun_8;
	// System.Diagnostics.Stopwatch PhotonHandler::timerToStopConnectionInBackground
	Stopwatch_t1380178105 * ___timerToStopConnectionInBackground_9;
	// System.Boolean PhotonHandler::AppQuits
	bool ___AppQuits_10;
	// System.Type PhotonHandler::PingImplementation
	Type_t * ___PingImplementation_11;
	// CloudRegionCode PhotonHandler::BestRegionCodeCurrently
	int32_t ___BestRegionCodeCurrently_13;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> PhotonHandler::<>f__am$cache0
	UnityAction_2_t1903595547 * ___U3CU3Ef__amU24cache0_14;
	// System.Func`1<System.Boolean> PhotonHandler::<>f__mg$cache0
	Func_1_t1485000104 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_SP_3() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___SP_3)); }
	inline PhotonHandler_t3957736394 * get_SP_3() const { return ___SP_3; }
	inline PhotonHandler_t3957736394 ** get_address_of_SP_3() { return &___SP_3; }
	inline void set_SP_3(PhotonHandler_t3957736394 * value)
	{
		___SP_3 = value;
		Il2CppCodeGenWriteBarrier(&___SP_3, value);
	}

	inline static int32_t get_offset_of_sendThreadShouldRun_8() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___sendThreadShouldRun_8)); }
	inline bool get_sendThreadShouldRun_8() const { return ___sendThreadShouldRun_8; }
	inline bool* get_address_of_sendThreadShouldRun_8() { return &___sendThreadShouldRun_8; }
	inline void set_sendThreadShouldRun_8(bool value)
	{
		___sendThreadShouldRun_8 = value;
	}

	inline static int32_t get_offset_of_timerToStopConnectionInBackground_9() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___timerToStopConnectionInBackground_9)); }
	inline Stopwatch_t1380178105 * get_timerToStopConnectionInBackground_9() const { return ___timerToStopConnectionInBackground_9; }
	inline Stopwatch_t1380178105 ** get_address_of_timerToStopConnectionInBackground_9() { return &___timerToStopConnectionInBackground_9; }
	inline void set_timerToStopConnectionInBackground_9(Stopwatch_t1380178105 * value)
	{
		___timerToStopConnectionInBackground_9 = value;
		Il2CppCodeGenWriteBarrier(&___timerToStopConnectionInBackground_9, value);
	}

	inline static int32_t get_offset_of_AppQuits_10() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___AppQuits_10)); }
	inline bool get_AppQuits_10() const { return ___AppQuits_10; }
	inline bool* get_address_of_AppQuits_10() { return &___AppQuits_10; }
	inline void set_AppQuits_10(bool value)
	{
		___AppQuits_10 = value;
	}

	inline static int32_t get_offset_of_PingImplementation_11() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___PingImplementation_11)); }
	inline Type_t * get_PingImplementation_11() const { return ___PingImplementation_11; }
	inline Type_t ** get_address_of_PingImplementation_11() { return &___PingImplementation_11; }
	inline void set_PingImplementation_11(Type_t * value)
	{
		___PingImplementation_11 = value;
		Il2CppCodeGenWriteBarrier(&___PingImplementation_11, value);
	}

	inline static int32_t get_offset_of_BestRegionCodeCurrently_13() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___BestRegionCodeCurrently_13)); }
	inline int32_t get_BestRegionCodeCurrently_13() const { return ___BestRegionCodeCurrently_13; }
	inline int32_t* get_address_of_BestRegionCodeCurrently_13() { return &___BestRegionCodeCurrently_13; }
	inline void set_BestRegionCodeCurrently_13(int32_t value)
	{
		___BestRegionCodeCurrently_13 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_14() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___U3CU3Ef__amU24cache0_14)); }
	inline UnityAction_2_t1903595547 * get_U3CU3Ef__amU24cache0_14() const { return ___U3CU3Ef__amU24cache0_14; }
	inline UnityAction_2_t1903595547 ** get_address_of_U3CU3Ef__amU24cache0_14() { return &___U3CU3Ef__amU24cache0_14; }
	inline void set_U3CU3Ef__amU24cache0_14(UnityAction_2_t1903595547 * value)
	{
		___U3CU3Ef__amU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Func_1_t1485000104 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Func_1_t1485000104 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Func_1_t1485000104 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
