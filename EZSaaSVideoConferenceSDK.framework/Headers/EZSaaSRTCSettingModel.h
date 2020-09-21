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

@end

/*!
@brief SDK鉴权参数
*/
@interface EZSaaSMobileRTCAuthService : NSObject

@property (nullable, copy, nonatomic) NSString *rtcToken;

@end

NS_ASSUME_NONNULL_END
