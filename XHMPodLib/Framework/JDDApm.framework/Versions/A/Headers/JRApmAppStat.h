//
//  JRApmAppStat.h
//  JDDApm_Example
//
//  Created by luoyushi on 2019/9/18.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JRApmAppStat : NSObject
/// Used memory by app in byte. ( task_basic_info.resident_size )
@property (nonatomic, readonly, class) int64_t memoryAppUsed;
@property (nonatomic, readonly, class) int64_t memoryFree;
@property (nonatomic, readonly, class) int64_t memoryAll;

// app uuid
@property (nonatomic, readonly, class) NSString* executableUUID;

/* The real physical memory used by app.
 - https://stackoverflow.com/questions/9660763/whats-the-right-statistic-for-ios-memory-footprint-live-bytes-real-memory-ot
 - https://developer.apple.com/library/archive/technotes/tn2434/_index.html
 */
@property (nonatomic, readonly, class) int64_t memoryFootprint;

@property (nonatomic, readonly, class) double cpuUsedByAllThreads;

@property (nonatomic, readonly, class) BOOL isBeingDebugged;


@property (nonatomic, readonly, class) int64_t totalDiskSpaceInBytes;
@property (nonatomic, readonly, class) int64_t freeDiskSpaceInBytes;
@property (nonatomic, readonly, class) int64_t usedDiskSpaceInBytes;


@property (nonatomic, readonly, class) NSString *currentTimeString;

@end

NS_ASSUME_NONNULL_END
