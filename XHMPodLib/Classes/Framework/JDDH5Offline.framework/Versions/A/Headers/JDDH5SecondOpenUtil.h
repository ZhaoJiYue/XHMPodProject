//
//  JDDH5SecondOpenUtil.h
//  AFNetworking
//
//  Created by luoyushi on 2020/2/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDH5SecondOpenUtil : NSObject

+ (BOOL)isCSSFile:(NSString*)str;

+ (BOOL)isJSSFile:(NSString*)str;

+ (NSString*)md5:(NSString *)key;

+ (NSString *)computeHashForData:(NSData *)inputData;

+ (NSString *)encodedString:(NSString *)string;

+ (NSString *)decodedString:(NSString *)string;

+ (NSDictionary *)parameterWithURL:(NSString *) url;

+ (NSString *)parameterValueWithURL:(NSString *) url key:(NSString*)key;

+ (NSString*)diskDocumentWithDir:(NSString*)dir;

+ (NSString*)createPathWithDir:(NSString*)path;

+ (NSData*)readFile:(NSString*)filePath;
    
@end

NS_ASSUME_NONNULL_END
