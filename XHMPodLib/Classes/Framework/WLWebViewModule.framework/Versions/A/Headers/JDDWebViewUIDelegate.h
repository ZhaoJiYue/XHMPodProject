//
//  JDDWebViewUIDelegate.h
//  jddWebView
//
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class JDDWebView;
@class WKWebViewConfiguration;
@class WKNavigationAction;
@class WKWindowFeatures;
@class WKFrameInfo;
@protocol JDDWebViewUIDelegate <NSObject>

/// H5 DOM window 调用 window.open() 方法 新打开一个h5e页面
/// @param webView JDDWebView
/// @param configuration WKWebViewConfiguration
/// @param navigationAction WKNavigationAction
/// @param windowFeatures WKWindowFeatures
- (void)jddWebView:(JDDWebView *)webView createWebViewWithConfiguration:(WKWebViewConfiguration *)configuration forNavigationAction:(WKNavigationAction *)navigationAction windowFeatures:(WKWindowFeatures *)windowFeatures;

/// h5 DOM window 调用 window. close()方法 需要将当前webview关闭
/// @param webView JDDWebView对象
- (void)jddWebViewDidClose:(JDDWebView *)webView;

/*****以下方法 JDDWebView内部均已实现 并处理相应逻辑 等业务有UI定制化需求时再进行开放****/
///// h5 DOM window 调用alert()方法 需要弹出alert
///// @param webView JDDWebView
///// @param message alert message
///// @param frame 当前iframe信息
///// @param completionHandler 回调
//- (void)jddWebView:(JDDWebView *)webView runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(void))completionHandler;
//
///// h5 DOM window 调用confirm()方法
///// @param webView JDDWebView
///// @param message confirm message
///// @param frame 当前iframe信息
///// @param completionHandler 回调
//- (void)jddWebView:(JDDWebView *)webView runJavaScriptConfirmPanelWithMessage:(NSString *)message initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(BOOL result))completionHandler;
//
///// h5 DOM 调用 text input 组件 需要弹出输入确认框
///// @param webView JDDWebView
///// @param prompt 描述message
///// @param defaultText 默认描述
///// @param frame 当前iframe信息
///// @param completionHandler 回调
//- (void)jddWebView:(JDDWebView *)webView runJavaScriptTextInputPanelWithPrompt:(NSString *)prompt defaultText:(nullable NSString *)defaultText initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(NSString * _Nullable result))completionHandler;


@end

NS_ASSUME_NONNULL_END
