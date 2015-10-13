using UnityEngine;
using System.Collections;

public class DummySceneManager : MonoBehaviour
{
    void Awake()
    {
#if UNITY_EDITOR
        UnityNativeInteropEmulation.CreateEmulation();
#endif
        uninterop.UnityNativeInterop.OnSceneUnloadRequest += OnSceneUnloadRequest;
    }

    void Start ()
    {

        uninterop.UnityNativeInterop.NotifySceneLoaded();
	}

    void OnSceneUnloadRequest()
    {

    }
}
