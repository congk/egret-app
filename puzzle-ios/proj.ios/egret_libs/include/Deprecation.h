//
//  Deprecation.h
//  EgretNativeFramework
//
//  Created by wei huang on 11/26/15.
//  Copyright © 2015 egret. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void (^DownloadProgress)(int received, int length);
typedef void (^ViewAction)();


@interface Deprecation : NSObject

- (void)setDownloadProgress:(DownloadProgress)progress addView:(ViewAction)add removeView:(ViewAction)remove;
- (void)showProgressView;
- (void)updateProgress:(int)progress length:(int)length;
- (void)hideProgressView;

@end
