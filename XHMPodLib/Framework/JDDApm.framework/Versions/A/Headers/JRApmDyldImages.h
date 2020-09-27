//
//  JRApmDyldImages.h
//  AFNetworking
//
//  Created by luoyushi on 2019/9/9.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#include <mach/vm_types.h>
#include <stdbool.h>


#ifdef __cplusplus
extern "C" {
#endif
    
    /**
     detect if the given frame address is a system libraries method.
     */
    boolean_t jrapm_addr_is_in_sys_libraries(vm_address_t address);
    
#ifdef __cplusplus
}
#endif
