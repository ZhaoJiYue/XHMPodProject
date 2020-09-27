//
//  JRApmSendData.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/24.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void (^JRApmSuccessBlock)(id response);
typedef void (^JRApmFailBlock)(NSError *error);

@interface JRApmSendData : NSObject



+ (NSURLSessionDataTask*)requestWithParameters:(NSString*)url
                                    parameters:(id)parameters
                                        header:(NSDictionary*)header
                                 isSynchronous:(BOOL)isSynchronous
                                       success:(JRApmSuccessBlock)successBlock
                                          fail:(JRApmFailBlock)failBlock;

@end
