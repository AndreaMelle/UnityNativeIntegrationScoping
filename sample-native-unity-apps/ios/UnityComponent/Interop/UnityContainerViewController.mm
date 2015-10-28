//
//  UnityContainerViewController.m
//  iOSMasterProject
//
//  Created by Andrea Melle on 27/10/2015.
//  Copyright © 2015 Andrea Melle. All rights reserved.
//

#import "UnityContainerViewController.h"

@interface UnityContainerViewController ()
{
    BOOL mStatusBarHiddenCache;
    UIButton* closeButton;
    UIView* buttonView;
}

@end

@implementation UnityContainerViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (void)onCloseAction:(id)sender
{
    if(_unityContainerDelegate != nil && [_unityContainerDelegate respondsToSelector:@selector(onCloseButton)])
    {
        [closeButton setEnabled:NO];
        [_unityContainerDelegate onCloseButton];
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    buttonView = (UIView*)[self.view viewWithTag:6];
    closeButton = (UIButton*)[self.view viewWithTag:5];
    
    if(closeButton != nil)
        [closeButton addTarget:self action:@selector(onCloseAction:) forControlEvents:UIControlEventTouchUpInside];
    
    if(buttonView != nil)
        [self.view bringSubviewToFront:buttonView];
    
    mStatusBarHiddenCache = [[UIApplication sharedApplication] isStatusBarHidden];
    
    [[UIApplication sharedApplication] setStatusBarHidden:YES];
    
    [closeButton setEnabled:YES];
}

- (BOOL)shouldAutorotate
{
    return YES;
}

//
- (UIInterfaceOrientationMask)supportedInterfaceOrientations
{
    if(_landscapeMode)
    {
        return (1 << UIInterfaceOrientationLandscapeRight);
    }
    else
    {
        return (1 << UIInterfaceOrientationPortrait);
    }
}

//
- (UIInterfaceOrientation)preferredInterfaceOrientationForPresentation
{
    if(_landscapeMode)
    {
        return UIInterfaceOrientationLandscapeRight;
    }
    else
    {
        return UIInterfaceOrientationPortrait;
    }
}

- (void)viewWillDisappear:(BOOL)animated
{
    [[UIApplication sharedApplication] setStatusBarHidden:mStatusBarHiddenCache];
    
    [super viewWillDisappear:animated];
}

@end
