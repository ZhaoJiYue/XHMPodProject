//
//  JRApmANRDetectThread.h
//  JDDApm_Example
//
//  Created by luoyushi on 2019/10/1.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class JRApmANRRecord;

@protocol JDApmANRDelegate <NSObject>

- (void)didRecievedANRInfo:(JRApmANRRecord *)anrRecord;

@end


@interface JRApmANRDetectThread : NSThread

@property (nonatomic, assign, readonly) float stallingThresholdInSeconds; // defualt 0.4s
@property (nonatomic, assign, readonly) float detectIntervalInSeconds;    // default 0.1s, must be < anrThreshold otherwise can't detect correct
@property (nonatomic, assign) BOOL shouldCaptureBackTrace;

- (void)startWithDetectInterval:(float)detectIntervalInSeconds
        stallThresholdInSeconds:(float)stallThresholdInSeconds;

- (void)addDelegate:(id<JDApmANRDelegate>)delegate;

- (void)removeDelegate:(id<JDApmANRDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
