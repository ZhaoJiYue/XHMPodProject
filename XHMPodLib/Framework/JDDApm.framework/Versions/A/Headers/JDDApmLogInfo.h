//
//  JDDApmLogInfo.h
//  AFNetworking
//
//  Created by luoyushi on 2020/4/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDApmLogInfo : NSObject

@property (atomic, copy, readonly) NSString *logoInfo;//max 20

+ (JDDApmLogInfo*)sharedInstance;

- (void)addLogInfo:(NSString*)type logInfo:(NSString*)info;

@end

NS_ASSUME_NONNULL_END
