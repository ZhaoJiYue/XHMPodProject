//
//  JDDJSBridgeEngine.h
//  JDDCoreKit
//
//

#import <Foundation/Foundation.h>
#import "JDDWebViewJavascriptBridge.h"

NS_ASSUME_NONNULL_BEGIN

@interface JDDJSBridgeEngine : NSObject

@property (nonatomic, strong) JDDWebViewJavascriptBridge * bridge;

@property (nonatomic, strong) NSDictionary *startupParams;

+ (instancetype)registerBridgeForWebView:(JDD_WVJB_WEBVIEW_TYPE*)webView webViewDelegate:(JDD_WVJB_WEBVIEW_DELEGATE_TYPE*)webViewDelegate;

- (void)registerBridgeHandler:(NSString *)handlerName;

- (void)jddJSBridgeSendMessageToWeb:(NSDictionary *)data;

@end

NS_ASSUME_NONNULL_END
