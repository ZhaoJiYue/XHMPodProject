//
//  JDDWebViewController.h
//  JDCustomWebView
//
//  Copyright © 2020 JDD Finance. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface JDDWebViewController : UIViewController

- (instancetype)initWithUrl:(NSString *)url;

- (instancetype)initWithParams:(NSDictionary *)params;

/// 加载Url
/// @param url 要加载的url string
- (void)jddWebViewController_loadUrl:(NSString *)url;
-(void)callJS:(NSString *)handlerName params:(NSDictionary *)param callBack:(void (^)(NSDictionary *result))callback;

@end


