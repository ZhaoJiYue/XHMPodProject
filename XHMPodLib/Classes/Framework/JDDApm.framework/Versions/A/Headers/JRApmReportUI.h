//
//  JRApmReportUI.h
//  AFNetworking
//
//  Created by luoyushi on 2019/8/20.
//

#import "JRApmReportBaseInfo.h"

@interface JRApmReportUI : JRApmReportBaseInfo

@property (nonatomic, copy) NSString *controller;
@property (nonatomic, copy) NSString *parent;

@property (nonatomic, assign) int64_t start;
@property (nonatomic, assign) int64_t end;


+ (void)startInit;

+ (void)recordUIStart:(UIViewController*)vc;
+ (void)recordUIEnd:(UIViewController*)vc referVC:(NSString*)referVC;
+ (void)recordUICustom:(UIViewController*)vc referVC:(NSString*)referVC startTime:(int64_t)startTime endTime:(int64_t)endTime;

+ (void)recordUIFail:(UIViewController*)vc;

@end

