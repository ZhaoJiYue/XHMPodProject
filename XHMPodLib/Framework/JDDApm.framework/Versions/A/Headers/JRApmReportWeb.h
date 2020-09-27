//
//  JRApmReportWeb.h
//  AFNetworking
//
//  Created by luoyushi on 2019/7/26.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import "JRApmReportBaseInfo.h"


@interface JRApmReportWeb : JRApmReportBaseModel


@property (nonatomic, copy) NSString *browser;
@property (nonatomic, copy) NSString *browserVersion;
@property (nonatomic, copy) NSString *userAgent;
@property (nonatomic, copy) NSString *h5AppName;//关联到h5页面的应用名称（需要和sgm前端监控结合使用
@property (nonatomic, copy) NSString *webviewId;//原生app生成的随机不重复标识，用于向h5页面透传
@property (nonatomic, copy) NSString *pageType;//webview页面类型（离线页面、实时在线页面等）


@property (nonatomic, copy) NSURL *url;
@property (nonatomic, assign) NSInteger openType;//页面打开方式：包括直接打开(navigate)、刷新页面(reload)、历史记录(back_forward)、预先打开(prerender)
@property (nonatomic, copy) NSString *refererUrl;


@property (nonatomic, copy) NSDictionary *performanceTiming;

@property (nonatomic, assign) NSInteger redirectCount;

@property (nonatomic, assign) int64_t redirectStartTime;
@property (nonatomic, assign) int64_t redirectEndTime;


@property (nonatomic, assign) int64_t navigationStart;
@property (nonatomic, assign) int64_t loadEventEnd;

@property (nonatomic, assign) int64_t responseEnd;

@end

