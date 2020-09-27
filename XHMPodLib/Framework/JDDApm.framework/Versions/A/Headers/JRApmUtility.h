//
//  JRApmUtility.h
//  JRApm
//
//  Created by luoyushi on 2019/6/18.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Availability.h>
#import <AvailabilityInternal.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>

#define JRApmFloor(x) (floor([[UIScreen mainScreen] scale] * (x)) / [[UIScreen mainScreen] scale])

#if defined(__IPHONE_11_0)
#define JRApm_AT_LEAST_IOS11_SDK (__IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_11_0)
#else
#define JRApm_AT_LEAST_IOS11_SDK NO
#endif

@interface JRApmUtility : NSObject


+ (double)currentTime;
+ (NSTimeInterval)appLaunchedTime;

+ (NSUInteger)currentThreadCount;

// Swizzling utilities
+ (SEL)swizzledSelectorForSelector:(SEL)selector;
+ (BOOL)instanceRespondsButDoesNotImplementSelector:(SEL)selector class:(Class)cls;
+ (void)replaceImplementationOfKnownSelector:(SEL)originalSelector onClass:(Class)cls withBlock:(id)block swizzledSelector:(SEL)swizzledSelector;
+ (void)replaceImplementationOfSelector:(SEL)selector withSelector:(SEL)swizzledSelector forClass:(Class)cls withMethodDescription:(struct objc_method_description)methodDescription implementationBlock:(id)implementationBlock undefinedBlock:(id)undefinedBlock;


+ (void)sniffWithoutDuplicationForObject:(NSObject *)object selector:(SEL)selector sniffingBlock:(void (^)(void))sniffingBlock originalImplementationBlock:(void (^)(void))originalImplementationBlock;

@end
