//
//  JDDOFCacheElement.h
//  Pods
//
//  Created by luoyushi on 2020/2/19.
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, JDDOFCacheElementStatus) {
    JDDOFCacheElementStatus_download = 1,//1-需要下载
    JDDOFCacheElementStatus_localAvailable = 2,//本地版本正常可用
    JDDOFCacheElementStatus_delete = 3, //需要删除
};


@interface JDDOFCacheElement : NSObject <NSCoding>

@property (nonatomic, copy) NSString *downloadURL;//
@property (nonatomic, copy) NSString *loadBunle;//本地zip名称
@property (nonatomic, copy) NSString *webBaseURL;//
@property (nonatomic, strong) NSMutableArray *webSubURLs;//
@property (nonatomic, copy) NSString *version;//发布版本
@property (nonatomic, assign) NSInteger downloadType; //下载时机，1-WIFI，2-全网络
@property (nonatomic, assign) NSInteger isForce;//是否强制下载 1--是，2--否

@property (nonatomic, assign) JDDOFCacheElementStatus elementStatus;//!<本地版本离线包当前状态;初次初始化默认需要更新。
@property (nonatomic, copy) NSString *localFileUrl;//!<本地文件目录
@property (nonatomic, assign) int64_t lastUseTime;//


- (instancetype)initWithDic:(NSDictionary *)dic;

//网路数据替换本地数据
- (void)updateElemnet:(JDDOFCacheElement*)netElement;

@end



@interface JDDOFURLElement : NSObject
@property (nonatomic, copy) NSString *webBaseURL;//
@property (nonatomic, strong) NSString *webSubURL;//
@property (nonatomic, weak) JDDOFCacheElement *cacheElement;//
@end

NS_ASSUME_NONNULL_END
