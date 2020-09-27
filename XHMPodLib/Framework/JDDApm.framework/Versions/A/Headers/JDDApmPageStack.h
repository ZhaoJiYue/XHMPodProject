//
//  JDDApmPageStack.h
//  Pods
//
//  Created by luoyushi on 2020/2/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDApmPageStack : NSObject

@property (atomic, copy, readonly) NSString *currentPageStackString;//max 20
@property (nonatomic, assign, readonly) NSInteger currentAccessCountForJDDApm;

+ (JDDApmPageStack*)sharedInstance;

- (void)registerHandler;


@end

NS_ASSUME_NONNULL_END
