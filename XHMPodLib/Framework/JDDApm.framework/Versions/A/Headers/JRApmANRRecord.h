//
//  JRApmANRRecord.h
//  JDDApm_Example
//
//  Created by luoyushi on 2019/10/1.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JRApmThreadStallingSnapshot.hpp"

NS_ASSUME_NONNULL_BEGIN


@interface JRApmANRMainThreadStallingSnapshot : NSObject {
@public
//    uintptr_t titleFrame;
//    uintptr_t *stackframes;
//    size_t stackframesSize;
//    
     jr_apm_stack_backtraces *stackframes;
}
@property (nonatomic, assign) thread_t threadId;

@property (nonatomic, assign) NSTimeInterval timeStart;
@property (nonatomic, assign) NSTimeInterval timeEnd;
@property (nonatomic, assign) float cpuUsed;
@property (nonatomic, assign) NSInteger capturedCount;
@property (nonatomic, assign) BOOL isInBackground;
@property (nonatomic, assign) NSInteger totalThreadCount;

@end

@interface JRApmANRRecord : NSObject

@property (nonatomic, strong) NSArray<JRApmANRMainThreadStallingSnapshot *> *stallingSnapshots;
@property (nonatomic, assign) NSTimeInterval startFrom;
@property (nonatomic, assign) NSTimeInterval durationInSeconds;
@property (nonatomic, assign) BOOL isInBackground;

-(NSString*)threadStallingSnapshotText:(JRApmANRMainThreadStallingSnapshot*)rawRecord;

@end

NS_ASSUME_NONNULL_END
