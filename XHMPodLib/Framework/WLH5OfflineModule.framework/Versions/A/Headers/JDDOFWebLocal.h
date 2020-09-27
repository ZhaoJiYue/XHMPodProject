//
//  JDDOFWebLocal.h
//  AFNetworking
//
//  Created by luoyushi on 2020/2/13.
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JDDOFCacheElement.h"
#import "JDDOFConfigManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JDDOFWebLocal : NSObject

@property (nonatomic, strong) NSMutableDictionary *webCacheDict;
@property (nonatomic, assign) BOOL isDecrypt;

@property (nonatomic, assign) BOOL isEnable;
@property (nonatomic, strong) JDDOFConfig *config;
@property (nonatomic, assign) NSInteger loadType;// 0:file 1:localHost

+ (instancetype)sharedInstance;

+ (NSData *)AES128DecryptCBCWithData:(NSData *)data;

- (NSString*)diskDirpath;

//- (JDDOFURLElement*)isLocalCacheURL:(NSURL*)requestURL;

- (JDDOFURLElement*)isLocalCacheURL:(NSURL*)requestURL;

- (NSString*)webKeyWithRequestURL:(NSString*)webBaseURL;

- (NSString*)localHTMLStringWithRequestURL:(NSURL*)requestURL;

- (NSString*)stringToLocalhostPath:(NSString*)webKey dataString:(NSString*)dataString;



- (void)downloadFile:(JDDOFCacheElement *)cacheElement resultBlock:(void (^)(NSString *bundleKey, NSError *error))resultBlock;



- (BOOL)updateWebCacheList:(NSArray *)elementList;
- (void)removeElementList:(NSArray*)elementList;


- (BOOL)addLocalBundleResource:(JDDOFCacheElement *)cacheElement localBundlePath:(NSString*)localBundlePath;

@end

NS_ASSUME_NONNULL_END
