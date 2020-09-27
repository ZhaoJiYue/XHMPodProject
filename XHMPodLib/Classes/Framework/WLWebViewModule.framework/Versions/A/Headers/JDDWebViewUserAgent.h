//
//  JDDWebViewUserAgent.h
//  jddWebView
//
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 读取浏览器UA 非JDDWebView UA
@interface JDDWebViewUserAgent : NSObject

+ (void)jddWebUserAgentGetWebUserAgentCompleteHandler:(void(^)(NSString *ua , NSError *error))completeHandler;

@end

NS_ASSUME_NONNULL_END
