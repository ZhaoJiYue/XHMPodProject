//
//  JDDApmMonitor.h
//  AFNetworking
//
//  Created by luoyushi on 2019/10/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDDApmMemoryMonitor : NSObject

+(JDDApmMemoryMonitor *)sharedInstance;

+ (BOOL)isEnabled;

-(void)start:(NSInteger)memoryInterval;
-(void)stop;


-(void)didFinishLaunchingStart;
-(void)didFinishLaunchingEnd;

-(void)viewDidLoadWithVC:(UIViewController*)vc;

-(void)viewDidAppearWithVC:(UIViewController*)vc;

-(void)viewDidDisappearWithVC:(UIViewController*)vc;

@end

NS_ASSUME_NONNULL_END
