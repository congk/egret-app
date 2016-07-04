//
//  Nest.h
//  EgretNativeFramework
//
//  Created by wei huang on 7/30/15.
//  Copyright (c) 2015 egret. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LifeCycleEvent.h"

@class EgretRuntime;
@class NestActionBase;

@interface Nest : NSObject <LifeCycleEvent>

- (instancetype)initWithGameEngine:(EgretRuntime *)gameEngine;
- (void)registerPlugin:(NSString *)moduleName plugin:(NestActionBase *)plugin;
- (void)handleCommand:(NSString *)command;
- (void)sendToEgret:(NSString *)message;

@end
