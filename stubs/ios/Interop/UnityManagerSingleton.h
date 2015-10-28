//
//  UnityManagerSingleton.h
//  xcode-simple-native-app
//
//  Created by Andrea Melle on 08/10/2015.
//  Copyright © 2015 Andrea Melle. All rights reserved.
//

#ifndef UnityManagerSingleton_h
#define UnityManagerSingleton_h

#import <Foundation/Foundation.h>
#import "UnityController.h"
#import "UnityContainerViewController.h"

@protocol ARSceneDelegate <NSObject>
@required
- (void)onARSceneDismissed;
@end

@interface UnityManagerSingleton : NSObject<UIApplicationDelegate, UnityContainerDelegate>
{
    
}

@property (weak, nonatomic) id<ARSceneDelegate> sceneDelegate;

- (UIViewController*) getViewControllerWithScene:(NSString*)scene;
- (void)onCloseButton;
+ (UnityManagerSingleton*)Instance;

@end

extern UnityAppController*	GetAppController();

#endif /* UnityManagerSingleton_h */
