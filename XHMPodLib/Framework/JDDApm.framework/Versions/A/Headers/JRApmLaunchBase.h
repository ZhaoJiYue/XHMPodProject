//
//  JRApmLaunchBase.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/24.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface JRApmLaunchBase : NSObject


+ (void)recordLaunchUIApplicationDidBegin;


+ (void)recordLaunchUIApplicationDidFinish;


+ (void)recordLaunchUIViewControllerFirst;


+ (void)recordPerformanceCustomStart:(NSString*)eventKey;


+ (void)recordPerformanceCustomEnd:(NSString*)eventKey;

@end
