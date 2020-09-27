//
//  JDDOFConfigManager.h
//  AFNetworking
//
//  Created by lishuai on 2020/3/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//预留配置字段
@interface JDDOFConfig : NSObject

@property (nonatomic, copy) NSString *requestURl;
@property (nonatomic, copy) NSString *appkey;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *ivKey;

@property (nonatomic, copy) NSString *offlineKey;

@end





@interface JDDOFConfigManager : NSObject

+ (void)requestJddWebOfflineConfiger:(JDDOFConfig *)config resultBlock:(void (^)(void))resultBlock;


+ (void)startLocalWebServer;

+ (BOOL)isNEetStateDownload:(const NSString*)currentNet downloadType:(NSUInteger)downloadType;
+ (NSString*)netState;

@end

NS_ASSUME_NONNULL_END
