//
//  JDDWebViewJavascriptBridge.h
//
//  Created by Marcus Westin on 6/14/13.
//  Copyright (c) 2013 Marcus Westin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

/// 目前猜测阿里hook 底层函数  自定义scheme 无反应， 所以使用 https的scheme
#define JDDCustomProtocolScheme @"http"
#define JDDQueueHasMessage      @"dispatch_message.js.jr.jd.com"
#define JDDJSBridge             @"JDDJSBridge"

// test alipay
//#define JDDCustomProtocolScheme @"alipaybridge"
//#define JDDQueueHasMessage      @"dispatch_message"
//#define JDDJSBridge             @"AlipayJSBridge"


#define JDD_WVJB_WEBVIEW_TYPE WKWebView
#define JDD_WVJB_WEBVIEW_DELEGATE_TYPE NSObject<WKNavigationDelegate>

typedef void (^JDDWVJBResponseCallback)(id responseData);
typedef void (^JDDWVJBHandler)(id data, JDDWVJBResponseCallback responseCallback);
typedef void (^JDDWebJBCallbackBlock)(id responseData,SEL sel,JDDWVJBResponseCallback responseCallback);

@interface JDDWebViewJavascriptBridge : NSObject<WKNavigationDelegate>

@property (assign, nonatomic) BOOL isCommunication; // 是否允许通信

+ (instancetype)bridgeForWebView:(JDD_WVJB_WEBVIEW_TYPE*)webView handler:(JDDWVJBHandler)handler;
+ (instancetype)bridgeForWebView:(JDD_WVJB_WEBVIEW_TYPE*)webView webViewDelegate:(JDD_WVJB_WEBVIEW_DELEGATE_TYPE*)webViewDelegate handler:(JDDWVJBHandler)handler;
+ (instancetype)bridgeForWebView:(JDD_WVJB_WEBVIEW_TYPE*)webView webViewDelegate:(JDD_WVJB_WEBVIEW_DELEGATE_TYPE*)webViewDelegate handler:(JDDWVJBHandler)handler resourceBundle:(NSBundle*)bundle;
+ (void)enableLogging;

- (void)send:(id)message;
- (void)send:(id)message responseCallback:(JDDWVJBResponseCallback)responseCallback;
- (void)registerHandler:(NSString*)handlerName handler:(JDDWVJBHandler)handler;
- (void)callHandler:(NSString*)handlerName;
- (void)callHandler:(NSString*)handlerName data:(id)data;
- (void)callHandler:(NSString*)handlerName data:(id)data responseCallback:(JDDWVJBResponseCallback)responseCallback;
- (void)reset;



/// 注入JDD的JS  （因为需要先注入JS，再loadURL，所以事件独立 回调内 进行loadURL的后续操作）
/// @param block 回调
-(void)jddAddJsWithBlock:(void (^)(BOOL success))block;

/// JS 事件  给window添加 startupParams
/// @param startupParams 数据
/// @param block 回调
-(void)jsAddWindowStartupParams:(NSDictionary *)startupParams block:(void (^)(BOOL success))block;

@end
