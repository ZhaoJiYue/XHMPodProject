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
    JDDOFCacheElementStatus_dowloading = 4, //
};


@interface JDDOFCacheElement : NSObject <NSCoding>

@property (nonatomic, copy) NSString *downloadURL;//
@property (nonatomic, copy) NSString *loadBunle;//本地zip名称
@property (nonatomic, copy) NSString *webBaseURL;//
@property (nonatomic, copy) NSString *version;//发布版本
@property (nonatomic, assign) NSInteger downloadType; //下载时机，1-WIFI，2-全网络
@property (nonatomic, assign) NSInteger isForce;//是否强制下载 1--是，2--否
@property (nonatomic, copy) NSString *md5;//文件md5

@property (nonatomic, assign) JDDOFCacheElementStatus elementStatus;//!<本地版本离线包当前状态;初次初始化默认需要更新。
@property (nonatomic, assign) int64_t lastUseTime;//

@property (nonatomic, strong) NSDictionary *subPath;//配置文件config.json中的subPaths字段

@property (nonatomic, copy) NSString *versionWithFile;//文件版本
@property (nonatomic, assign) NSInteger idWithFile;//文件模块id
@property (nonatomic, assign) NSInteger isGray;//是否灰度资源


#ifdef DEBUG
@property (nonatomic, copy) NSString *webBaseURLHash;//
#endif

- (instancetype)initWithDic:(NSDictionary *)dic;

//网路数据替换本地数据
- (void)updateElemnet:(JDDOFCacheElement*)netElement;

//读取config.json配置信息放入到cacheElement
- (void)updateConfigSubPath:(NSString*)conifg;

@end



@interface JDDOFURLElement : NSObject//查找离线对象时的零时对象

@property (nonatomic, copy) NSString *webBaseURL;//
@property (nonatomic, copy) NSString *webKey;//
@property (nonatomic, strong) NSString *urlFileSubPath;//
@property (nonatomic, weak) JDDOFCacheElement *cacheElement;//

@property (nonatomic, copy) NSString *htmlString;//读取到的HTML文本
@property (nonatomic, copy) NSString *loadURlString;//加载的URL完整链接

@end

NS_ASSUME_NONNULL_END
