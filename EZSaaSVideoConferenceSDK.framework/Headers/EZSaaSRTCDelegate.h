//
//  EZSaaSRTCDelegate.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/8/11.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZSaaSMobileRTCMemberInfo;
@class EZSaaSVCJoinMemberModel;
@class EZSaaSVCConferenceModel;
@class EZSaaSMeetingCallMembersManagerInfo;
@class EZSaaSVCAccountModel;

/*!
@brief 回调框架代理
*/
@protocol EZSaaSMobileRTCMeetingServiceDelegate <NSObject>
@optional

//通过用户ID获取用户完整信息
- (void)onMeetingUserInfoGetByUserId:(NSString *)userId
                          completion:(void (^)(EZSaaSMobileRTCMemberInfo *memberInfo))completion;

/// 打开通讯录回调，传入已选中成员，传回所选的所有成员
/// @param naviVC 当前成员列表导航控制器
/// @param meetingModel 当前会议信息
/// @param selectedMembers 当前已选中的成员信息
/// @param completion 结果回调
- (void)onMeetingMembers:(UINavigationController *)naviVC
            meetingModel:(EZSaaSVCConferenceModel *)meetingModel
         selectedMembers:(NSMutableArray<EZSaaSVCJoinMemberModel *> *)selectedMembers
              completion:(void(^)(NSMutableArray<EZSaaSVCJoinMemberModel *> *models))completion;

/// 打开通讯录回调，传入已入会成员、呼叫中成员，传回呼叫中成员
/// @param naviVC 当前成员列表导航控制器
/// @param meetingModel 当前会议信息
/// @param inMeetingMembers 已入会成员列表
/// @param callingMembers 呼叫中成员列表
/// @param completion 结果回调，传回新的呼叫中成员列表
- (void)onMeetingCallMembers:(UINavigationController *)naviVC
                meetingModel:(EZSaaSVCConferenceModel *)meetingModel
            inMeetingMembers:(NSArray<EZSaaSVCJoinMemberModel *> *)inMeetingMembers
              callingMembers:(NSArray<EZSaaSMeetingCallMembersManagerInfo *> *)callingMembers
                  completion:(void(^)(NSArray<EZSaaSMeetingCallMembersManagerInfo *> *models))completion;

/// 取消呼叫某个成员
/// @param member 成员信息
/// @param meetingModel 当前会议信息
- (void)onMeetingReCallMember:(EZSaaSMeetingCallMembersManagerInfo *)member
                 meetingModel:(EZSaaSVCConferenceModel *)meetingModel;

/// 重新呼叫某个成员
/// @param member 成员信息
/// @param meetingModel 当前会议信息
- (void)onMeetingCancelCallMember:(EZSaaSMeetingCallMembersManagerInfo *)member
                     meetingModel:(EZSaaSVCConferenceModel *)meetingModel;

/// 分享会议信息回调
/// @param meetingModel 分享的会议信息
/// @param sharedAccount 分享操作发起人
- (void)onMeetingShareClicked:(EZSaaSVCConferenceModel *)meetingModel sharedAccount:(EZSaaSVCAccountModel *)sharedAccount;

//打开我的页面
- (void)onMeetingOpenMineHomePageVC:(UINavigationController *)naviVC;

//打开扫码登录页面
- (void)onMeetingOpenScanToLoginVC:(UINavigationController *)naviVC;

//游客登出
- (void)onVisitorLogOut;

/// 通知APP当前是否需要支持屏幕旋转
/// @param bSupport 是否支持旋转
- (void)supportedAutorotate:(BOOL)bSupport;

@end


/*!
 @brief An authentication service will issue the following values when the authorization state changes.
 */
@protocol EZSaaSMobileRTCAuthDelegate <NSObject>

/*!
 @brief Specify to get the response of MobileRTC authorization.
 */
- (void)oonMobileRTCAuthExpiredWithrefreshSuccessCallback:(void(^)(NSString *token))refreshSuccessCallback;

@end

NS_ASSUME_NONNULL_END
