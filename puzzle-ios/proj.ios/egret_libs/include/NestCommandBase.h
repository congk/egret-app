//
//  NestCommandBase.h
//  EgretNativeFramework
//
//  Created by wei huang on 8/11/15.
//  Copyright (c) 2015 egret. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NestActionBase.h"

@protocol NestCommandRunDelegate <NSObject>

- (void)run;

@end

@interface NestCommandBase : NSObject <NestCommandRunDelegate>

@property (nonatomic) id command;
@property (weak, nonatomic) id<NestReturnInfoDelegate> delegate;

- (instancetype)initWithCommand:(id)command delegate:(id<NestReturnInfoDelegate>)delegate;
- (void)returnNotFound;
- (void)returnMessage:(int)error message:(NSString *)message;

@end
