//
//  NSArray+check.h
//  JDMobile
//
//  Created by caiwenqiang on 15/7/15.
//  Copyright (c) 2015年 jr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray<ObjectType> (JDDCheck)

/**
 *  防数组越界
 *
 *  @param index 索引
 *
 *  @return ObjectType
 */
- (nullable ObjectType)jddObjectAtIndexCheck:(NSInteger)index;

//COULD BE NSNULL
- (nullable ObjectType)jddObjectAtIndexSafely:(NSInteger)index;

@end


@interface NSMutableArray<ObjectType> (JDDCheck)

- (void)jddAddObjectCheck:(nonnull ObjectType)anObject;
- (void)jddInsertObjectCheck:(nonnull ObjectType)anObject atIndex:(NSUInteger)index;

- (void)jddRemoveObjectAtIndexCheck:(NSUInteger)index;
- (void)jddReplaceObjectAtIndexCheck:(NSUInteger)index withObject:(ObjectType)anObject;

@end
