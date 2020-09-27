//
//  JRJRApmReportLaunch.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/24.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import "JRApmReportBaseInfo.h"

@interface JRJRApmReportLaunchBase : JRApmReportBaseModel

@property (nonatomic, assign) int64_t lauchDidBegin;
@property (nonatomic, assign) int64_t lauchDidFinish;
@property (nonatomic, assign) int64_t firstVc;


+ (int64_t)processStartTime;

@end
