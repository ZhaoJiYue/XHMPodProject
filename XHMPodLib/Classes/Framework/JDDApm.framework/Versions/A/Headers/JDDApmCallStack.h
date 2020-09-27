//
//  JDDApmCallStack.h
//  Pods
//
//  Created by luoyushi on 2020/4/28.
//

#import <Foundation/Foundation.h>
#include <mach/mach_time.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDApmCallStack : NSObject

+ (NSString*)stringStackOfThread:(thread_t)thread;

@end

NS_ASSUME_NONNULL_END
