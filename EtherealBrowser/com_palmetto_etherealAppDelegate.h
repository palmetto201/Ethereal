//
//  com_palmetto_etherealAppDelegate.h
//  EtherealBrowser
//
//  Created by Ali Ahmed on 5/2/14.
//  Copyright (c) 2014 palmetto201. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BrowserDelegate.h"
#import "BrowserViewController.h"

@interface com_palmetto_etherealAppDelegate : BrowserDelegate <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) BrowserViewController *viewController;

@end
