#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewDrag
struct  ViewDrag_t1752703299  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 ViewDrag::hit_position
	Vector3_t2243707580  ___hit_position_2;
	// UnityEngine.Vector3 ViewDrag::current_position
	Vector3_t2243707580  ___current_position_3;
	// UnityEngine.Vector3 ViewDrag::camera_position
	Vector3_t2243707580  ___camera_position_4;
	// System.Boolean ViewDrag::invert
	bool ___invert_5;
	// System.Boolean ViewDrag::yBecomesZ
	bool ___yBecomesZ_6;
	// System.Single ViewDrag::speed
	float ___speed_7;

public:
	inline static int32_t get_offset_of_hit_position_2() { return static_cast<int32_t>(offsetof(ViewDrag_t1752703299, ___hit_position_2)); }
	inline Vector3_t2243707580  get_hit_position_2() const { return ___hit_position_2; }
	inline Vector3_t2243707580 * get_address_of_hit_position_2() { return &___hit_position_2; }
	inline void set_hit_position_2(Vector3_t2243707580  value)
	{
		___hit_position_2 = value;
	}

	inline static int32_t get_offset_of_current_position_3() { return static_cast<int32_t>(offsetof(ViewDrag_t1752703299, ___current_position_3)); }
	inline Vector3_t2243707580  get_current_position_3() const { return ___current_position_3; }
	inline Vector3_t2243707580 * get_address_of_current_position_3() { return &___current_position_3; }
	inline void set_current_position_3(Vector3_t2243707580  value)
	{
		___current_position_3 = value;
	}

	inline static int32_t get_offset_of_camera_position_4() { return static_cast<int32_t>(offsetof(ViewDrag_t1752703299, ___camera_position_4)); }
	inline Vector3_t2243707580  get_camera_position_4() const { return ___camera_position_4; }
	inline Vector3_t2243707580 * get_address_of_camera_position_4() { return &___camera_position_4; }
	inline void set_camera_position_4(Vector3_t2243707580  value)
	{
		___camera_position_4 = value;
	}

	inline static int32_t get_offset_of_invert_5() { return static_cast<int32_t>(offsetof(ViewDrag_t1752703299, ___invert_5)); }
	inline bool get_invert_5() const { return ___invert_5; }
	inline bool* get_address_of_invert_5() { return &___invert_5; }
	inline void set_invert_5(bool value)
	{
		___invert_5 = value;
	}

	inline static int32_t get_offset_of_yBecomesZ_6() { return static_cast<int32_t>(offsetof(ViewDrag_t1752703299, ___yBecomesZ_6)); }
	inline bool get_yBecomesZ_6() const { return ___yBecomesZ_6; }
	inline bool* get_address_of_yBecomesZ_6() { return &___yBecomesZ_6; }
	inline void set_yBecomesZ_6(bool value)
	{
		___yBecomesZ_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(ViewDrag_t1752703299, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
