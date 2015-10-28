//
//  ViewController.m
//  iOSMasterProject
//
//  Created by Andrea Melle on 26/10/2015.
//  Copyright © 2015 Andrea Melle. All rights reserved.
//

#import "MenuViewController.h"

#import "UnityManagerSingleton.h"

@interface MenuViewController ()
{
    IBOutlet UIButton* bearBtn;
    IBOutlet UIButton* wolfBtn;
    
}

@end

@implementation MenuViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // register itself as delegate for Unity AR scenes
    [[UnityManagerSingleton Instance] setSceneDelegate:self];
    
}

- (IBAction)onSceneSelection:(id)sender
{
    UIViewController* vc = nil;
    
    if (bearBtn == sender)
    {
        // Get AR viewcontroller by requesting a scene
        vc = [[UnityManagerSingleton Instance] getViewControllerWithScene:@"scene1"];
    }
    else if(wolfBtn == sender)
    {
        // Get AR viewcontroller by requesting a scene
        vc = [[UnityManagerSingleton Instance] getViewControllerWithScene:@"scene2"];
    }
    
    if(vc != nil)
    {
        [bearBtn setEnabled:NO];
        [wolfBtn setEnabled:NO];
        
        vc.modalPresentationStyle = UIModalPresentationFullScreen;
        
        [self presentViewController:vc animated:YES completion:^(){
            
        }];
    }
    
}

// will be called either because Unity side wants to dismiss the AR scene or because the back button in the UI is tapped
- (void)onARSceneDismissed
{
    [self dismissViewControllerAnimated:YES completion:^() {
        [bearBtn setEnabled:YES];
        [wolfBtn setEnabled:YES];
    }];
}

- (BOOL)shouldAutorotate
{
    return NO;
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations
{
    return UIInterfaceOrientationMaskPortrait;
}

- (UIInterfaceOrientation)preferredInterfaceOrientationForPresentation
{
    return UIInterfaceOrientationPortrait;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];

}

@end
