//
//  JDDThreadStack.h
//  AFNetworking
//
//  Created by luoyushi on 2020/1/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    JDDThreadStack_Exception,
    JDDThreadStack_Signal,
} JDDThreadStackType;


@interface JDDThreadStackInfo : NSObject

@property (nonatomic, copy, readonly) NSString *processId;    //异常进程
@property (nonatomic, assign) NSInteger threadId;   //崩溃线程号 崩溃堆栈数组索引（必须正整型，否则无法从线程数组中，取出实际崩溃线程）
@property (nonatomic, copy, readonly) NSString *osBuild;      //系统build版本号

@property (nonatomic, assign, readonly) int64_t sysSpace;      //系统存储空间（字节）
@property (nonatomic, assign, readonly) int64_t availableSysSpace;//系统可用存储空间（字节）

@property (nonatomic, copy, readonly) NSString *pageTrack;    //页面跟踪 （最近20条操作页面的记录）
@property (nonatomic, copy, readonly) NSString *trackLog;     //跟踪日志 （对应bugly的跟踪日志，有大小限制）
@property (nonatomic, copy) NSString *other;        //其他信息（开放给App可以附带信息，有大小限制）

@property (nonatomic, copy, readonly) NSString *incidentId;   //打包编译批次ID
@property (nonatomic, copy, readonly) NSString *identifier;   //应用标识符（包名），对应bugly的Bundle ID

@property (nonatomic, assign, readonly) CGFloat cpuUsage;     //cpu使用率
@property (nonatomic, assign, readonly) int64_t memory;       //内存大小（字节）
@property (nonatomic, assign) int64_t availableMemory;//可用内存大小（字节

@property (nonatomic, copy) NSString *name;         //崩溃描述 （崩溃列表中展示的问题简单描述）
@property (nonatomic, copy) NSString *cause;        //崩溃原因 （崩溃列表中展示的问题）
@property (nonatomic, strong) NSMutableArray<NSString*> *threads;       //崩溃堆栈数组

@property (nonatomic, assign, readonly) int64_t useTime;       //使用时长

@property (nonatomic, assign, readonly) int64_t start;        //问题发生时间戳（毫秒）

@end

@interface JDDThreadStack : JDDThreadStackInfo

- (instancetype)initWithType:(int)type name:(NSString*)name reason:(NSString*)reason crashHandleFrame:(uintptr_t)crashHandleFrame ;

- (instancetype)initWithType:(int)type name:(NSString*)name reason:(NSString*)reason crashHandleFrame:(uintptr_t)crashHandleFrame addresses:(NSArray<NSNumber *>*)addresses;
    
@end

NS_ASSUME_NONNULL_END
