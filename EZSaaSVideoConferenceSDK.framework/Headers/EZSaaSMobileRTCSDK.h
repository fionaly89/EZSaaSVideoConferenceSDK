//
//  EZSaaSMobileRTCSDK.h
//  EZSaaSVideoConferenceSDK
//
//  Created by 李岳 on 2020/4/11.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "EZSaaSConferenceDefine.h"
#import "EZSaaSRTCDelegate.h"
#import "EZSaaSRTCSettingModel.h"

#import "EZSaaSMeetingCallMembersManagerInfo.h"
#import "EZSaaSVCJoinMemberModel.h"
#import "EZSaaSMobileRTCMemberInfo.h"
#import "EZSaaSVideoCMyMeetingsVCManager.h"

#import "YSNavigationViewController.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@brief SDK
*/
@interface EZSaaSMobileRTCSDK : NSObject

@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCMeetingServiceDelegate> delegate;
@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCAuthDelegate> authDelegate;

+ (EZSaaSMobileRTCSDK * _Nonnull)sharedRTC;
- (BOOL)initializeWithContext:(EZSaaSMobileRTCSDKInitContext * _Nonnull)context;

//获取视频会议SDK首页
- (void)getEZSaaSMobileRTCHomePageVCWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                              successCallback:(void(^)(UIViewController *vc))successFn
                                 failCallBack:(void (^)(NSError *error))failFn;

//获取视频会议SDK加入会议页面
- (void)getEZSaaSMobileRTCJoinMeetingVCWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                       successCallback:(void(^)(UIViewController *vc))successFn
                                          failCallBack:(void (^)(NSError *error))failFn;

//获取视频会议SDK即时会议页面
- (void)getEZSaaSInstantConferenceVCWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                    successCallback:(void(^)(UIViewController *vc))successFn
                                       failCallBack:(void (^)(NSError *error))failFn;

/// 获取视频会议SDK被叫页面
/// @param authService 鉴权信息
/// @param roomNo 房间号
/// @param roomPassWord 房间密码
/// @param callingName 主叫人昵称
/// @param callingPortrait 主叫人头像
/// @param callingMeetingName 会议名称
/// @param isInviteMeeting 是否邀请对方加入会议
/// @param isInviteUser 是否邀请对方连线用户
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)getEZSaaSMobileRTCCallInVCWithAuthService:(EZSaaSMobileRTCAuthService *)authService
                                           roomNo:(NSString *)roomNo
                                     roomPassWord:(NSString *)roomPassWord
                                      callingName:(NSString *)callingName
                                  callingPortrait:(NSString *)callingPortrait
                               callingMeetingName:(NSString *)callingMeetingName
                                  isInviteMeeting:(BOOL)isInviteMeeting
                                     isInviteUser:(BOOL)isInviteUser
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


//通知停止视频会议，建议在 applicationWillTerminate 中调用
- (void)notificateMobileRTCStop;

@end

NS_ASSUME_NONNULL_END
