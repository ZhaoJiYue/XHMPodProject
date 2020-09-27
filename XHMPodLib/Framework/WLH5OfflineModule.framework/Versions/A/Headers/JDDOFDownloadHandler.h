//
//  JDDOFDownloadHandler.h
//  Pods
//
//  Created by luoyushi on 2020/2/19.
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDOFDownloadHandler : NSObject <NSURLSessionTaskDelegate>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *zipPath;           //下载文件路径

- (void)downloadProgressCallback:(void (^)(long long currentContentLength, long long expectedContentLength))progressCallback
                  finishCallback:(void (^)(void))finishCallback
                    failCallback:(void (^)(NSError *err))failCallback;

- (void)cancel;

@end

NS_ASSUME_NONNULL_END
