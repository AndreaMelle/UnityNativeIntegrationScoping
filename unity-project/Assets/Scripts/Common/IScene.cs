using UnityEngine;
using System.Collections;
using Vuforia;

public class SceneBase : MonoBehaviour
{
    protected virtual void Awake() { }
    protected virtual void Start() { }
    protected virtual void OnSceneUnloadRequest() { }

	protected virtual ScreenOrientation GetSceneOrientation()
	{
		return ScreenOrientation.Portrait;
	}
}

public abstract class IScene : SceneBase
{
    protected abstract void doAwake();
    protected abstract void doStart();
    protected abstract void onSceneUnload();

    [Header("UI for Editor or if IS_STANDALONE define")]
    public bool StandaloneUI = true;

    protected sealed override void Awake ()
    {
		uninterop.UnityNativeInterop.ChooseOrientationForScene (GetSceneOrientation());

		Application.targetFrameRate = 60;

        uninterop.UnityNativeInterop.OnSceneUnloadRequest += OnSceneUnloadRequest;

#if UNITY_EDITOR || IS_STANDALONE
        if(StandaloneUI)
        {
            UnityNativeInteropEmulation.CreateEmulation();
        }
#endif

        doAwake();
    }

    protected sealed override void Start ()
    {
        doStart();

        uninterop.UnityNativeInterop.NotifySceneLoaded();
    }

    protected sealed override void OnSceneUnloadRequest()
    {
        onSceneUnload();

        abl.ABManager.Instance.UnloadAllAndClear();
    }

    // Call this when your scene is "finished", if it's a linear story
    // Do not remove objects, or clear memory
    // Just leave the scene in a nice ending state
    // The native side will unload the scene calling the relevant methods
    protected void ShouldEndScene()
    {
        uninterop.UnityNativeInterop.NotifySceneWantsToEnd();
    }

}
