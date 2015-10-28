using UnityEngine;
using System.Collections;
using System;
using abl;
using System.Collections.Generic;
using Vuforia;

public class Scene01ManagerDemo : IScene, ITrackableEventHandler
{
    private GameObject bear;
    private GameObject deer;
    private float mSpinSpeed = 10.0f;

    private string myAssetBundleName = "scene1bundle";
    private Transform mObjectsParent = null;

    private bool isBeingTracked;
    private TrackableBehaviour mTrackableBehaviour;

    private List<GameObject> mARObjects = new List<GameObject>();

    protected override void doAwake()
    {
        GameObject go = GameObject.Find("ARTargetRoot");

        if (go != null)
        {
            mTrackableBehaviour = go.GetComponent<TrackableBehaviour>();
            if (mTrackableBehaviour != null)
                mTrackableBehaviour.RegisterTrackableEventHandler(this);
        }

        go = GameObject.Find("ARContentRoot"); 

        if (go != null)
        {
            mObjectsParent = go.transform != null ? go.transform : null;
        }
    }

    protected override void doStart ()
    {
        GameObject ground = GameObject.Find("Ground");
        if (ground != null) mARObjects.Add(ground);
        applyObjectVisibilityRule();


        // Don't worry about requesting multiple objects without waiting from previous result
        // The manager handles a queue of requests internally

        ABManager.Instance.GetFromBundle<GameObject>(myAssetBundleName, "bearRoot", new Action<bool, GameObject>((bool success, GameObject go) =>
        {
            if (go != null)
            {
                bear = GameObject.Instantiate(go, new Vector3(0.0f, 0, 0), Quaternion.identity) as GameObject;
                bear.name = "bear";
                if(mObjectsParent != null)
                {
                    bear.transform.parent = mObjectsParent;
                    bear.transform.localScale = Vector3.one;
                    bear.transform.localPosition = new Vector3(0.25f, 0, 0);
                    bear.transform.localRotation = Quaternion.identity;
                }

                mARObjects.Add(bear);
                applyObjectVisibilityRule();
            }
        }));

        Invoke("deferredRequestExample", 5.0f);

    }

    private void deferredRequestExample()
    {
        ABManager.Instance.GetFromBundle<GameObject>(myAssetBundleName, "deerRoot", new Action<bool, GameObject>((bool success, GameObject go) =>
        {
            if (go != null)
            {
                deer = GameObject.Instantiate(go, new Vector3(0.0f, 0, 0), Quaternion.identity) as GameObject;
                deer.name = "deer";
                if (mObjectsParent != null)
                {
                    deer.transform.parent = mObjectsParent;
                    deer.transform.localScale = Vector3.one;
                    deer.transform.localRotation = Quaternion.identity;
                    deer.transform.localPosition = new Vector3(-0.25f, 0, 0);
                }

                mARObjects.Add(deer);
                applyObjectVisibilityRule();
            }
        }));
    }

    private void applyObjectVisibilityRule()
    {
        foreach(GameObject go in mARObjects)
        {
            if (go != null) go.SetActive(isBeingTracked);
        }
    }
	
	void Update ()
    {
        // A bit of performance will have to go here:
        // remember, dynamic objects can still be null after Start, because the callback is async
        // alternatively, set a bool flag to true when all your objects are loaded and skip the Update before that

        if (bear != null)
        {
            Vector3 rot = bear.transform.localEulerAngles;
            rot.y += Time.deltaTime * mSpinSpeed;
            bear.transform.localEulerAngles = rot;
        }

        if (deer != null)
        {
            Vector3 rot = deer.transform.localEulerAngles;
            rot.y += Time.deltaTime * mSpinSpeed;
            deer.transform.localEulerAngles = rot;
        }
    }

    private void OnTrackingFound()
    {
        isBeingTracked = true;
        applyObjectVisibilityRule();
    }


    private void OnTrackingLost()
    {
        isBeingTracked = false;
        applyObjectVisibilityRule();
    }

    protected override void onSceneUnload()
    {

    }

    public void OnTrackableStateChanged(
                                    TrackableBehaviour.Status previousStatus,
                                    TrackableBehaviour.Status newStatus)
    {
        if (newStatus == TrackableBehaviour.Status.DETECTED ||
            newStatus == TrackableBehaviour.Status.TRACKED ||
            newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED)
        {
            OnTrackingFound();
        }
        else
        {
            OnTrackingLost();
        }
    }
}
