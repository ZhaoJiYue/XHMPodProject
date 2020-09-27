//
//  JRApmReportNetwork.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/25.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import "JRApmReportBaseInfo.h"

@interface JRApmTransactionMetrics : NSObject

/*
 * fetchStartDate returns the time when the user agent started fetching the resource, whether or not the resource was retrieved from the server or local resources.
 *
 * The following metrics will be set to nil, if a persistent connection was used or the resource was retrieved from local resources:
 *
 *   domainLookupStartDate
 *   domainLookupEndDate
 *   connectStartDate
 *   connectEndDate
 *   secureConnectionStartDate
 *   secureConnectionEndDate
 */
@property (nonatomic, assign) int64_t fetchStartDate;

/*
 * domainLookupStartDate returns the time immediately before the user agent started the name lookup for the resource.
 */
@property (nonatomic, assign) int64_t domainLookupStartDate;

/*
 * domainLookupEndDate returns the time after the name lookup was completed.
 */
@property (nonatomic, assign) int64_t domainLookupEndDate;

/*
 * connectStartDate is the time immediately before the user agent started establishing the connection to the server.
 *
 * For example, this would correspond to the time immediately before the user agent started trying to establish the TCP connection.
 */
@property (nonatomic, assign) int64_t connectStartDate;

/*
 * If an encrypted connection was used, secureConnectionStartDate is the time immediately before the user agent started the security handshake to secure the current connection.
 *
 * For example, this would correspond to the time immediately before the user agent started the TLS handshake.
 *
 * If an encrypted connection was not used, this attribute is set to nil.
 */
@property (nonatomic, assign) int64_t secureConnectionStartDate;

/*
 * If an encrypted connection was used, secureConnectionEndDate is the time immediately after the security handshake completed.
 *
 * If an encrypted connection was not used, this attribute is set to nil.
 */
@property (nonatomic, assign) int64_t secureConnectionEndDate;

/*
 * connectEndDate is the time immediately after the user agent finished establishing the connection to the server, including completion of security-related and other handshakes.
 */
@property (nonatomic, assign) int64_t connectEndDate;

/*
 * requestStartDate is the time immediately before the user agent started requesting the source, regardless of whether the resource was retrieved from the server or local resources.
 *
 * For example, this would correspond to the time immediately before the user agent sent an HTTP GET request.
 */
@property (nonatomic, assign) int64_t requestStartDate;

/*
 * requestEndDate is the time immediately after the user agent finished requesting the source, regardless of whether the resource was retrieved from the server or local resources.
 *
 * For example, this would correspond to the time immediately after the user agent finished sending the last byte of the request.
 */
@property (nonatomic, assign) int64_t requestEndDate;

/*
 * responseStartDate is the time immediately after the user agent received the first byte of the response from the server or from local resources.
 *
 * For example, this would correspond to the time immediately after the user agent received the first byte of an HTTP response.
 */
@property (nonatomic, assign) int64_t responseStartDate;

/*
 * responseEndDate is the time immediately after the user agent received the last byte of the resource.
 */
@property (nonatomic, assign) int64_t responseEndDate;

- (instancetype)initWithTransactionMetric:(NSURLSessionTaskTransactionMetrics*)transMetric API_AVAILABLE(macosx(10.12), ios(10.2), watchos(3.0), tvos(10.0));

@end


@interface JRApmReportNetwork : JRApmReportBaseModel

@property (nonatomic, copy) NSURL *reqUrl;
@property (nonatomic, assign) NSInteger stateCode;

@property (nonatomic, assign) NSInteger errorCode;
@property (nonatomic, copy) NSString *errorDescription;

@property (nonatomic, copy) NSString *method;

@property (nonatomic, copy) NSString *requestMechanism;

@property (nonatomic, assign) NSInteger requestSize;
@property (nonatomic, assign) NSInteger responseSize;


@property (nonatomic, assign) int64_t fetchStartDate;

@property (nonatomic, assign) int64_t domainLookupStartDate;
@property (nonatomic, assign) int64_t domainLookupEndDate;

@property (nonatomic, assign) int64_t connectStartDate;

@property (nonatomic, assign) int64_t secureConnectionStartDate;//ssl
@property (nonatomic, assign) int64_t secureConnectionEndDate;

@property (nonatomic, assign) int64_t connectEndDate;

@property (nonatomic, assign) int64_t requestStartDate;
@property (nonatomic, assign) int64_t requestEndDate;

@property (nonatomic, assign) int64_t responseStartDate;
@property (nonatomic, assign) int64_t responseEndDate;


@property (nonatomic, assign) int64_t trace_id;
@property (nonatomic, assign) int64_t span_id;

@property (nonatomic, strong) JRApmTransactionMetrics *transMetric;

@end
