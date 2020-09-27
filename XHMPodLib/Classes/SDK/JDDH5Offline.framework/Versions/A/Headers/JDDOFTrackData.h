//
//  JDDOFTrackData.h
//  Pods
//
//  Created by luoyushi on 2020/6/10.
//

#import <Foundation/Foundation.h>

/**
 *  离线化埋点信息 (https://cf.jd.com/pages/viewpage.action?pageId=309002737)
 *
 *  埋点时机
 *  1. 离线资源下载失败   离线化下载/解压 时
 *  2. 离线页面PV    离线化页面html 读取出来进行loadurl时
 *  3. 离线页面加载时长（白屏） 离线化页面加载完全后，调用sgm(按照性能监控提供的 时机和 数据)
 *  4.  未找到离线资源      1. 进入页面读取html 2. 拦截处进行离线化资源替换加载时(仅处理离线化资源，线上资源不处理)
 *
 */

@interface JDDOFTrackData : NSObject

+ (instancetype)shareInstance;

/**
 *  1. 离线资源下载失败   离线化下载/解压 时
 *  上报：
 *  1.服务名称
 *  2.版本号
 *  3.是否灰度
 *  4.离线化资源下载失败上报
 */
+ (void)event_dowload_fail:(NSString*)name verion:(NSString*)version isGray:(NSInteger)isGray error:(NSString*)error;

/**
 *  2. 离线页面PV    离线化页面html 读取出来进行loadurl时
 *  上报：
 *  1.服务名称
 *  2.版本号
 *  3.是否灰度
 *  4.页面URL
 */
+ (void)event_load_web_page:(NSString*)name verion:(NSString*)version isGray:(NSInteger)isGray urlString:(NSString*)urlString;

/**
 *  3. 离线页面加载时长（白屏） 离线化页面加载完全后，调用sgm(按照性能监控提供的 时机和 数据)
 *  上报：
 *  1.服务名称
 *  2.版本号
 *  3.是否灰度
 *  4.页面URL
 *  5.每次加载时长
 */
+ (void)event_load_finish_time:(NSString*)name verion:(NSString*)version isGray:(NSInteger)isGray urlString:(NSString*)urlString loadTime:(NSInteger)loadTime;


/**
 *  1. 未找到离线资源      1. 进入页面读取html 2. 拦截处进行离线化资源替换加载时(仅处理离线化资源，线上资源不处理)
 *  上报：
 *  1.服务名称
 *  2.版本号
 *  3.是否灰度
 *  4.页面URL
 *  5.未找到离线资源
 */
+ (void)event_load_resource_no_find:(NSString*)name verion:(NSString*)version isGray:(NSInteger)isGray urlString:(NSString*)urlString error:(NSString*)error;

@end

