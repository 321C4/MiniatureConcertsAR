#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapColorChange
struct  TapColorChange_t1926826512  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.Material TapColorChange::Material1
	Material_t193706927 * ___Material1_3;
	// UnityEngine.Material TapColorChange::Material2
	Material_t193706927 * ___Material2_4;
	// UnityEngine.Renderer TapColorChange::rend
	Renderer_t257310565 * ___rend_5;

public:
	inline static int32_t get_offset_of_Material1_3() { return static_cast<int32_t>(offsetof(TapColorChange_t1926826512, ___Material1_3)); }
	inline Material_t193706927 * get_Material1_3() const { return ___Material1_3; }
	inline Material_t193706927 ** get_address_of_Material1_3() { return &___Material1_3; }
	inline void set_Material1_3(Material_t193706927 * value)
	{
		___Material1_3 = value;
		Il2CppCodeGenWriteBarrier(&___Material1_3, value);
	}

	inline static int32_t get_offset_of_Material2_4() { return static_cast<int32_t>(offsetof(TapColorChange_t1926826512, ___Material2_4)); }
	inline Material_t193706927 * get_Material2_4() const { return ___Material2_4; }
	inline Material_t193706927 ** get_address_of_Material2_4() { return &___Material2_4; }
	inline void set_Material2_4(Material_t193706927 * value)
	{
		___Material2_4 = value;
		Il2CppCodeGenWriteBarrier(&___Material2_4, value);
	}

	inline static int32_t get_offset_of_rend_5() { return static_cast<int32_t>(offsetof(TapColorChange_t1926826512, ___rend_5)); }
	inline Renderer_t257310565 * get_rend_5() const { return ___rend_5; }
	inline Renderer_t257310565 ** get_address_of_rend_5() { return &___rend_5; }
	inline void set_rend_5(Renderer_t257310565 * value)
	{
		___rend_5 = value;
		Il2CppCodeGenWriteBarrier(&___rend_5, value);
	}
};

struct TapColorChange_t1926826512_StaticFields
{
public:
	// System.Boolean TapColorChange::mat1
	bool ___mat1_6;

public:
	inline static int32_t get_offset_of_mat1_6() { return static_cast<int32_t>(offsetof(TapColorChange_t1926826512_StaticFields, ___mat1_6)); }
	inline bool get_mat1_6() const { return ___mat1_6; }
	inline bool* get_address_of_mat1_6() { return &___mat1_6; }
	inline void set_mat1_6(bool value)
	{
		___mat1_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
