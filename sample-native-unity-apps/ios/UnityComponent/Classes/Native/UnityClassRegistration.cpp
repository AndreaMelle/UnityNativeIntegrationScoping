struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 68 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//18. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//19. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//20. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//21. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//22. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//23. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//24. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//25. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//26. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//27. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//28. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//29. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//30. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//31. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//32. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//33. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//34. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//35. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//36. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//37. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//38. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//39. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//40. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//41. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//42. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//43. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//44. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//45. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//46. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//47. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//48. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//49. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//50. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//51. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//52. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//53. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//54. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//57. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//58. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//59. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//60. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//61. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//62. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//63. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//64. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//65. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//66. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//67. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
