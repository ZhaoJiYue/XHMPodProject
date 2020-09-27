//
//  JDDWebViewConfiguration.h
//  JDDCoreKit
//
//

#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN


/// 集成自WKWebViewConfiguration的wkwebview配置类 可针对JDDWebView进行配置
@interface JDDWebViewConfiguration : WKWebViewConfiguration

/// 浏览器useragent 注意这里是全部覆盖重写
@property (nonatomic,copy)   NSString * userAgent;

/// 进度条颜色
@property (nonatomic,copy)   NSString * progressColor;


/// 支持h5打开的第三方App scheme数组
@property (nonatomic, strong) NSArray * supportOpenAppSchemeArr;


/// 黑名单url数组
@property (nonatomic, strong) NSArray * blackSchemeArr;

/// js 通信白名单 若该数组为空 默认全部允许通信
@property (nonatomic, strong) NSArray * jsAllowedSchemeArr;


@end

NS_ASSUME_NONNULL_END
