//
//  StackBackTraceInfo.h
//  AFNetworking
//
//  Created by luoyushi on 2019/10/18.
//

#import <Foundation/Foundation.h>



#ifdef __cplusplus
extern "C" {
#endif
    
    char *plcrash_sysctl_string (const char *name);
    /**
     detect if the given frame address is a system libraries method.
     */
    const char* jrapm_stackBackTrace_header(NSTimeInterval timestamp, int threadNumber, BOOL isInBackground);
    
#ifdef __cplusplus
}
#endif

