//
//  JDDOFWebLocal.h
//  AFNetworking
//
//  Created by luoyushi on 2020/2/13.
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JDDOFCacheElement.h"

NS_ASSUME_NONNULL_BEGIN

@class JDDOFConfig;

@interface JDDOFWebLocal : NSObject

@property (nonatomic, strong) NSMutableDictionary *webCacheDict;
@property (nonatomic, assign) BOOL isDecrypt;
@property (nonatomic, assign) NSTimeInterval lastRequestTimes;


@property (nonatomic, assign) BOOL isEnable;
@property (nonatomic, strong) JDDOFConfig *config;
@property (nonatomic, copy) void (^requestDataBlock)();

@property (nonatomic, assign) BOOL requestSucess;//离线化接口请求成功，才可以加载进入离线项目

+ (instancetype)sharedInstance;

+ (NSData *)AES128DecryptCBCWithData:(NSData *)data;

- (NSString*)diskDirpath;

- (JDDOFURLElement*)localHTMLStringWithRequestURL:(NSURL*)requestURL;

- (NSString*)webKeyWithRequestURL:(NSString*)webBaseURL version:(NSString*)version;

- (NSString*)stringToLocalhostPath:(NSString*)webKey idFile:(NSInteger)idFile dataString:(NSString*)dataString;



- (void)downloadFile:(JDDOFCacheElement *)cacheElement resultBlock:(void (^)(NSString *bundleKey, NSError *error))resultBlock;



- (NSError*)updateWebCacheList:(NSArray *)elementList;
- (void)removeElementList:(NSArray*)elementList onlyFile:(BOOL)onlyFile;
/**
 * 删除未知目录，不在列表中
 */
- (void)removeUnknownDir:(NSArray*)localWebkeyList;


- (NSError*)addLocalBundleResource:(JDDOFCacheElement *)cacheElement localBundlePath:(NSString*)localBundlePath;


- (JDDOFCacheElement*)getLoadWeb:(NSString*)pathKey;

@end

NS_ASSUME_NONNULL_END
