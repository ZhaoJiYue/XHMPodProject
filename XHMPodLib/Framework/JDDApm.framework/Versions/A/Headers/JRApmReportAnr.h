//
//  JRApmReportAnr.h
//  AFNetworking
//
//  Created by luoyushi on 2019/10/23.
//

#import "JRApmStackInfoReport.h"

@class JRApmANRRecord;

@interface JRApmReportAnr : JRApmStackInfoReport

@property (nonatomic, copy) NSString *controller;

+ (BOOL)isEnabled;

+ (void)recordANR:(JRApmANRRecord *)anrRecord;

@end
