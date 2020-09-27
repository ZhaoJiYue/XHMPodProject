//
//  JDDApmConfig.h
//  AFNetworking
//
//  Created by luoyushi on 2019/11/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NSString*(^JDApmUserIDBlock)(void);
typedef BOOL (^JRApmIgnoreNetWorkBlock)(NSURL *requestUrl);


typedef NS_ENUM(NSInteger, JDDAPM_OPTION)
{
    JDDAPM_OPTION_INIT                  = 1<<0,
    JDDAPM_OPTION_LAUNCH                = 1<<1,
    JDDAPM_OPTION_PERFANCE_CUSTOM       = 1<<2,
    JDDAPM_OPTION_NET                   = 1<<3,
    JDDAPM_OPTION_NET_AF                = 1<<4,
    
    JDDAPM_OPTION_WEB                   = 1<<5,
    JDDAPM_OPTION_ERROR                 = 1<<6,
    JDDAPM_OPTION_UI                    = 1<<7,
    
    JDDAPM_OPTION_ANR                   = 1<<8,
    JDDAPM_OPTION_MEMORY                = 1<<9,
    JDDAPM_OPTION_CRASH                 = 1<<10,
    
    JDDAPM_OPTION_DEBUG_UPLOAD          = 1<<20,
    JDDAPM_OPTION_ALL                   = NSIntegerMax,
};


@interface JDDApmConfig : NSObject

/**
 *  ==========必填参数==========
 *  SDK开关配置
 */
@property (nonatomic, assign) int64_t optionSwitch;


/**
 *  ==========必填参数==========
 *  应用id
 */
@property (atomic, copy) NSString* appkey;


/**
 *  ==========必填参数==========
 *  应用秘钥
 */
@property (atomic, copy) NSString* appSecret;

/**
 *  ==========必填参数==========
 *  数据上报主机URL
 */
@property (atomic, copy) NSString* hostURL;

/**
 *  ==========必填参数==========
 *  设备唯一id
 */
@property (nonatomic, copy) NSString* deviceID;

/**
 *  ==========可选参数==========
 *  用户id 获取回调block
 */
@property (nonatomic, copy) JDApmUserIDBlock userIDBlock;


/**
*  ==========可选参数==========
*  冷启动类型 0：默认标准启动   1： 快速启动    .... n： 快速启动n
*/
@property (nonatomic, assign) NSUInteger startUpType;

@end

NS_ASSUME_NONNULL_END
