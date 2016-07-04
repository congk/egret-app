//
//  ProgressViewDelegate.h
//  EgretNativeFramework
//
//  Created by wei huang on 11/6/15.
//  Copyright © 2015 egret. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol ProgressViewDelegate <NSObject>

- (UIProgressView *)getView;
- (UIView *)getProgressMainView;

@end

