using UnityEngine;
using System.Collections;
using System;
using abl;
using System.Collections.Generic;

public class Scene02ManagerDemo : MonoBehaviour
{
    private GameObject wolf;
    private float mSpinSpeed = 10.0f;

    private string myAssetBundleName = "scene2bundle";

    void Awake()
    {
#if UNITY_EDITOR
        UnityNativeInteropEmulation.CreateEmulation();
#endif
        uninterop.UnityNativeInterop.OnSceneUnloadRequest += OnSceneUnloadRequest;
    }

    void Start ()
    {
        // Don't worry about requesting multiple objects without waiting from previous result
        // The manager handles a queue of requests internally

        ABManager.Instance.GetFromBundle<GameObject>(myAssetBundleName, "wolfRoot", new Action<bool, GameObject>((bool success, GameObject go) =>
        {
            if (go != null)
            {
                wolf = GameObject.Instantiate(go, new Vector3(0.1f, 0, 0), Quaternion.identity) as GameObject;
                wolf.name = "wolf";
            }
        }));

        // Here we call the native function hook to notify the scene has been loaded
        uninterop.UnityNativeInterop.NotifySceneLoaded();

    }
	
	void Update ()
    {
        // A bit of performance will have to go here:
        // remember, dynamic objects can still be null after Start, because the callback is async
        // alternatively, set a bool flag to true when all your objects are loaded and skip the Update before that

        if (wolf != null)
        {
            Vector3 rot = wolf.transform.eulerAngles;
            rot.y += Time.deltaTime * mSpinSpeed;
            wolf.transform.eulerAngles = rot;
        }
    }

    void OnSceneUnloadRequest()
    {

    }
}
