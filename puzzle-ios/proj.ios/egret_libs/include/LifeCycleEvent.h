//
//  LifeCyleEvent.h
//  EgretNativeFramework
//
//  Created by wei huang on 7/30/15.
//  Copyright (c) 2015 egret. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LifeCycleEvent <NSObject>

- (void)onCreate;
- (void)onPause;
- (void)onResume;
- (void)onDestroy;

@end
