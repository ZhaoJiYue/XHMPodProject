//
//  JDDWebViewDelegate.h
//  jddWebView
//
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class JDDWebView;

@protocol JDDWebViewDelegate <NSObject>
@optional

/// 开始加载url的回调
/// @param webView jddwebview 实例
- (void)jddWebViewDidStartLoad:(JDDWebView *)webView;

/// 结束加载url的回调
/// @param webView jddwebview 实例
- (void)jddWebViewDidFinishLoad:(JDDWebView *)webView;

/// url加载失败的回调
/// @param webView jddwebview 实例
/// @param error error 信息
- (void)jddWebView:(JDDWebView *)webView didFailLoadWithError:(NSError *)error;

/// 是否可以加载当前Request
/// @param webView jddwebview 实例
/// @param request 当前即将加载的request
/// @param navigationAction request 导航信息 包含source frame 与target frame
- (BOOL)jddWebView:(JDDWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationAction:(WKNavigationAction *)navigationAction;

/// 收到服务端302重定向回调
/// @param webView jddwebview 实例
/// @param navigation WKNavigation object
- (void)jddWebView:(JDDWebView *)webView didReceiveServerRedirectForProvisionalNavigation:(null_unspecified WKNavigation *)navigation;

/// 单次navigation response 结束的回调
/// @param webView jddwebview 实例
/// @param response NSHTTPURLResponse object
- (void)jddWebView:(JDDWebView *)webView shouldEndLoadWithResponse:(NSHTTPURLResponse *)response;

/// wkwebview  content进程终止的回调
/// @param webView jddwebview 实例
- (void)jddWebViewWebContentProcessDidTerminate:(JDDWebView *)webView;


/// webe页面拦截到二次登录的回调 需要上层处理登录逻辑 并将当前的webview关闭 重新打开新的webview加载登陆后的h5
/// @param webView jddwebview 实例
/// @param url 触发二次登录的url
- (void)jddWebView:(JDDWebView *)webView didReceiveWebLoginRedirectForReturnUrl:(NSString *)url;

/// 命中域名黑名单的回调
/// @param webView jddwebview 实例
/// @param url 命中黑名单的rurl
- (void)jddWebView:(JDDWebView *)webView didReceiveBlackUrl:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
