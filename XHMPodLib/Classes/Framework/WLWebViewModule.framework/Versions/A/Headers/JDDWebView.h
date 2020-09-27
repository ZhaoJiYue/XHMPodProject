//
//  JDDWebView.h
//  JDDCoreKit
//
//

#import <UIKit/UIKit.h>
#import <WebKit/WKWebView.h>
#import <WebKit/WebKit.h>

#import "JDDJSBridgeEngine.h"
#import "JDDWebViewConfiguration.h"

#import "JDDWebViewDelegate.h"
#import "JDDWebViewUIDelegate.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, JDDWebViewLoadStatus)
{
    JDDWebViewLoadStatus_loading = 1,
    JDDWebViewLoadStatus_loadSucceed = 2,
    JDDWebViewLoadStatus_cancle = 3,
    JDDWebViewLoadStatus_failed = 4
    
};


@interface JDDWebView : UIView

/// 实例化jddwebview对象
/// @param frame view frame
- (instancetype)initWithFrame:(CGRect)frame;


/// 实例化 jddWebview对象
/// @param frame view frame
/// @param configuration 配置文件
- (instancetype)initWithFrame:(CGRect)frame configuration:(nullable JDDWebViewConfiguration *)configuration;

/// 加载普通url 不需登录的h5页面
/// @param urlString 要加载的h5地址
- (void)jddWebViewLoadUrl:(NSString *)urlString;

/// 加载 html string 渲染Web页面
/// @param html html string
/// @param baseUrlString base url
- (void)jddWebViewLoadHTMLString:(NSString *)html baseUrl:(NSString *)baseUrlString;

/// JSBridge注册JS与原生通信协议名
/// @param handlerName 协议名称 string类型
- (void)jddWebViewRegisterBridgeHandler:(NSString *)handlerName;

/// JSBridge:原生主动发送消息到web页面
/// @param data data description
- (void)jddWebViewJSBridgeSendData:(NSDictionary *)data;


/// 执行js脚本
/// @param javaScriptString js 代码串
/// @param completionHandler 执行完成的回调
- (void)jddWebViewEvaluateJavaScript:(NSString *)javaScriptString completionHandler:(void (^ _Nullable)(_Nullable id result, NSError * _Nullable error))completionHandler;


/// 获取浏览器UA信息 注意该方法为异步执行
/// @param completeHandler 获取到UA信息后的回调
- (void)jddWebView_getWebViewUserAgentCompleteHandler:(void (^)(NSString * userAgent))completeHandler;

- (void)jddWebViewUserAgentReadlyHandler:(void (^)(NSString * userAgent))userAgentReadyHandler;

/// 清空JDDWebView缓存 包括web页面缓存 cookie信息 以及登录态缓存
/// 在用户退出登录时需要调用该方法
- (void)jddWebViewCleanWebCache;


@property(weak,nonatomic)id<JDDWebViewDelegate> delegate;

@property(weak,nonatomic)id<JDDWebViewUIDelegate> UIDelegate;


/// 内部使用的wkwebview实例
@property (nonatomic, readonly) WKWebView * wkWebView;

///继承自WKWebViewConfiguration的Webview配置文件
@property (nonatomic, strong)  JDDWebViewConfiguration * configuration;

/// JS 通信引擎
@property (nonatomic, strong)  JDDJSBridgeEngine* jsBridgeEngine;

///webview 内置scrollview
@property (nonatomic,strong,readonly) UIScrollView *scrollView;

///当前webview展示的URL
@property (nonatomic,strong,readonly) NSURL * URL;

/// 原始URL，即Webview第一次打开URL链接
@property (nonatomic,strong,readonly) NSURL * originURL;

/// 当前webview是否正在加载
@property (nonatomic, readonly, getter=isLoading) BOOL loading;

/// 导航堆栈中是否存在上一级h5e页面
@property (nonatomic, readonly) BOOL canGoBack;

///导航堆栈中是否存在下一级h5e页面
@property (nonatomic, readonly) BOOL canGoForward;

/// 是否根据视图大小来缩放页面  默认为YES
@property (nonatomic,assign) BOOL scalesPageToFit;

@property (nonatomic,assign) BOOL allowsBackForwardGestures;

/// webview加载状态
@property (nonatomic, assign) JDDWebViewLoadStatus loadStatus;

/// web页面title发生改变的回调 当h5页面调用document.title改变页面标题时 通知webview上层修改导航栏标题
@property (copy, nonatomic) void (^webTitleChangedHandler)(NSString *title);

///web页面加载进度回调
@property (copy, nonatomic) void (^webViewProgressHandler)(CGFloat progress);

///webview canGoBack属性发生变化 用于处理关闭和返回按钮的逻辑
@property (copy, nonatomic) void (^canGoBackChangeHandler)(BOOL canGoBack);


/// 返回backForwardList中的上一级页面
- (void)jddWebViewGoBack;

/// 返回backForwardList中的下一级页面
- (void)jddWebViewGoForward;

/// 刷新当前页面
- (void)jddWebViewReload;

/// 完全重新加载当前页面
- (void)jddWebViewReloadFromOrigin;

/// 停止加载当前页面
- (void)jddWebViewStopLoading;

///backForwardList 层数
- (void)jddWebViewGobackWithStep:(NSInteger)step;



@end

NS_ASSUME_NONNULL_END
