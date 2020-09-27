//
//  JRApmNetPerformanceRecord.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/21.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRApmNetPerformanceRecord : NSObject


+ (BOOL)isOpenPerformance;

+ (BOOL)ignoreNetworkPerformance:(NSURL*)requestUrl  request:(NSURLRequest*)currentRequest;


/**
 生成request唯一ID

 @param requestObj 请求对象
 @param url 请求链接
 @return 返回唯一ID
 */
+(NSString*)generateRequestID:(id)requestObj url:(NSURL*)url;

/**
 生成网路请求trace header

 @return 返回
 */
+ (NSDictionary*)generatSgmHeaderContext;


/**
 request 添加 生成网路请求trace header
 
 @return 返回
 */
+ (NSMutableURLRequest*)generatSgmHeaderContextWithRequest:(NSMutableURLRequest*)request;



/**
 记录 网路请求 发送数据 开始

 @param requestID 请求唯一ID
 @param url 请求链接
 @param method 请求方法
 @param requestMechanism 请求方式
 @param requestSize 请求大小 （请求头+请求链接）
 @param requestStartDate 请求时间
 */
+ (void)netPerformanceRecordRequestStart:(NSString*)requestID
                                     url:(NSURL*)url
                                  method:(NSString*)method
                        requestMechanism:(NSString*)requestMechanism
                             requestSize:(NSInteger)requestSize
                           requestHeader:(NSDictionary*)requestHeader
                        requestStartDate:(NSDate*)requestStartDate;



/**
 记录 网路请求 发送数据 结束

 @param requestID 请求唯一ID
 @param requestEndDate 请求结束时间
 */
+ (void)netPerformanceRecordRequestEnd:(NSString*)requestID url:(NSURL*)url requestEndDate:(NSDate*)requestEndDate;



/**
 记录 网路请求 接收数据 开始

 @param requestID 请求唯一ID
 @param responseStartDate 接收开始时间
 */
+ (void)netPerformanceRecordResponseStart:(NSString*)requestID url:(NSURL*)url responseStartDate:(NSDate*)responseStartDate;


/**
 记录 网路请求 接收数据 结束

 @param requestID 请求唯一ID
 @param stateCode 响应状态
 @param responseSize 返回响应大小
 @param responseEndDate 接收数据完成时间
 @param error 请求错误
 */
+ (void)netPerformanceRecordResponseEnd:(NSString*)requestID
                                    url:(NSURL*)url
                              stateCode:(NSInteger)stateCode
                           responseSize:(NSInteger)responseSize
                        responseEndDate:(NSDate*)responseEndDate
                                  error:(NSError*)error;



+ (void)netPerformanceRecordURLSessionRequestStart:(NSURLSessionTask*)task;

+ (void)netPerformanceRecordURLSessionResponseEnd:(NSURLSessionTask*)task error:(NSError*)error data:(NSData*)data;



+ (void)netPerformanceRecordURLSessionDataReceived:(NSURLSessionTask*)task dataLength:(int64_t)dataLength;

+ (void)netPerformanceRecordURLSessionFinishCollectingMetrics:(NSURLSessionTask*)task metrics:(NSURLSessionTaskMetrics*)metrics API_AVAILABLE(ios(10.2));

+ (void)recordMechanism:(NSURLSessionTask*)task mechanism:(NSString *)mechanism;


@end
