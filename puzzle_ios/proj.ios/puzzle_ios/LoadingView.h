//
//  LoadingView.h
//  HelloEgret
//
//  Created by wei huang on 11/26/15.
//  Copyright © 2015 egret. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProgressViewDelegate.h"

@interface LoadingView : NSObject <ProgressViewDelegate>

@property (nonatomic) UIProgressView *progressView;
@property (nonatomic) UIView *bgView;

- (instancetype)initWithContainerFrame:(CGRect)containerFrame;
- (UIProgressView *)getView;
- (UIView *)getProgressMainView;

@end
