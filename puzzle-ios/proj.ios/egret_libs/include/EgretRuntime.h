//
//  EgretRuntime.h
//  EgretNativeFramework
//
//  Created by wei huang on 10/30/14.
//  Copyright (c) 2014 egret. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LifeCycleEvent.h"
#import "ProgressViewDelegate.h"
#import "ViewContainer.h"
#import "NestActionBase.h"

#define OPTION_EGRET_ROOT "egret.runtime.egretRoot"
#define OPTION_GAME_ID "egret.runtime.gameId"
#define OPTION_LOADER_URL "egret.runtime.loaderUrl"
#define OPTION_UPDATE_URL "egret.runtime.updateUrl"
#define OPTION_PASSWORD "egret.runtime.password"
#define OPTION_LOG_LEVEL "egret.runtime.logLevel"
#define OPTION_GAME_BACKGROUND "egret.runtime.background"


typedef void (^RuntimeInterfaceBlock)(NSString *);


@interface EgretRuntime : NSObject <LifeCycleEvent>

// Egret的RootView
@property (nonatomic) ViewContainer *egretRootView;
@property (nonatomic) CGRect bounds;

// 创建Egret Runtime的实例，一般在App创建完成后，或者ViewController加载完成后
+ (EgretRuntime *)createEgretRuntime;
// 销毁Egret Runtime实例，一般在App准备杀死事，或者ViewContorller被卸载前
+ (void)destroyEgretRuntime;
// 获得Egret Runtime实例
+ (EgretRuntime *)getInstance;

/** 初始化Egret Runtime，使得Egret渲染View将占满整个controller的view
 * @param contorller Egret View的父容器
 */
- (void)initWithViewController:(UIViewController *)controller;
/** 初始化Egret Runtime，
 * @param bounds Egret的渲染View的大小
 * @param controller Egret的渲染View的父容器的controller
 */
- (void)initWithRect:(CGRect)bounds inViewController:(UIViewController *)controller;
/** 设置游戏的选项
 * @param options 游戏选项，必须包含 OPTION_EGRET_ROOT，OPTION_GAME_ID， OPTION_LOADER_URL
 */
- (void)setOptions:(NSDictionary *)options;
/** 开始游戏
 */
- (void)run;

/** 过时API, 请使用progressViewDelegate代替
 */
- (void)setDownloadProgress:(DownloadProgress)progress addView:(ViewAction)add removeView:(ViewAction)remove;

/** 失效API
 */
- (void)enableEgretRuntimeInterface;
/** 设置Runtime接口
 * @param name Runtime的接口名
 * @param block Runtime的block
 */
- (void)setRuntimeInterface:(NSString *)name block:(RuntimeInterfaceBlock)block;
/** 调用Egret接口
 * @param name Egret接口名
 * @param message 传递给Egret的message
 */
- (void)callEgretInterface:(NSString *)name value:(NSString *)message;

/** 注册nest插件接口
 * @param name
 * @param plugin
 */
- (void)registerNestPlugin:(NSString *)name plugin:(NestActionBase *)plugin;


@end
