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

@property (nonatomic, strong) JDDOFURLElement *curretLoadWeb;

@property (nonatomic, assign) BOOL isEnable;
@property (nonatomic, strong) JDDOFConfig *config;

+ (instancetype)sharedInstance;

+ (NSData *)AES128DecryptCBCWithData:(NSData *)data;

- (NSString*)diskDirpath;

- (JDDOFURLElement*)localHTMLStringWithRequestURL:(NSURL*)requestURL;

- (NSString*)stringToLocalhostPath:(NSString*)webKey idFile:(NSInteger)idFile dataString:(NSString*)dataString;



- (void)downloadFile:(JDDOFCacheElement *)cacheElement resultBlock:(void (^)(NSString *bundleKey, NSError *error))resultBlock;



- (BOOL)updateWebCacheList:(NSArray *)elementList;
- (void)removeElementList:(NSArray*)elementList onlyFile:(BOOL)onlyFile;


- (BOOL)addLocalBundleResource:(JDDOFCacheElement *)cacheElement localBundlePath:(NSString*)localBundlePath;

@end

NS_ASSUME_NONNULL_END
