//
//  LRS_TabBar_STV_CDAppDelegate.h
//  LRS_TabBar_STV_CD
//
//  Created by colinsimmons on 6/02/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LRS_TabBar_STV_CDAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
