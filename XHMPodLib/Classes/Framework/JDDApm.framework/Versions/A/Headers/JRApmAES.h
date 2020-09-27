//
//  JRApmAES.h
//  AFNetworking
//
//  Created by luoyushi on 2019/6/28.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

NSString * JRApmRAESEncryptString(NSString *content, NSString *key, const void *iv);
NSString * JRApmRAESDecryptString(NSString *content, NSString *key, const void *iv);

NSData * JRApmRAESEncryptData(NSData *data, NSData *key, const void *iv);
NSData * JRApmRAESDecryptData(NSData *data, NSData *key, const void *iv);
