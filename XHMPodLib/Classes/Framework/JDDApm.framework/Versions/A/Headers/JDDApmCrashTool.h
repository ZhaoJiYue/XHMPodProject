//
//  JDDApmCrashTool.h
//  AFNetworking
//
//  Created by luoyushi on 2019/12/25.
//

#import <Foundation/Foundation.h>
#import "JDDThreadStack.h"

NS_ASSUME_NONNULL_BEGIN

@interface JDDApmCrashTool : NSObject

+ (JDDApmCrashTool *)sharedInstance;

- (void)registerHandler;

- (void)handleCrashLog:(JDDThreadStack*)threadStack;

@end

NS_ASSUME_NONNULL_END
