//
//  JDOFWebView.h
//  JDDH5Offline
//
//  Created by luoyushi on 2020/3/12.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JROFDelegateProxy : NSProxy

@property (nonatomic, weak) id target;


- (instancetype)initWithTarget:(id)target;

@end

@interface _JROFWKWebViewProxy : JROFDelegateProxy

@end



@interface WKWebView (JDDH5Offline)
@property (nonatomic, assign) BOOL jdd_of_localHtml;
@property (nonatomic, copy) NSString* jdd_of_stringResponse;
@property (nonatomic, strong) NSURL* jdd_of_baseURL;

+ (void)jddofSwizzledClass;

@end


NS_ASSUME_NONNULL_END
