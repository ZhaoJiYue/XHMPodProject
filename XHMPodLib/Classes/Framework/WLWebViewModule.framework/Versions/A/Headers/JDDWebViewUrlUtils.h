//
//  JDDWebViewUrlUtils.h
//  JDMobile
//
//  Created by wangxiugang on 14-6-16.
//  Copyright (c) 2014年 heweihua. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JDDWebViewUrlUtils : NSObject

+ (NSString *)encodeToPercentEscapeString: (NSString *) input;

+ (NSString *)decodeFromPercentEscapeString: (NSString *) input;

/**
 为url 添加参数

 @param url url
 @param value 值
 @param key key
 @return  拼接完成的url
 */
+ (NSString *)urlAddCompnent:(NSString *)url value:(NSString *)value key:(NSString *)key;

/**
 为url 添加参数

 @param url url
 @param param 参数字典  {"a":"123","b":"456"}
 @return 拼接完成的url
 */
+ (NSString *)urlAddCompnent:(NSString *)url param:(NSDictionary *)param;

/**
 为url 添加参数

 @param url url
 @param paramString 参数字符串   "a=123&b=456"
 @return 拼接完成的url
 */
+ (NSString *)urlAddCompnent:(NSString *)url paramString:(NSString *)paramString;


/// 检查是否是h5登录页
/// @param url 当前的url
+ (NSString *)jddWebUrlUtilsCheckLoginLink:(NSURL *)url ;


/// 检查是否在黑名单
/// @param url 当前url
+ (BOOL)jddWebUrlUtilsCheckIsInBlackLinkList:(NSArray *)blackList currentUrl:(NSURL *)url;

/// 检查是否在js通信白名单
/// @param allowList 白名单列表
/// @param url url
+ (BOOL)jddWebUrlUtilsCheckIsInJSBridgeAllowedList:(NSArray *)allowList currentUrl:(NSURL *)url;

@end




