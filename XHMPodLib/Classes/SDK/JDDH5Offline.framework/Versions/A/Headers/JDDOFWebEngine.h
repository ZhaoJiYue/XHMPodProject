//
//  JDDOFWebEngine.h
//  JDDH5Offline
//
//  Created by luoyushi on 2020/3/12.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface JDDOFWebEngine : NSObject

+ (instancetype)shareWebEngine;

- (void)webViewDidFinishLoad:(UIView *)webView;
- (BOOL)webView:(UIView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(NSInteger)navigationType;

- (BOOL)loadLocalWebHtml:(WKWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(NSInteger)navigationType;

@end

NS_ASSUME_NONNULL_END
