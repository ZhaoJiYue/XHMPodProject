//
//  JRApmStackInfoReport.h
//  Pods
//
//  Created by luoyushi on 2020/3/21.
//

#import "JRApmReportBaseInfo.h"
#import "JDDThreadStack.h"

NS_ASSUME_NONNULL_BEGIN

@interface JRApmStackInfoReport : JRApmReportBaseInfo

@property (nonatomic, strong)JDDThreadStackInfo *threadStack;

- (void)stackToReportData:(JDDThreadStackInfo*)threadStack;

@end

NS_ASSUME_NONNULL_END
