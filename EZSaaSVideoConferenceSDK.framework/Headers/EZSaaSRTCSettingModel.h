//
//  EZSaaSRTCSettingModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/8/17.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*!
@brief 配置SDK
*/
@interface EZSaaSMobileRTCSDKInitContext : NSObject

#pragma mark - 应用的 App Key
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *appkey;

#pragma mark - SDK 服务器地址
@property (nonatomic, copy) NSString * _Nullable domain;

#pragma mark - SDK 是否保存日志
//控制是否将日志写入本地文件，建议 DEBUG模式下设置成 NO
@property (nonatomic, assign) BOOL enableLog;

#pragma mark - SDK 主题色配置

//SDK 导航栏颜色
@property (nonatomic, strong) UIColor *appNaviColor;

//SDK 导航栏标题颜色
@property (nonatomic, strong) UIColor *appNaviTitleColor;

//SDK 主题色
@property (nonatomic, strong) UIColor *appThemeColor;
@property (nonatomic, strong) UIColor *appDisableThemeColor;

#pragma mark - SDK 功能配置

//共享屏幕&投屏 bundle ID
@property (nonatomic, copy) NSString *replayKitBID;
@property (nonatomic, copy) NSString *replayKitUIBID;
@property (nonatomic, copy) NSString *replayAppGroupID;

//是否需要支持白板功能，默认支持
@property (nonatomic, assign) BOOL unRequiredWhiteboard;

//是否需要支持呼叫功能，默认不支持
@property (nonatomic, assign) BOOL enableCallMember;

//是否需要支持悬浮窗口功能，默认不支持
@property (nonatomic, assign) BOOL enableFloatWindow;

//是否需要支持多流功能，默认不支持
@property (nonatomic, assign) BOOL supportMulStream;

//是否需要禁用加入会议页面修改默认名字功能
@property (nonatomic, assign) BOOL disableModifyName;

#pragma mark - 美颜模块key
@property (nonatomic, assign) char *authData; //authData 密钥地址
@property (nonatomic, assign) int authDataSize; //authDataSize 密钥长度

#pragma mark - 设备唯一标识
@property (nonatomic, strong) NSString *device_id;

//#pragma mark - 服务器分组ID
///// 服务器分组ID，不设置则使用默认分组ID
//@property (nullable, copy, nonatomic) NSString *lineSGId;
//
///// 服务器分组ID名称，不设置则使用默认分组ID
//@property (nullable, copy, nonatomic) NSString *lineSGIdName;

@end

/*!
@brief SDK鉴权参数
*/
@interface EZSaaSMobileRTCAuthService : NSObject

/// SDK 登录 token
@property (nullable, copy, nonatomic) NSString *rtcToken;

@end

NS_ASSUME_NONNULL_END
