//
//  JDDH5Offline
//  JDJRAppShell
//
//  Created by luoyushi on 14-6-12.
//  Copyright (c) 2014年 JDD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JDDOFConfigManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JDDH5Offline : NSObject

/**
 * 离线化初始化，可以加载离线项目
 */
+ (void)startModel:(JDDOFConfig *)config;

/**
 * 离线化列表网路请求
 * NOTICE: 离线化初始化之后调用, 即用户隐私同意之后
 */
+ (void)startRequestConfiger;

@end

NS_ASSUME_NONNULL_END
