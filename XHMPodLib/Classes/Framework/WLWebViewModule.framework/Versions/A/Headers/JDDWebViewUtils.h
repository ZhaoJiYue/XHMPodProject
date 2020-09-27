//
//  JDDWebViewUtils.h
//  jddWebView
//
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

#define JDDWebViewWeakify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __weak __typeof__(x) __weak_##x##__ = x; \
_Pragma("clang diagnostic pop")

#define JDDWebViewStrongify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __typeof__(x) x = __weak_##x##__; if (!x)return;\
_Pragma("clang diagnostic pop")


NS_ASSUME_NONNULL_BEGIN

@interface JDDWebViewUtils : NSObject

+ (UIViewController *)jddWebUtilsGetTopShowController;

+ (void)jddWebUtilsCleanWebCacheAndCookies;

@end

NS_ASSUME_NONNULL_END
