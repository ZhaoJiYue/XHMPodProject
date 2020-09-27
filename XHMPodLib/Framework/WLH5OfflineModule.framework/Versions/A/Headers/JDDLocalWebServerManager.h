//
//  JDDLocalWebServerManager.h
//  Pods
//
//  Created by luoyushi on 2020/2/21.
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDLocalWebServerManager : NSObject <NSURLSessionDelegate >

@property (nonatomic, copy, readonly) NSString *localhostURL;

+ (instancetype)sharedInstance;


- (BOOL)isRunning;
- (void)start:(NSString*)webLocalPath;
- (void)stop;

@end

NS_ASSUME_NONNULL_END
