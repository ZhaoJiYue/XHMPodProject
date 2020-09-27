//
//  JDDJsApiDispatcher.h
//  jddWebView
//
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDJsApiDispatcher : NSObject

@property (nonatomic, strong) NSDictionary *startupParams;
- (void)jddJsApiDispatchMessage:(NSDictionary *)data  callbackHandler:(void(^)(NSDictionary * callbackDic))callBackHandler;

@end

NS_ASSUME_NONNULL_END
