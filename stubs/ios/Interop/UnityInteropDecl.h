//
//  UnityInteropDecl.h
//  iOSMasterProject
//
//  Created by Andrea Melle on 26/10/2015.
//  Copyright © 2015 Andrea Melle. All rights reserved.
//

#ifndef UnityInteropDecl_h
#define UnityInteropDecl_h

typedef enum UnityScreenOrientationCodes
{
    UNITY_PORTRAIT = 1,
    UNITY_LANDSCAPE_RIGHT = 3,
    UNITY_LANDSCAPE_LEFT = 4,
} UnityScreenOrientationCodes;

extern "C"
{
    void onUnityInit(const char* unityGameObjectName);
    void onUnitySceneLoaded(const char* scenename);
    void onUnitySceneUnloaded(const char* scenename);
    void onUnityWantsToUnloadScene(const char* scenename);
    void onUnityRequestsOrientation(int orientation);
}

#endif /* UnityInteropDecl_h */
