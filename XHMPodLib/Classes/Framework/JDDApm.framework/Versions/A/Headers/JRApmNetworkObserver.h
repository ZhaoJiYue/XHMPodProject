//
//  JRApmNetworkObserver.h
//  JRApm
//
//  Created by luoyushi on 2019/6/18.
//  Copyright © 2019 JDD Finance. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString *const kJRApmNetworkObserverEnabledStateChangedNotification;

/// This class swizzles NSURLConnection and NSURLSession delegate methods to observe events in the URL loading system.
/// High level network events are sent to the default JRApmNetworkRecorder instance which maintains the request history and caches response bodies.
@interface JRApmNetworkObserver : NSObject

/// Swizzling occurs when the observer is enabled for the first time.
/// This reduces the impact of JRApm if network debugging is not desired.
/// NOTE: this setting persists between launches of the app.
+ (void)startInit;

@end
