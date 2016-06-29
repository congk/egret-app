//
//  NestActionBase.h
//  EgretNativeFramework
//
//  Created by wei huang on 8/10/15.
//  Copyright (c) 2015 egret. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Nest.h"

@class NestCommandBase;

@protocol NestCreateActionDelegate <NSObject>

- (NestCommandBase *)createAction:(id)command;

@end


@protocol NestReturnInfoDelegate <NSObject>

- (void)returnInfo:(id)command error:(int)error message:(NSString *)message;

@end


@interface NestActionBase : NSObject <NestCreateActionDelegate, NestReturnInfoDelegate>

@property (weak, nonatomic) Nest* nest;
@property (nonatomic) NSMutableDictionary *commandList;

- (instancetype)init;
- (void)handleCommand:(id)command;

@end
