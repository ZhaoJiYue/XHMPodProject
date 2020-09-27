//
//  JDDApmPrivate.h
//  Pods
//
//  Created by luoyushi on 2019/6/26.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#ifndef JDDApmPrivate_h
#define JDDApmPrivate_h



#ifdef DEBUG
//    #define APM_DEBUG 1
#endif

#if APM_DEBUG
#define APMLog(format, ...) {\
NSString *file = [[NSString stringWithFormat:@"%s",__FILE__] lastPathComponent];\
NSString *printString = [NSString stringWithFormat:@"[--%@:%d--][APM] %@", file, __LINE__, [NSString stringWithFormat:format, ##__VA_ARGS__]];\
printf("%s\n", printString.UTF8String);\
}
#else
#define APMLog(...)
#endif


#ifdef APM_DEBUG
#   define DEBUG_ASSERT(...)
#else
#   define DEBUG_ASSERT(...)
#endif


#define DEBUG_NET_URL @"jrmstatic.jd.com/userstat/stat.action"
//DEBUG_ASSERT(fmt) assert(fmt)

#endif /* JDDApmPrivate_h */


//#if DEBUG
//if ([url.absoluteString containsString:DEBUG_NET_URL]) {
//    int i = 0;
//}
//#endif
//#   define JRAPMLog(fmt, ...) NSLog((@"[JRAPMLog] %s"), __PRETTY_FUNCTION__);
