//
//  NSBundle+JDJRExtension.h
//  FMDB
//
//  Created by 胡大海 on 2018/9/6.
//

#import <Foundation/Foundation.h>

/**
 s.resource_bundles 配置下的读取方式
 s.resource_bundles = {
 'JRJRBundleResourceManager' => ['JRJRBundleResourceManager/Assets/xxx.plist xib  png ...']
 }
 */

@interface NSBundle (JDJRExtension)
///找到资源path
+ (NSString*)pathForPod:(NSString*)podName resource:(NSString*)resourceName ofType:(NSString*)type;
///根据podName找到bundle
+ (NSBundle*)bundleForPodName:(NSString*)podName;
@end
