//
//  JDDApmExceptionHandle.h
//  AFNetworking
//
//  Created by luoyushi on 2019/12/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDApmExceptionHandle : NSObject

+ (void)registerHandler;

+ (void)handleExceptionHandler:(NSException*)exception;

@end

NS_ASSUME_NONNULL_END
