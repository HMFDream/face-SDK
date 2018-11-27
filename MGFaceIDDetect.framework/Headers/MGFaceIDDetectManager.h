//
//  MGFaceIDDetectManager.h
//  MGFaceIDDetect
//
//  Created by MegviiDev on 2017/7/17.
//  Copyright © 2017年 megvii. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGFaceIDDetectConfig.h"
@class FaceIDDetectError;
@class MGFaceIDDetectUIItem;
@class MGFaceIDDetectConfigItem;

@interface MGFaceIDDetectManager : NSObject

/**
 *  请使用 initFaceIdManagerWithToken: 进行初始化。
 *  @param token - 业务串号
 */
- (instancetype)initFaceIdManagerWithToken:(NSString *__nonnull)token error:(FaceIDDetectError **__nonnull)error;

/**
 *  启动 FaceID 检测
 *  @param detectVC 启动检测的VC
 *  @param result 检测结果的block回调。详情请考虑(MGFaceIDDetectConfig.h)
 */
- (void)startDetect:(UIViewController *__nonnull)detectVC callback:(FaceIDDetectBlock __nonnull)result;

///  SDK版本信息
+ (NSString *)getSdkVersion;

///  SDK构建信息
+ (NSString *)getSdkBuildInfo;

@end
