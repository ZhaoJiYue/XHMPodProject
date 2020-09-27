//
//  JRApmReportBaseInfoModel.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/24.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>


#define CATGORY_PROPERTY_GET_METHOD_FOR_CLASS(propertyname, propertynamestring , dict) \
\
- (id)propertyname \
{ \
return  [dict objectForKey:propertynamestring];\
} \

#define CATGORY_PROPERTY_SET_METHOD_FOR_CLASS(propertyname, propertynamestring , dict) \
\
- (void)set##propertyname:(NSString *)propertyname##Object {\
[dict setValue:propertyname##Object forKey:propertynamestring];\
}\

@interface JRApmReportBaseModel : NSObject

@property (nonatomic, strong) NSMutableDictionary *messageDictionary;
@property (nonatomic, assign) BOOL repordFinish;

- (NSDictionary*)reportDict;

- (void)generateMessageDictionary;
- (void)addValue:(NSString*)key value:(id)value;

- (int64_t)subductionPositive:(int64_t)a b:(int64_t)b;

+ (NSString*)deviceModel;

+ (NSString*)appVersion;
+ (NSString*)appVersionAndSub;

@end




@interface JRApmReportBaseInfo : JRApmReportBaseModel

+ (NSDictionary*)requestBaseInfo;

+ (NSString*)sdkVersion;

+ (NSString*)netState;

@end





