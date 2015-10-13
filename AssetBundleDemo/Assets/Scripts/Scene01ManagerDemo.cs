using UnityEngine;
using System.Collections;
using System;
using abl;
using System.Collections.Generic;

public class Scene01ManagerDemo : MonoBehaviour
{
    private GameObject bear;
    private GameObject deer;
    private float mSpinSpeed = 10.0f;

    private string myAssetBundleName = "scene1bundle";

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

        ABManager.Instance.GetFromBundle<GameObject>(myAssetBundleName, "bearRoot", new Action<bool, GameObject>((bool success, GameObject go) =>
        {
            if (go != null)
            {
                bear = GameObject.Instantiate(go, new Vector3(0.1f, 0, 0), Quaternion.identity) as GameObject;
                bear.name = "bear";
            }
        }));

        ABManager.Instance.GetFromBundle<GameObject>(myAssetBundleName, "deerRoot", new Action<bool, GameObject>((bool success, GameObject go) =>
        {
            if (go != null)
            {
                deer = GameObject.Instantiate(go, new Vector3(-0.1f, 0, 0), Quaternion.identity) as GameObject;
                deer.name = "deer";
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

        if (bear != null)
        {
            Vector3 rot = bear.transform.eulerAngles;
            rot.y += Time.deltaTime * mSpinSpeed;
            bear.transform.eulerAngles = rot;
        }

        if (deer != null)
        {
            Vector3 rot = deer.transform.eulerAngles;
            rot.y += Time.deltaTime * mSpinSpeed;
            deer.transform.eulerAngles = rot;
        }
    }

    void OnSceneUnloadRequest()
    {

    }
}
