//
//  JRApmReportError.h
//  AFNetworking
//
//  Created by luoyushi on 2019/8/2.
//

#import "JRApmReportBaseInfo.h"

typedef NS_ENUM(NSInteger, JRApmErrorType)
{
    JRApmErrorType_Web              = 1, //1:webview 内部错误
    JRApmErrorType_WebBusiness      = 2, //2:webview 业务错误
    JRApmErrorType_MemoryWaring     = 4, //4:memory waring
    
    JRApmErrorType_ALL,
};

@interface JRApmReportError : JRApmReportBaseModel


@property (nonatomic, assign) JRApmErrorType errorType;//1:webview
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *errorCode;
@property (nonatomic, copy) NSString *errorMsg;
@property (nonatomic, copy) NSString *ext1;

@property (nonatomic, assign) int64_t start;




+ (void)recordError:(NSString*)location errorType:(JRApmErrorType)errorType error:(NSError*)error ext1:(NSString*)ext1;


+ (void)recordError:(NSString*)location errorType:(JRApmErrorType)errorType errorCode:(NSString*)errorCode  errorMsg:(NSString*)errorMsg ext1:(NSString*)ext1;

@end

