//
//  JRApmHook.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/24.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>

@interface JRApmHook : NSObject

+ (void)jrapm_swizzlingInstanceClass:(Class)swizzlingClass original:(SEL)originalSelector swizzling:(SEL)swizzlingSelector;

+ (void)jrapm_exchangeMethodClass:(Class)swizzlingClass selector:(SEL)selector original:(Method)originalMethod swizzling:(Method)swizzledMethod;

@end


void JRApmExchangeInstanceMethod(Class originalClass, SEL originalSelector, Class swizzledClass, SEL swizzledSelector);
void JRApmExchangeClassMethod(Class originalClass, SEL originalSelector, Class swizzledClass, SEL swizzledSelector);
