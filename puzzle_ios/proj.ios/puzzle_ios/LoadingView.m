//
//  LoadingView.m
//  HelloEgret
//
//  Created by wei huang on 11/26/15.
//  Copyright © 2015 egret. All rights reserved.
//

#import "LoadingView.h"

@implementation LoadingView

- (instancetype)initWithContainerFrame:(CGRect)containerFrame {
    if (self = [super init]) {
        self.progressView = [[UIProgressView alloc] initWithProgressViewStyle:UIProgressViewStyleDefault];
        self.progressView.progress = 0;
        float scale = 0.8135;
        CGRect rect = CGRectMake(0, 0, containerFrame.size.width * scale, 5);
        rect.origin.x = containerFrame.size.width * (1.0 - scale) / 2;
        rect.origin.y = containerFrame.size.height * scale;
        self.progressView.frame = rect;
        self.bgView = [[UIView alloc] initWithFrame:containerFrame];
        [self.bgView setBackgroundColor:[[UIColor alloc] initWithRed:0.f green:0.f blue:0.f alpha:1.f]];
        [self.bgView addSubview: self.progressView];
    }
    return self;
}

- (UIProgressView *)getView {
    return self.progressView;
}

- (UIView *)getProgressMainView {
    return self.bgView;
}

@end
