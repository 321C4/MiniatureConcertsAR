﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1903595547;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"

// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t1684909666  SceneManager_GetActiveScene_m2964039490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::INTERNAL_CALL_GetActiveScene(UnityEngine.SceneManagement.Scene&)
extern "C"  void SceneManager_INTERNAL_CALL_GetActiveScene_m1595803318 (Il2CppObject * __this /* static, unused */, Scene_t1684909666 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m1386820036 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m87258056 (Il2CppObject * __this /* static, unused */, int32_t ___sceneBuildIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m592643733 (Il2CppObject * __this /* static, unused */, int32_t ___sceneBuildIndex0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  AsyncOperation_t3814632279 * SceneManager_LoadSceneAsyncNameIndexInternal_m3279056043 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, int32_t ___sceneBuildIndex1, bool ___isAdditive2, bool ___mustCompleteNextFrame3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
extern "C"  void SceneManager_add_sceneLoaded_m1191442002 (Il2CppObject * __this /* static, unused */, UnityAction_2_t1903595547 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
extern "C"  void SceneManager_remove_sceneLoaded_m2086364025 (Il2CppObject * __this /* static, unused */, UnityAction_2_t1903595547 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_Internal_SceneLoaded_m4005732915 (Il2CppObject * __this /* static, unused */, Scene_t1684909666  ___scene0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneUnloaded(UnityEngine.SceneManagement.Scene)
extern "C"  void SceneManager_Internal_SceneUnloaded_m4108957131 (Il2CppObject * __this /* static, unused */, Scene_t1684909666  ___scene0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_ActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
extern "C"  void SceneManager_Internal_ActiveSceneChanged_m1162592635 (Il2CppObject * __this /* static, unused */, Scene_t1684909666  ___previousActiveScene0, Scene_t1684909666  ___newActiveScene1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
