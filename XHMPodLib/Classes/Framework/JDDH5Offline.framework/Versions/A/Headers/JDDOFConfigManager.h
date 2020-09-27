//
//  JDDOFConfigManager.h
//  AFNetworking
//
//  Created by lishuai on 2020/3/19.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface JDDOFConfigManager : NSObject

+ (void)requestJddWebOfflineConfiger:(void (^)(void))resultBlock;

+ (void)handleWebOfflineConfigData:(NSDictionary *)object decrypt:(BOOL)decrypt;

+ (void)loadBunleResorces:(NSArray*)loadBunleList
               bundlePath:(NSString*)bundlePath
              resultBlock:(void (^)(NSDictionary *, NSError*))resultBlock;


+ (void)startLocalWebServer;

+ (BOOL)isNEetStateDownload:(const NSString*)currentNet downloadType:(NSUInteger)downloadType;
+ (NSString*)netState;

@end

NS_ASSUME_NONNULL_END
