//
//  EZSaaSRTCDelegate.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/8/11.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTCEnum.h"

NS_ASSUME_NONNULL_BEGIN

@class EZSaaSMobileRTCMemberInfo;
@class EZSaaSVCJoinMemberModel;
@class EZSaaSVCConferenceModel;
@class EZSaaSMeetingCallMembersManagerInfo;
@class EZSaaSVCAccountModel;
@class RTCWaitRoomMembersModel;

/*!
 @brief 回调框架代理
 */
@protocol EZSaaSMobileRTCMeetingServiceDelegate <NSObject>

@required
//获取当前用户个人信息
- (void)onMeetingMineUserInfoGetByUserId:(NSString *)userId
                              completion:(void (^)(EZSaaSMobileRTCMemberInfo *memberInfo))completion;

@optional

#pragma mark - 呼叫接口
/// 打开通讯录回调，传入已入会成员、呼叫中成员，传回呼叫中成员
/// @param naviVC 当前成员列表导航控制器
/// @param meetingModel 当前会议信息
/// @param inMeetingMembers 已入会成员列表
/// @param callingMembers 呼叫中成员列表
/// @param waitMembers 等候室成员列表
/// @param completion 结果回调，传回新的呼叫中成员列表
- (void)onMeetingCallMembers:(UINavigationController *)naviVC
                meetingModel:(EZSaaSVCConferenceModel *)meetingModel
            inMeetingMembers:(NSArray<EZSaaSVCJoinMemberModel *> *)inMeetingMembers
              callingMembers:(NSArray<EZSaaSMeetingCallMembersManagerInfo *> *)callingMembers
                 waitMembers:(NSArray<RTCWaitRoomMembersModel *> *)waitMembers
                  completion:(void(^)(NSArray<EZSaaSMeetingCallMembersManagerInfo *> *models))completion;

/// 重新呼叫某个成员
/// @param member 成员信息
/// @param meetingModel 当前会议信息
- (void)onMeetingReCallMember:(EZSaaSMeetingCallMembersManagerInfo *)member
                 meetingModel:(EZSaaSVCConferenceModel *)meetingModel;

/// 取消呼叫某个成员
/// @param member 成员信息
/// @param meetingModel 当前会议信息
- (void)onMeetingCancelCallMember:(EZSaaSMeetingCallMembersManagerInfo *)member
                     meetingModel:(EZSaaSVCConferenceModel *)meetingModel;

#pragma mark - 会中邀请白名单修改
/// 打开通讯录回调，传入已选中成员，传回所选的所有成员
/// @param naviVC 当前成员列表导航控制器
/// @param meetingModel 当前会议信息
/// @param innerMembers 当前已选中的企业内成员信息
/// @param outMembers 当前已选中的外协成员信息
/// @param completion 结果回调
/// @param failFn 失败回调
- (void)onMeetingMembers:(UINavigationController *)naviVC
            meetingModel:(EZSaaSVCConferenceModel *)meetingModel
            innerMembers:(NSMutableArray<EZSaaSVCJoinMemberModel *> *)innerMembers
              outMembers:(NSMutableArray<EZSaaSVCJoinMemberModel *> *)outMembers
              completion:(void(^)(NSMutableArray<EZSaaSVCJoinMemberModel *> *models))completion
            failCallBack:(void (^)(void))failFn;

#pragma mark - 分享相关接口

/// 拷贝app邀请信息到剪切板
/// @param meetingModel 分享的会议信息
/// @param sharedAccount 分享操作发起人
/// @param naviVC 导航控制器
- (void)onCopyAppShareLink:(EZSaaSVCConferenceModel *)meetingModel sharedAccount:(EZSaaSVCAccountModel *)sharedAccount naviVC:(UINavigationController *)naviVC;

/// 分享邀请信息到APP
/// @param meetingModel 分享的会议信息
/// @param sharedAccount 分享操作发起人
/// @param naviVC 导航控制器
- (void)onShareToApp:(EZSaaSVCConferenceModel *)meetingModel sharedAccount:(EZSaaSVCAccountModel *)sharedAccount naviVC:(UINavigationController *)naviVC;

/// 通过微信分享邀请信息
/// @param meetingModel 分享的会议信息
/// @param sharedAccount 分享操作发起人
/// @param sharedTitle 会议标题
/// @param sharedContent 分享的内容
/// @param naviVC 导航控制器
- (void)onShareToWeixin:(EZSaaSVCConferenceModel *)meetingModel
          sharedAccount:(EZSaaSVCAccountModel *)sharedAccount
            sharedTitle:(NSString *)sharedTitle
            sharedContent:(NSString *)sharedContent
                 naviVC:(UINavigationController *)naviVC;

/// 通过邮件分享邀请信息
/// @param meetingModel 分享的会议信息
/// @param sharedAccount 分享操作发起人
/// @param sharedTitle 会议标题
/// @param sharedContent 分享的内容
/// @param naviVC 导航控制器
- (void)onShareToAppEmail:(EZSaaSVCConferenceModel *)meetingModel
            sharedAccount:(EZSaaSVCAccountModel *)sharedAccount
              sharedTitle:(NSString *)sharedTitle
              sharedContent:(NSString *)sharedContent
                   naviVC:(UINavigationController *)naviVC;

#pragma mark - 页面操作
//打开我的页面
- (void)onMeetingOpenMineHomePageVC:(UINavigationController *)naviVC;

//打开扫码登录页面
- (void)onMeetingOpenScanToLoginVC:(UINavigationController *)naviVC;

//游客登出
- (void)onVisitorLogOut;

#pragma mark - app 属性配置
/// 通知APP当前是否需要支持屏幕旋转
/// @param bSupport 是否支持旋转
- (void)supportedAutorotate:(BOOL)bSupport;

/// 通知APP当前是否需要支持右滑关闭页面功能
/// @param bSupport 是否支持
/// @param vc 当前控制器
- (void)supportedInteractivePop:(BOOL)bSupport vc:(UIViewController *)vc;

/// 通知APP当前是否支持 IQKeyboardManager 功能，如果当前工程没有使用第三方 IQKeyboardManager ，则不需要实现
/// @param bSupport 是否支持
- (void)supportedIQKeyboardManager:(BOOL)bSupport;

#pragma mark - 会议状态通知
/// 成功进入会议
- (void)onMeetingEnterSuccessfull:(EZSaaSVCConferenceModel *)meetingModel;

/// 成功退出会议
- (void)onMeetingLeaveSuccessfull:(EZSaaSVCConferenceModel *)meetingModel;

@end


@protocol EZSaaSMobileRTCMeetingEventDelegate <NSObject>

/// 会议内事件命令透传通知
/// @param command 消息指令
/// @param content 消息内容
- (void)onListenRoomEventWithCommand:(RTCCommandEventState)command content:(NSString *)content;

/// 会议外事件命令透传通知
/// @param command 消息指令
/// @param content 消息内容
- (void)onListenNetCallEventWithCommand:(RTCCommandEventState)command content:(NSString *)content;

@end

/*!
 @brief An authentication service will issue the following values when the authorization state changes.
 */
@protocol EZSaaSMobileRTCAuthDelegate <NSObject>

@optional
/*!
 @brief Specify to get the response of MobileRTC authorization.
 */
- (void)oonMobileRTCAuthExpiredWithrefreshSuccessCallback:(void(^)(NSString *token))refreshSuccessCallback;

- (void)onMobileRTCAuthNullCallBack:(void(^)(NSString *token))refreshSuccessCallback;

@end

NS_ASSUME_NONNULL_END
