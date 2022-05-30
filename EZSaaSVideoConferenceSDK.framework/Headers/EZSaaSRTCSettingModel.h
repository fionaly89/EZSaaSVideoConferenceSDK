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

//应用的 App Key
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *appkey;

/*!
 @brief [Required] domain The domain is used to start/join a meeting.
 */
@property (nonatomic, copy) NSString * _Nullable domain;

@property (nonatomic, assign) BOOL enableLog;

//APP 导航栏颜色
@property (nonatomic, strong) UIColor *appNaviColor;

//APP 导航栏标题颜色
@property (nonatomic, strong) UIColor *appNaviTitleColor;

//APP 主题色
@property (nonatomic, strong) UIColor *appThemeColor;
@property (nonatomic, strong) UIColor *appDisableThemeColor;

//共享屏幕bundle ID
@property (nonatomic, copy) NSString *replayKitBID;
@property (nonatomic, copy) NSString *replayKitUIBID;

//是否需要支持白板功能，默认支持
@property (nonatomic, assign) BOOL unRequiredWhiteboard;

//是否需要支持呼叫功能，默认不支持
@property (nonatomic, assign) BOOL enableCallMember;

//是否需要支持悬浮窗口功能，默认不支持
@property (nonatomic, assign) BOOL enableFloatWindow;

//是否需要支持多流功能，默认不支持
@property (nonatomic, assign) BOOL supportMulStream;

//美颜模块key
@property (nonatomic, assign) char *authData; //authData 密钥地址
@property (nonatomic, assign) int authDataSize; //authDataSize 密钥长度

//设备唯一标识
@property (nonatomic, strong) NSString *device_id;

@end

/*!
@brief SDK鉴权参数
*/
@interface EZSaaSMobileRTCAuthService : NSObject

/// SDK 登录 token
@property (nullable, copy, nonatomic) NSString *rtcToken;

/// 网络线路ID，不设置则使用默认线路
@property (nullable, copy, nonatomic) NSString *lineId;

@end

NS_ASSUME_NONNULL_END
