using UnityEngine;
using System.Collections;
using System;
using abl;
using System.Collections.Generic;
using Vuforia;

public class Scene02ManagerDemo : IScene, ITrackableEventHandler
{
    private GameObject wolf;
    private float mSpinSpeed = 10.0f;

    private string myAssetBundleName = "scene2bundle";
    private Transform mObjectsParent = null;

    private bool isBeingTracked;
    private TrackableBehaviour mTrackableBehaviour;

    private List<GameObject> mARObjects = new List<GameObject>();

	// If you need to specify a specific orientation, override this method
	// Do not use Unity ScreenOrientation.orientation property assignment or the project will break
	// Default is Portrait
	protected override ScreenOrientation GetSceneOrientation ()
	{
		// Landscape right is the only Landscape orientation that works nicely in AR
		// Landscape left will make the user block the camera with his/her thumb when holding the phone
		return ScreenOrientation.LandscapeRight;
	}

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

        ABManager.Instance.GetFromBundle<GameObject>(myAssetBundleName, "wolfRoot", new Action<bool, GameObject>((bool success, GameObject go) =>
        {
            if (go != null)
            {
                wolf = GameObject.Instantiate(go, new Vector3(0.0f, 0, 0), Quaternion.identity) as GameObject;
                wolf.name = "wolf";
                if (mObjectsParent != null)
                {
                    wolf.transform.parent = mObjectsParent;
                    wolf.transform.localScale = Vector3.one;
                    wolf.transform.localPosition = new Vector3(0.0f, 0, 0);
                    wolf.transform.localRotation = Quaternion.identity;
                }

                mARObjects.Add(wolf);
                applyObjectVisibilityRule();
            }
        }));
    }

    private void applyObjectVisibilityRule()
    {
        foreach (GameObject go in mARObjects)
        {
            if (go != null) go.SetActive(isBeingTracked);
        }
    }

    void Update ()
    {
        // A bit of performance will have to go here:
        // remember, dynamic objects can still be null after Start, because the callback is async
        // alternatively, set a bool flag to true when all your objects are loaded and skip the Update before that

        if (wolf != null)
        {
            Vector3 rot = wolf.transform.localEulerAngles;
            rot.y += Time.deltaTime * mSpinSpeed;
            wolf.transform.localEulerAngles = rot;
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
