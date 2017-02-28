#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARcameraAvatar
struct  ARcameraAvatar_t2818099021  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.GameObject ARcameraAvatar::ARCam
	GameObject_t1756533147 * ___ARCam_3;
	// UnityEngine.Vector3 ARcameraAvatar::ARcamTrans
	Vector3_t2243707580  ___ARcamTrans_4;

public:
	inline static int32_t get_offset_of_ARCam_3() { return static_cast<int32_t>(offsetof(ARcameraAvatar_t2818099021, ___ARCam_3)); }
	inline GameObject_t1756533147 * get_ARCam_3() const { return ___ARCam_3; }
	inline GameObject_t1756533147 ** get_address_of_ARCam_3() { return &___ARCam_3; }
	inline void set_ARCam_3(GameObject_t1756533147 * value)
	{
		___ARCam_3 = value;
		Il2CppCodeGenWriteBarrier(&___ARCam_3, value);
	}

	inline static int32_t get_offset_of_ARcamTrans_4() { return static_cast<int32_t>(offsetof(ARcameraAvatar_t2818099021, ___ARcamTrans_4)); }
	inline Vector3_t2243707580  get_ARcamTrans_4() const { return ___ARcamTrans_4; }
	inline Vector3_t2243707580 * get_address_of_ARcamTrans_4() { return &___ARcamTrans_4; }
	inline void set_ARcamTrans_4(Vector3_t2243707580  value)
	{
		___ARcamTrans_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
