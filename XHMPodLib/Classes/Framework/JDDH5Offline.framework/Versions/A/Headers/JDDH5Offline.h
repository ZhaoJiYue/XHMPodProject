//
//  JDDH5Offline
//  JDJRAppShell
//
//  Created by luoyushi on 14-6-12.
//  Copyright (c) 2014年 JDD. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//配置字段
@interface JDDOFConfig : NSObject

/**
 * 离线项目请求URL链接
 */
@property (nonatomic, copy) NSString *requestURl;
/**
 * 离线化应用 appkey
 */
@property (nonatomic, copy) NSString *appkey;
/**
 * 离线化应用 appId
*/
@property (nonatomic, copy) NSString *appId;
/**
 * 资源加密 key
*/
@property (nonatomic, copy) NSString *key;

/**
 * 资源加密 ivKey
*/
@property (nonatomic, copy) NSString *ivKey;

/**
 * 离线化web资源标识，用于替换成本地服务地址
*/
@property (nonatomic, copy) NSString *offlineKey;

/**
 * 强制使用最新的资源，当有新版本时是否立即删除本地资源
 *  default：true
*/
@property (nonatomic, assign) BOOL forceUseLatestResource;

/**
 * 添加本地内置离线包
*/
@property (nonatomic, copy) void (^loadBunleResorces)();

/**
 * 运行事件中的埋点
*/
@property (nonatomic, copy) void (^recodTrackData)(NSString* bid, NSDictionary* params);

@end


@interface JDDH5Offline : NSObject

+ (void)startModel:(JDDOFConfig *)config requestDataBlock:(void (^)(void))requestDataBlock;


+ (void)handleWebOfflineConfigData:(NSDictionary *)object decrypt:(BOOL)decrypt;

+ (void)loadBunleResorces:(NSArray*)loadBunleList
               bundlePath:(NSString*)bundlePath
              resultBlock:(void (^)(NSDictionary *, NSError*))resultBlock;

@end

NS_ASSUME_NONNULL_END
