//
//  UnityManagerSingleton.m
//  xcode-simple-native-app
//
//  Created by Andrea Melle on 08/10/2015.
//  Copyright © 2015 Andrea Melle. All rights reserved.
//

#import "UnityManagerSingleton.h"
#import "UnityInteropDecl.h"

@interface UnityManagerSingleton()
{
    NSString* mCurrentScene;
    UIViewController *mLatestChild;
}

@property(strong, nonatomic) NSString *interopGameObjectName;
@property (strong, nonatomic) UnityController *unityController;

@end

@implementation UnityManagerSingleton

- (UIViewController*) getViewControllerWithScene:(NSString*)scene
{
    if([scene  isEqual: @"scene2"])
    {
        [self onUnityRequestsOrientation:(UnityScreenOrientationCodes::UNITY_LANDSCAPE_RIGHT)];
    }
    else if([scene  isEqual: @"scene1"])
    {
        [self onUnityRequestsOrientation:(UnityScreenOrientationCodes::UNITY_PORTRAIT)];
    }
    
    mCurrentScene = scene;
    
    [_unityController take_resume_path];
    
    //FIXME: well, this method is actually async...
    //FIXME check if scene exists in list of scenes
    if(_interopGameObjectName != nil && scene != nil)
    {
        //UnitySendMessage([_interopGameObjectName UTF8String], "RequestUnloadFromNative", "");
        UnitySendMessage([_interopGameObjectName UTF8String], "RequestSceneFromNative", [scene UTF8String]);
    }
    
    if ([_unityController.rootViewController respondsToSelector:@selector(setUnityContainerDelegate:)])
    {
        UnityContainerViewController* vc = (UnityContainerViewController*)[_unityController rootViewController];
        [vc setUnityContainerDelegate:self];
    }
    
    return [_unityController rootViewController];
}

- (void) deactivateUnityAfterDismissingViewController
{
    mCurrentScene = nil;
    
    //FIXME: well, this method is actually async...
    
    if(_interopGameObjectName != nil)
        UnitySendMessage([_interopGameObjectName UTF8String], "RequestUnloadFromNative", "");
    
    [_unityController take_pause_path];
}

- (void) dismissScene
{
    if(_sceneDelegate != nil && [_sceneDelegate respondsToSelector:@selector(onARSceneDismissed)])
    {
        [[UnityManagerSingleton Instance] deactivateUnityAfterDismissingViewController];
        [_sceneDelegate onARSceneDismissed];
    }
}


/// delegate and callbacks impl

- (void)onUnityRequestsOrientation:(int)orientation
{
    if (UnityScreenOrientationCodes::UNITY_LANDSCAPE_LEFT == orientation
        || UnityScreenOrientationCodes::UNITY_LANDSCAPE_RIGHT == orientation)
    {
        // Use landscape right
        if ([_unityController.rootViewController respondsToSelector:@selector(setLandscapeMode:)])
        {
            UnityContainerViewController* vc = (UnityContainerViewController*)[_unityController rootViewController];
            [vc setLandscapeMode:YES];
        }
        
    }
    else
    {
        // Use portrait
        if ([_unityController.rootViewController respondsToSelector:@selector(setLandscapeMode:)])
        {
            UnityContainerViewController* vc = (UnityContainerViewController*)[_unityController rootViewController];
            [vc setLandscapeMode:NO];
        }
    }
}

- (void) onUnityWantsToUnloadScene
{
    [self dismissScene];
}

- (void) onUnitySceneLoaded:(NSString*) scenename { }
- (void) onUnitySceneUnloaded { }

- (void)onCloseButton
{
    [self dismissScene];
}

///

- (UIInterfaceOrientationMask)application:(UIApplication*)application supportedInterfaceOrientationsForWindow:(UIWindow*)window
{
    return [_unityController application:application supportedInterfaceOrientationsForWindow:window];
}

-(BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    return [_unityController application:application willFinishLaunchingWithOptions:launchOptions];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    return [_unityController application:application didFinishLaunchingWithOptions:launchOptions];
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    
    [_unityController applicationDidBecomeActive:application];
    
    if(mCurrentScene != nil)
    {
        if(_interopGameObjectName != nil)
            UnitySendMessage([_interopGameObjectName UTF8String], "RequestUnloadFromNative", "");
        
        if(_interopGameObjectName != nil && mCurrentScene != nil)
            UnitySendMessage([_interopGameObjectName UTF8String], "RequestSceneFromNative", [mCurrentScene UTF8String]);
    }
    else
    {
        //take the PAUSE path immediately here
        [_unityController take_pause_path];
    }
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    [_unityController applicationWillResignActive:application];
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    if(_interopGameObjectName != nil)
        UnitySendMessage([_interopGameObjectName UTF8String], "RequestUnloadFromNative", "");
    
    [_unityController applicationDidEnterBackground:application];
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    
    [_unityController applicationWillEnterForeground:application];
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    [_unityController applicationWillTerminate:application];
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
    [_unityController applicationDidReceiveMemoryWarning:application];
}

///

+ (UnityManagerSingleton*)Instance
{
    static UnityManagerSingleton* __instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        __instance =[[self alloc] init];
    });
    return __instance;
}

- (id)init
{
    if( (self = [super init]) )
    {
        mCurrentScene = nil;
        _unityController = [[UnityController alloc] init];
    }
    return self;
}

- (void)dealloc
{
    //Never called in an ARC implementation
}

@end

// Unity <=> Native hooks

void onUnityRequestsOrientation(int orientation)
{
    [[UnityManagerSingleton Instance] onUnityRequestsOrientation:orientation];
}

void onUnityInit(const char* unityGameObjectName)
{
    [[UnityManagerSingleton Instance] setInteropGameObjectName:[NSString stringWithUTF8String:unityGameObjectName]];
}

void onUnitySceneLoaded(const char* scenename)
{
    [[UnityManagerSingleton Instance] onUnitySceneLoaded:[NSString stringWithUTF8String:scenename]];
}

void onUnitySceneUnloaded(const char* scenename)
{
    [[UnityManagerSingleton Instance] onUnitySceneUnloaded];
}

void onUnityWantsToUnloadScene(const char* scenename)
{
    [[UnityManagerSingleton Instance] onUnityWantsToUnloadScene];
}

UnityAppController*	GetAppController()
{
    return (UnityAppController*)[[UnityManagerSingleton Instance] unityController];
}


