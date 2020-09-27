//
//  NSString+Query.h
//  AFNetworking
//
//  Created by vincent on 2019/7/11.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JDDQuery)


/**
 query字符串转字典

 @param query query字符串
 @param encoding 编码
 @return 字典实例
 */
+ (NSDictionary*)dictionaryFromQuery:(NSString*)query usingEncoding:(NSStringEncoding)encoding;

+ (NSArray*)getKeyValueArrFirstEqual:(NSString*)string;

@end

NS_ASSUME_NONNULL_END
