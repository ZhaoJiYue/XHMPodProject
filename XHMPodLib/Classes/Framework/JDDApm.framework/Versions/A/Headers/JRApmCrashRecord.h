//
//  JRApmCrashRecord.h
//  AFNetworking
//
//  Created by luoyushi on 2020/1/7.
//

#import "JRApmStackInfoReport.h"
#import "JRApmSendWorkflow.h"
#import "JDDThreadStack.h"

NS_ASSUME_NONNULL_BEGIN

@interface JRApmCrashRecord : JRApmStackInfoReport


+ (BOOL)isEnabled;

+ (NSDictionary*)recordCrash:(JDDThreadStack*)threadStack;

@end

NS_ASSUME_NONNULL_END
