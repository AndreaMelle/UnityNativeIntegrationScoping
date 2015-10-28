//
//  UnityContainerViewController.h
//  iOSMasterProject
//
//  Created by Andrea Melle on 27/10/2015.
//  Copyright © 2015 Andrea Melle. All rights reserved.
//

#ifndef __UnityContainerViewController_h__
#define __UnityContainerViewController_h__

#import <UIKit/UIKit.h>
#import "UnityViewControllerBase.h"

@protocol UnityContainerDelegate <NSObject>
@required
- (void)onCloseButton;
@end

@interface UnityContainerViewController : UnityDefaultViewController
@property (nonatomic, weak) id<UnityContainerDelegate> unityContainerDelegate;
@property (nonatomic) BOOL landscapeMode;
@end

#endif //#ifndef __UnityContainerViewController_h__
