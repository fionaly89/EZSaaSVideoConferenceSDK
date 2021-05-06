//
//  EZSaaSHikRTCSDK.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/8/6.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSConferenceDefine.h"
#import "EZSaaSRTCSettingModel.h"
#import "EZSaaSRTCDelegate.h"

#import "YSNavigationViewController.h"
#import "EZSaaSVCJoinMemberModel.h"
#import "EZSaaSMobileRTCMemberInfo.h"
#import "EZSaaSVCAccountModel.h"
#import "EZSaaSVCCorporationModel.h"
#import "EZSaaSVCCorporationOrgModel.h"
#import "EZSaaSVideoCMyMeetingsVCManager.h"
#import "EZSaaSVCConferenceModel.h"
#import "EZSaaSVCSearchResultModel.h"
#import "EZSaaSVCCorporationMemberModel.h"
#import "EZSaaSVCCorporationAccountModel.h"
#import "EZSaaSFileUploadTokenInfo.h"
#import "EZSaaSConferenceRegModel.h"
#import "EZSaaSMeetingCallMembersManagerInfo.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@brief SDK鉴权参数
*/
@interface EZSaaSHikRTCSDKAuthService : NSObject

@property (nullable, strong, nonatomic) NSString *token;
@property (nullable, strong, nonatomic) EZSaaSVCAccountModel *model;
@property (nullable, strong, nonatomic) EZSaaSVCCorporationModel *corporationModel;
@property (nullable, strong, nonatomic) EZSaaSVCCorporationOrgModel *orgModel;
@property (nullable, strong, nonatomic) EZSaaSConferenceRegModel *regModel;
@property (assign, nonatomic) NSInteger corp_role;

@end

@interface EZSaaSHikRTCSDK : NSObject

+ (EZSaaSHikRTCSDK * _Nonnull)sharedRTC;

@property (nullable, strong, nonatomic) EZSaaSMobileRTCSDKInitContext *sdkContext;

@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCMeetingServiceDelegate> delegate;
@property (nullable, weak, nonatomic) id<EZSaaSMobileRTCAuthDelegate> authDelegate;

- (BOOL)initializeWithAuthContext:(EZSaaSHikRTCSDKAuthService * _Nonnull)authService;

//获取视频会议SDK加入会议页面
- (UIViewController *)getEZSaaSMobileRTCJoinMeetingVCWithAuthService:(NSDictionary *)dict;

//获取视频会议SDK即时会议页面
- (UIViewController *)getEZSaaSMobileRTCInstantConferenceVCWithAuthService;

//获取视频会议SDK预约会议页面
- (UIViewController *)getEZSaaSMobileRTCOrderConferenceVCWithAuthService;

//获取会议详情页面
- (UIViewController *)getEZSaaSVideoCMeetingInfoViewController:(NSDictionary *)dict;

//获取被叫页面
- (UIViewController *)getEZSaaSVideoCCallInViewController:(NSDictionary *)dict;

/// 加入指定会议
/// @param navi 导航控制器
/// @param roomNo 房间号
/// @param password 密码
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)enterEZSaaSConferenceWithAuthService:(UINavigationController *)navi
                                      roomNo:(NSString *)roomNo
                                    password:(NSString *)password
                             successCallback:(void(^)(UIViewController *vc))successFn
                                failCallBack:(void(^)(NSError *error))failFn;

//获取我的页面
- (UIViewController *)getEZSaaSVideoCMineViewController;

//获取视频会议服务器地址配置页面
- (UIViewController *)getEZSaaSMobileRTCServiceAddressSettingViewController;

/// 返回上一次异常退出会议的会议ID
- (NSString *)getAbortMeetingId;

/// 返回分享地址链接
- (NSString *)getSharingMeetingURL;

//通知会议组件退出登录
- (void)notificateMobileRTCLoginOut;

//通知停止视频会议，建议在 applicationWillTerminate 中调用
- (void)notificateMobileRTCStop;

@end

NS_ASSUME_NONNULL_END
