//
//  EZSaaSMobileRTCSDK.h
//  EZSaaSVideoConferenceSDK
//
//  Created by 李岳 on 2020/4/11.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "YSRTCExpressDefines.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @brief SDK
 */
@interface EZSaaSMobileRTCSDK : NSObject

@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCMeetingServiceDelegate> delegate;
@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCAuthDelegate> authDelegate;
@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCMeetingEventDelegate> eventDelegate;

@property (nonatomic, strong) EZSaaSMobileRTCAuthService *authService;
@property (nonatomic, strong) EZSaaSMobileRTCSDKInitContext *context;

+ (EZSaaSMobileRTCSDK * _Nonnull)sharedRTC;

//初始化SDK配置
- (BOOL)initializeWithContext:(EZSaaSMobileRTCSDKInitContext * _Nonnull)context;

//登录视频会议SDK
- (void)loginRTCService:(EZSaaSMobileRTCAuthService *)authService
       successCallback:(void(^)(NSError *error))successFn
          failCallBack:(void (^)(NSError *error))failFn;

//获取视频会议SDK加入会议页面
- (void)getEZSaaSMobileRTCJoinMeetingVCWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                       successCallback:(void(^)(UIViewController *vc))successFn
                                          failCallBack:(void (^)(NSError *error))failFn;

//获取视频会议SDK即时会议页面
- (void)getEZSaaSInstantConferenceVCWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                    successCallback:(void(^)(UIViewController *vc))successFn
                                       failCallBack:(void (^)(NSError *error))failFn;

/// 呼叫成员-单聊
/// @param authService 鉴权信息
/// @param navi 导航
/// @param memberInfo 成员信息
/// @param videoCallEnable 是否开启视频通话
/// @param successFn 成功回调，回调会议控制器、创建的会议信息、已呼叫的成员
/// @param failFn 失败回调
- (void)inviteMeetingWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                navi:(UINavigationController *)navi
                          memberInfo:(EZSaaSMeetingCallMembersManagerInfo *)memberInfo
                     videoCallEnable:(BOOL)videoCallEnable
                     successCallback:(void(^)(UIViewController *vc, EZSaaSVCConferenceModel * _Nonnull model, NSArray<EZSaaSMeetingCallMembersManagerInfo *> *members, cancelCallBlock  _Nonnull cancelBlock))successFn
                        failCallBack:(void (^)(NSError *error))failFn;

/// 呼叫成员-群聊
/// @param memberInfos 成员信息列表
/// @param videoCallEnable 是否开启视频通话
/// @param successFn 成功回调，回调会议控制器、创建的会议信息、已呼叫的成员
/// @param failFn 失败回调
- (void)startMeetingGroupWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                    navi:(UINavigationController *)navi
                             memberInfos:(NSArray<EZSaaSMeetingCallMembersManagerInfo *> *)memberInfos
                         videoCallEnable:(BOOL)videoCallEnable
                         successCallback:(void(^)(UIViewController *vc, EZSaaSVCConferenceModel * _Nonnull model, NSArray<EZSaaSMeetingCallMembersManagerInfo *> *members))successFn
                            failCallBack:(void (^)(NSError *error))failFn;

/// 获取视频会议SDK被叫页面
/// @param authService 鉴权信息
/// @param config 配置房间号、密码等
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)getEZSaaSMobileRTCCallInVCWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                           config:(YSRTCCallInConfig *)config
                                  successCallback:(void(^)(UIViewController *vc))successFn
                                     failCallBack:(void (^)(NSError *error))failFn;

/// 加入指定会议
/// @param authService 鉴权信息
/// @param navi 导航控制器
/// @param config 入会参数
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)enterEZSaaSConferenceWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                        navi:(UINavigationController *)navi
                                      config:(YSRTCJoinRoomConfig *)config
                             successCallback:(void(^)(UIViewController *vc))successFn
                                failCallBack:(void(^)(NSError *error))failFn;


/// 加入指定会议（不包含入会失败处理逻辑）
/// @param authService 鉴权信息
/// @param navi 导航控制器
/// @param config 入会参数
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)enterEZSaaSConferenceWithOutErrorDisplay:(EZSaaSMobileRTCAuthService *)authService
                                            navi:(UINavigationController *)navi
                                          config:(YSRTCJoinRoomConfig *)config
                                 successCallback:(void(^)(UIViewController *vc))successFn
                                    failCallBack:(void(^)(NSError *error))failFn;

//通知会议组件退出登录
- (void)notificateMobileRTCLoginOut;

/// 切换服务器线路
/// @param sgLineId 服务器分组ID
/// @param authService 鉴权信息
/// @param sgLineIdName 服务器分组ID名称
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)switchSGLineId:(NSString *)sgLineId
           authService:(EZSaaSMobileRTCAuthService *)authService
              sgLineIdName:(NSString *)sgLineIdName
     successCallback:(void(^)(NSError *error))successFn
          failCallBack:(void (^)(NSError *error))failFn;

/// 切换服务地址
/// @param domain 服务地址，eg: https://www.example.com:8888
- (void)switchServiceDomain:(NSString *)domain;

#pragma mark - 检查呼叫状态
+ (void)checkWhetherBeCallingWithToken:(NSString *)token
                             successFn:(void(^)(RTCMemberCallStatusModel *model))successFn
                          failCallBack:(void(^)(NSError *error))failFn;

#pragma mark - 多语言设置
//多语言设置
- (void)setLocalLanguage:(RTCLanguageType)languageType;

#pragma mark - 生成新的呼叫ID
///生成新的呼叫ID
+ (NSString *)getMemberCallId;

@end

NS_ASSUME_NONNULL_END
