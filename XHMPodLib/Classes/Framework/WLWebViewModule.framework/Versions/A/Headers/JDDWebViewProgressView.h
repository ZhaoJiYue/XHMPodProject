//
//  JDDWebViewProgressView.h
//
//  Created by Satoshi Aasano on 11/16/13.
//  Copyright (c) 2013 Satoshi Asano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JDDWebViewProgressView : UIView

@property (nonatomic,copy)   NSString * progressColor;

- (void)jddWebProgressViewStartAnimation;
- (void)jddWebProgressViewFinishedAnimation;


@end
