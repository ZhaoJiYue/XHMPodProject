//
//  JDDApmANRManager.h
//  AFNetworking
//
//  Created by luoyushi on 2019/10/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class JRApmANRDetectThread;

@interface JDDApmANRManager : NSObject

+ (JDDApmANRManager *)sharedInstance;

@property (nonatomic, strong) JRApmANRDetectThread *runloopANRMonitor;

/**
 开始监控
 */
- (void)startWithDetectInterval:(float)detectIntervalInSeconds
        stallThresholdInSeconds:(float)stallThresholdInSeconds;

/**
 停止监控
 */
- (void) stop;

@end

NS_ASSUME_NONNULL_END
