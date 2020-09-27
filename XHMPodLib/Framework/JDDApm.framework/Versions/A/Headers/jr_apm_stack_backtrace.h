//
//  jr_apm_stack_backtrace.hpp
//  JDDApm_Example
//
//  Created by luoyushi on 2019/10/1.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#ifndef jr_apm_stack_backtrace_h
#define jr_apm_stack_backtrace_h


#include <mach/mach.h>
#include <stdlib.h> // pulls in declaration of malloc, free
#include <string.h> // pulls in declaration for strlen.

#define MTHawkeyeStackBacktracePerformanceTestEnabled 0

#ifdef MTHawkeyeStackBacktracePerformanceTestEnabled
#define _InternalMTHStackBacktracePerformanceTestEnabled MTHawkeyeStackBacktracePerformanceTestEnabled
#else
#define _InternalMTHStackBacktracePerformanceTestEnabled NO
#endif


#ifdef __cplusplus
extern "C" {
#endif
    
typedef struct {
    uintptr_t *frames;
    size_t frames_size;
} jr_apm_stack_backtrace;

jr_apm_stack_backtrace *jr_apm_malloc_stack_backtrace(void);
void jr_apm_free_stack_backtrace(jr_apm_stack_backtrace *stack_backtrace);

bool jr_apm_stack_backtrace_of_thread(thread_t thread, jr_apm_stack_backtrace *stack_backtrace, const size_t backtrace_depth_max, uintptr_t top_frames_to_skip);
    
#ifdef __cplusplus
}
#endif

#endif /* jr_apm_stack_backtrace_h */
