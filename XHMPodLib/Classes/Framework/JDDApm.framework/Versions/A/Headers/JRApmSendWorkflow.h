//
//  JRApmSendWorkflow.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/24.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JRApmSDK.h"




static inline BOOL hasMask(int64_t option, int64_t mask)
{
    return (int64_t)(option & mask) == mask;
}

typedef void (^JRApmRecordWorkBlock)(id recordObject);


typedef NS_ENUM(NSInteger, JRApmReportType)
{
    JRJRApmReportType_NONE,
    //谁先满足容量谁先上报，其次按照顺序优先级
    JRJRApmReportType_ANR,
    
    JRJRApmReportType_LaunchBase,
    JRJRApmReportType_LaunchCustom,
    
    
    JRJRApmReportType_Error,
    
    JRJRApmReportType_Network,
    
    JRJRApmReportType_UI,
    
    JRJRApmReportType_Memory,
    
    JRJRApmReportType_Web,
    
    JRJRApmReportType_ALL,
};

@class JRApmReportBaseModel;

@interface JRApmSendWorkflow : NSObject


@property (nonatomic, assign) BOOL initSdkFinish;

@property (nonatomic, assign) BOOL isCracked;//主线程计算好，防止死锁

@property (atomic, assign) BOOL enterDidEnterBackground;//是否进入过后台
@property (atomic, assign) BOOL enterDidEnterBackgroundUITemp;//是否进入过后台

@property (atomic, copy) NSString *currentVC;

@property (nonatomic, strong) JDDApmConfig *sdkConfig;//SDK配置信息

@property (atomic, strong) NSMutableDictionary *smgHeader; //
@property (nonatomic, copy) JRApmIgnoreNetWorkBlock ignoreNetWorkBlock;

@property (nonatomic, copy) NSString *launchGroupId; //和自定义埋点启动数据的关联ID gid

@property (nonatomic, copy) NSSet *vcUITimeBeginTime;//vc只记录可见页面耗时


+ (instancetype)defaultSendWorkflow;


- (void)startInit;

- (void)performBlock:(dispatch_block_t)block;

- (int64_t)generateTraceId;

- (BOOL)ignoreNetWork:(NSURL*)requestUrl;


- (void)recordWorkflowReportStart:(JRApmReportType)reportType
                         reportId:(NSString*)reportId
                      recordClass:(Class)recordClass
                            block:(JRApmRecordWorkBlock)block;

- (void)recordWorkflowReportUpdate:(JRApmReportType)reportType
                          reportId:(NSString*)reportId
                             block:(JRApmRecordWorkBlock)block;

- (void)recordWorkflowReportRemove:(JRApmReportType)reportType
                          reportId:(NSString*)reportId
                             block:(JRApmRecordWorkBlock)block;


- (void)sendWorkflowReport:(JRApmReportType)reportType
                  reportId:(NSString*)reportId;

- (void)sendWorkflowReportWithData:(JRApmReportType)reportType
                        recordData:(NSDictionary*)recordData
                          reportId:(NSString*)reportId
                             block:(JRApmRecordWorkBlock)block;


-(id)userDefaultsObjectForKey:(NSString*)key;

-(void)userDefaultsRemoveObject;

-(void)userDefaultsUpdateValue:(id)value key:(NSString*)key;


//同步立即发送崩溃数据  注意线程安全，任何线程都有可能调用此方法
- (BOOL)sendCrashSynchronousData:(NSDictionary*)parameters;

@end
