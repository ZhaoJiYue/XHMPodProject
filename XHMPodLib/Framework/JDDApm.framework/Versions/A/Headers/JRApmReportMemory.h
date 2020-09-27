//
//  JRApmReportMemory.h
//  AFNetworking
//
//  Created by luoyushi on 2019/10/28.
//

#import "JRApmReportBaseInfo.h"

@interface JRApmRecordMemory : NSObject
@property (nonatomic, copy) NSString *controller;//发生的控制器名称
@property (nonatomic, assign) int64_t start;
@property (nonatomic, assign) NSInteger type;//数据上报阶段（0 创建  1 销毁  2 滚动 3 其他）
@property (nonatomic, assign) NSInteger deep;//访问深度
@property (nonatomic, strong) NSMutableArray *memoryInfos;

- (void)addReocrdMemory:(CGFloat)mem;
@end


@interface JRApmReportMemory : JRApmReportBaseInfo

+ (void)recordMemory:(JRApmRecordMemory *)record;

@end
