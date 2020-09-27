//
//  JRApmWebView.h
//  JDDApm_Example
//
//  Created by luoyushi on 2019/7/25.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface JRApmWebView : NSObject

+ (void)startInit;


@end

@interface WKWebView(JRApm)
@property (nonatomic, copy) NSURL *jrapm_requestURL;
@property (nonatomic, copy) NSString *jrapm_referrer;

+ (void)jrApmSwizzledClass;

@end
