//
//  JRApmStackFrameSymbolics.h
//  JDDApm_Example
//
//  Created by luoyushi on 2019/10/3.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#ifndef JRApmStackFrameSymbolics_h
#define JRApmStackFrameSymbolics_h

#import <CommonCrypto/CommonDigest.h>
#import <dlfcn.h>
#import <execinfo.h>
#import <mach-o/dyld.h>
#import <mach/mach.h>
#import <mach/vm_types.h>
#import <malloc/malloc.h>

class jrapm_dyld_image {

public:
    const char *name;         // image name
    const char *path;         // image path
    uint8_t *uuid;         // image uuid
    long loadAddr;            // header 地址
    long beginAddr;           // __text 代码段开始地址
    long endAddr;             // __text 结束地址
    uintptr_t imageVMAddr;    // image 基址
    uint64_t imageSubFileoff; // vmaddr - fileoff
    struct symtab_command symtab_cmd;
    uint64_t symtableAddr; // 符号段起始地址
    uint32_t imageIndex;   // image index
};


class JRApmStackFrameSymbolics
{
public:
    JRApmStackFrameSymbolics();
    ~JRApmStackFrameSymbolics();
    
    int getDLInfoByAddr(vm_address_t addr, Dl_info *const info, bool slide);
    jrapm_dyld_image *allImageInfo;
    uint32_t imageInfoCount;

private:
    uint32_t getImageInfoIndexByAddress(const uintptr_t address);
    
};

#endif /* JRApmStackFrameSymbolics_h */
