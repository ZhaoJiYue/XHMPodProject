//
//  UIViewController+JRApm.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/24.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum : NSUInteger {
    JDDApmPage_AppDidFinishLaunching,
    JDDApmPage_AppDidEnterBackground,
    JDDApmPage_WillEnterForeground,
    JDDApmPage_DidBecomeActive,
    JDDApmPage_WillResignActive,
    
    
    JDDApmPage_viewDidLoad,
    JDDApmPage_viewWillAppear,
    JDDApmPage_viewDidAppear,
    JDDApmPage_viewDidDisappear,
    
} JDDApmPageEventType;

@protocol JDDApmPageDelegate <NSObject>

- (void)didRecievedPageEnentInfo:(JDDApmPageEventType)pageEventType objectClass:(id)objectClass;

@end

@interface JDDApmPageManger : NSObject

+ (JDDApmPageManger *)sharedInstance;

- (void)addDelegate:(id<JDDApmPageDelegate>)delegate;
- (void)removeDelegate:(id<JDDApmPageDelegate>)delegate;
- (void)doDelegate:(JDDApmPageEventType)pageEventType objectClass:(id)objectClass;;

@end



@interface UIViewController (JRApm)

+ (void)jrApmSwizzledClass;

@property (nonatomic, assign) int64_t jrapm_startTime;//记录开始的时间
@property (nonatomic, assign) int64_t jrapm_endTime;//记录开始的时间

@end

