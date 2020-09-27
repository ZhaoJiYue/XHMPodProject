//
//  JRApmSDK.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/25.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JDDApmConfig.h"

@interface JRApmSDK : NSObject

/*
 SDK 启动初始化
 */
+ (BOOL)setupConfiguration:(JDDApmConfig* __nonnull)config;

/*
 SDK JDDApmConfig
 */
+ (JDDApmConfig*)getConfiguration;

/*
 忽略某些网络请求。block返回true的，都被忽略。
 */
+(void)setIgnoreNetworkUrlBlock:(JRApmIgnoreNetWorkBlock) block;

/*
 记录 自定义性能监控 开始时间
 */
+ (void)recordPerformanceCustomStart:(NSString*)eventKey;

/*
 记录 自定义性能监控 结束时间
 */
+ (void)recordPerformanceCustomEnd:(NSString*)eventKey;

/*
 vc只记录可见页面耗时
 */
+ (void)reportUITimeBeginTime:(NSSet*)vcs;


/*
 App崩溃时清除SDK所有状态
 */
+ (void)appCrashCall;

@end
