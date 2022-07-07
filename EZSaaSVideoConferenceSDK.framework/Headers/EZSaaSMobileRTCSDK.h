//
//  EZSaaSMobileRTCSDK.h
//  EZSaaSVideoConferenceSDK
//
//  Created by 李岳 on 2020/4/11.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "RTCEnum.h"
#import "EZSaaSConferenceDefine.h"
#import "EZSaaSRTCDelegate.h"
#import "EZSaaSRTCSettingModel.h"

#import "EZSaaSMeetingCallMembersManagerInfo.h"
#import "EZSaaSVCJoinMemberModel.h"
#import "EZSaaSMobileRTCMemberInfo.h"
#import "RTCMemberCallStatusModel.h"

#import "YSNavigationViewController.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@brief SDK
*/
@interface EZSaaSMobileRTCSDK : NSObject

@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCMeetingServiceDelegate> delegate;
@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCAuthDelegate> authDelegate;
@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCMeetingEventDelegate> eventDelegate;

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
/// @param roomNo 房间号
/// @param roomPassWord 房间密码
/// @param callingName 主叫人昵称
/// @param callingPortrait 主叫人头像
/// @param callingMeetingName 会议名称
/// @param callId 主叫方生成的呼叫ID
/// @param callType 被叫类型
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)getEZSaaSMobileRTCCallInVCWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                           roomNo:(NSString *)roomNo
                                     roomPassWord:(NSString *)roomPassWord
                                      callingName:(NSString *)callingName
                                  callingPortrait:(NSString *)callingPortrait
                               callingMeetingName:(NSString *)callingMeetingName
                                           callId:(NSString *)callId
                                         callType:(RTCIncomingType)callType
                                  successCallback:(void(^)(UIViewController *vc))successFn
                                     failCallBack:(void (^)(NSError *error))failFn;

/// 加入指定会议
/// @param authService 鉴权信息
/// @param navi 导航控制器
/// @param roomNo 房间号
/// @param nickname 昵称
/// @param password 密码
/// @param isAudioOn 入会是否默认开启麦克风
/// @param isVideoOn 入会是否默认开启摄像头
/// @param isSoundOn 入会是否默认开启扬声器
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)enterEZSaaSConferenceWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                        navi:(UINavigationController *)navi
                                      roomNo:(NSString *)roomNo
                                    nickname:(NSString *)nickname
                                    password:(NSString *)password
                                   isAudioOn:(BOOL)isAudioOn
                                   isVideoOn:(BOOL)isVideoOn
                                   isSoundOn:(BOOL)isSoundOn
                             successCallback:(void(^)(UIViewController *vc))successFn
                                failCallBack:(void(^)(NSError *error))failFn;


/// 加入指定会议（不包含入会失败处理逻辑）
/// @param authService 鉴权信息
/// @param navi 导航控制器
/// @param roomNo 房间号
/// @param nickname 昵称
/// @param password 密码
/// @param isAudioOn 入会是否默认开启麦克风
/// @param isVideoOn 入会是否默认开启摄像头
/// @param isSoundOn 入会是否默认开启扬声器
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)enterEZSaaSConferenceWithOutErrorDisplay:(EZSaaSMobileRTCAuthService *)authService
                                        navi:(UINavigationController *)navi
                                      roomNo:(NSString *)roomNo
                                    nickname:(NSString *)nickname
                                    password:(NSString *)password
                                   isAudioOn:(BOOL)isAudioOn
                                   isVideoOn:(BOOL)isVideoOn
                                   isSoundOn:(BOOL)isSoundOn
                             successCallback:(void(^)(UIViewController *vc))successFn
                                failCallBack:(void(^)(NSError *error))failFn;

//通知会议组件退出登录
- (void)notificateMobileRTCLoginOut;

/// 切换服务器线路
/// @param lineId 线路id
- (void)switchLineId:(NSString *)lineId
     successCallback:(void(^)(NSError *error))successFn
        failCallBack:(void (^)(NSError *error))failFn;

/// 切换服务地址
/// @param domain 服务地址，eg: https://www.example.com:8888
- (void)switchServiceDomain:(NSString *)domain;

#pragma mark - 检查呼叫状态
- (void)checkWhetherBeCalling:(void(^)(RTCMemberCallStatusModel *model))successFn
                 failCallBack:(void(^)(NSError *error))failFn;

#pragma mark - 生成新的呼叫ID
///生成新的呼叫ID
+ (NSString *)getMemberCallId;

@end

NS_ASSUME_NONNULL_END
