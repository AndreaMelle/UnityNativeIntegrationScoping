//
//  AppDelegate.m
//  iOSMasterProject
//
//  Created by Andrea Melle on 26/10/2015.
//  Copyright © 2015 Andrea Melle. All rights reserved.
//

#import "AppDelegate.h"
#import "UnityManagerSingleton.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

// General note: make sure you forward each UIApplicationDelegate callback to the Unity manager!!!

-(BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    return [[UnityManagerSingleton Instance] application:application willFinishLaunchingWithOptions:launchOptions];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    //do all your stuff
    //ensure UIWindow is created - not relevant in storyboard application
    
    //now, only AFTER your stuff, call the relevant metod on Unity manager
    
    return [[UnityManagerSingleton Instance] application:application didFinishLaunchingWithOptions:launchOptions];
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    
    [[UnityManagerSingleton Instance] applicationWillResignActive:application];
    
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    
    [[UnityManagerSingleton Instance] applicationDidEnterBackground:application];
    
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    
    [[UnityManagerSingleton Instance] applicationWillEnterForeground:application];
    
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    
    [[UnityManagerSingleton Instance] applicationDidBecomeActive:application];
    
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    [[UnityManagerSingleton Instance] applicationWillTerminate:application];
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
    [[UnityManagerSingleton Instance] applicationDidReceiveMemoryWarning:application];
}

-(UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window
{
    return [[UnityManagerSingleton Instance] application:application supportedInterfaceOrientationsForWindow:window];
}

@end
