//
//  ViewController.h
//  iOSMasterProject
//
//  Created by Andrea Melle on 26/10/2015.
//  Copyright © 2015 Andrea Melle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UnityManagerSingleton.h"

// Need to implement the delegate for AR scenes
@interface MenuViewController : UIViewController<ARSceneDelegate>

- (void)onARSceneDismissed;

@end

