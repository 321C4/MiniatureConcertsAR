template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class DirectorPlayer; template <> void RegisterClass<DirectorPlayer>();
class Animator; template <> void RegisterClass<Animator>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; 
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class Terrain; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>();
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class CubemapArray; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class WebCamTexture; template <> void RegisterClass<WebCamTexture>();
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 85 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. MeshFilter
	RegisterClass<MeshFilter>();
	//9. Renderer
	RegisterClass<Renderer>();
	//10. GUILayer
	RegisterClass<GUILayer>();
	//11. Mesh
	RegisterClass<Mesh>();
	//12. NamedObject
	RegisterClass<NamedObject>();
	//13. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//14. NetworkView
	RegisterClass<NetworkView>();
	//15. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//16. Transform
	RegisterClass<Transform>();
	//17. Shader
	RegisterClass<Shader>();
	//18. Material
	RegisterClass<Material>();
	//19. Sprite
	RegisterClass<Sprite>();
	//20. Texture
	RegisterClass<Texture>();
	//21. Texture2D
	RegisterClass<Texture2D>();
	//22. RenderTexture
	RegisterClass<RenderTexture>();
	//23. Rigidbody
	RegisterClass<Rigidbody>();
	//24. Collider
	RegisterClass<Collider>();
	//25. MeshCollider
	RegisterClass<MeshCollider>();
	//26. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//27. AudioClip
	RegisterClass<AudioClip>();
	//28. SampleClip
	RegisterClass<SampleClip>();
	//29. AudioListener
	RegisterClass<AudioListener>();
	//30. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//31. AudioSource
	RegisterClass<AudioSource>();
	//32. WebCamTexture
	RegisterClass<WebCamTexture>();
	//33. Animator
	RegisterClass<Animator>();
	//34. DirectorPlayer
	RegisterClass<DirectorPlayer>();
	//35. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//36. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//37. UI::Canvas
	RegisterClass<UI::Canvas>();
	//38. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//39. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//40. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//41. MeshRenderer
	RegisterClass<MeshRenderer>();
	//42. Collider2D
	RegisterClass<Collider2D>();
	//43. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//44. BoxCollider
	RegisterClass<BoxCollider>();
	//45. PreloadData
	RegisterClass<PreloadData>();
	//46. Cubemap
	RegisterClass<Cubemap>();
	//47. Texture3D
	RegisterClass<Texture3D>();
	//48. Texture2DArray
	RegisterClass<Texture2DArray>();
	//49. TimeManager
	RegisterClass<TimeManager>();
	//50. AudioManager
	RegisterClass<AudioManager>();
	//51. InputManager
	RegisterClass<InputManager>();
	//52. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//53. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//54. TextAsset
	RegisterClass<TextAsset>();
	//55. PhysicsManager
	RegisterClass<PhysicsManager>();
	//56. TagManager
	RegisterClass<TagManager>();
	//57. ScriptMapper
	RegisterClass<ScriptMapper>();
	//58. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//59. MonoScript
	RegisterClass<MonoScript>();
	//60. MonoManager
	RegisterClass<MonoManager>();
	//61. PlayerSettings
	RegisterClass<PlayerSettings>();
	//62. BuildSettings
	RegisterClass<BuildSettings>();
	//63. ResourceManager
	RegisterClass<ResourceManager>();
	//64. NetworkManager
	RegisterClass<NetworkManager>();
	//65. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//66. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//67. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//68. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//69. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//70. LevelGameManager
	RegisterClass<LevelGameManager>();
	//71. AnimationClip
	RegisterClass<AnimationClip>();
	//72. Motion
	RegisterClass<Motion>();
	//73. Avatar
	RegisterClass<Avatar>();
	//74. AnimatorController
	RegisterClass<AnimatorController>();
	//75. RenderSettings
	RegisterClass<RenderSettings>();
	//76. Light
	RegisterClass<Light>();
	//77. FlareLayer
	RegisterClass<FlareLayer>();
	//78. SphereCollider
	RegisterClass<SphereCollider>();
	//79. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//80. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//81. CharacterController
	RegisterClass<CharacterController>();
	//82. LightmapSettings
	RegisterClass<LightmapSettings>();
	//83. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>();
	//84. LightProbes
	RegisterClass<LightProbes>();

}
