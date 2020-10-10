# EZSaaSVideoConferenceSDK

EZSaaSVideoConferenceSDK (1.1.17)
1.新增代理方法，如果当前工程没有使用第三方 IQKeyboardManager ，则不需要实现
- (void)supportedIQKeyboardManager:(BOOL)bSupport
参考实现：
- (void)supportedIQKeyboardManager:(BOOL)bSupport
{
    [IQKeyboardManager sharedManager].enable = bSupport;
}

2.修复缺陷


########################################################################################
概要介绍
萤石视频会议 SDK 提供完善的音视频通话开发框架，提供基于网络的视频会议功能。SDK 兼容 iOS 9.0+。

集成方式
EZSaaSVideoConferenceSDK 集成方式：通过 CocoaPods 自动集成我们的 SDK

在 Podfile 文件中加入
IM 音视频完整版：

  pod 'EZSaaSVideoConferenceSDK'  
安装

  pod install
如果无法安装 SDK 最新版本，运行以下命令更新本地的 CocoaPods 仓库列表

  pod repo update
类库说明

EZSaaSVideoConferenceSDK SDK 主要提供了如下类(协议)与方法

类（协议）	                描述	                            说明
EZSaaSMobileRTCSDK	SDK的主入口类	提供初始化，注册，内部管理类管理的功能
EZSaaSMobileRTCSDKInitContext    初始化配置类	负责配置SDK 的初始化信息

类（协议）	描述	说明
EZSaaSMobileRTCMeetingServiceDelegate  SDK事件回调代理
EZSaaSMobileRTCAuthDelegate   SDK鉴权信息回调

调用规则
调用方式

所有 SDK 业务均通过 EZSaaSMobileRTCSDK 单例调用

@interface EZSaaSMobileRTCSDK : NSObject

+ (instancetype)sharedRTC;

@end

#初始化SDK，配置代理
EZSaaSMobileRTCSDKInitContext *context = [EZSaaSMobileRTCSDKInitContext new];
context.domain = @"";
context.appNaviColor = [UIColor redColor];
context.appThemeColor = [UIColor yellowColor];
context.appDisableThemeColor = [UIColor grayColor];
context.enableLog = YES;
[[EZSaaSMobileRTCSDK sharedRTC] initializeWithContext:context];
    
[EZSaaSMobileRTCSDK sharedRTC].delegate = self;
[EZSaaSMobileRTCSDK sharedRTC].authDelegate = self;


通知方式
SDK 通过两种方式通知上层 API 调用结果：回调（callback）和委托 (delegate)，两种方式都只在主线程触发。

#pragma mark - EZSaaSMobileRTCMeetingServiceDelegate
//打开通讯录回调，传入已选中成员，传回新的所有成员
- (void)onMeetingMembers:(UINavigationController *)naviVC
         selectedMembers:(NSMutableArray<EZSaaSVCJoinMemberModel *> *)selectedMembers
              completion:(void(^)(NSMutableArray<EZSaaSVCJoinMemberModel *> *models))completion
{

}

#打开加入会议页面
    EZSaaSMobileRTCAuthService *authService = [EZSaaSMobileRTCAuthService new];
    authService.rtcToken = AUTH_TOKEN;

    [[EZSaaSMobileRTCSDK sharedRTC] getEZSaaSMobileRTCJoinMeetingVCWithAuthService:authService
                                                                   successCallback:^(UIViewController * _Nonnull vc)
    {
        YSNavigationViewController *navi = [[YSNavigationViewController alloc] initWithRootViewController:vc];
        navi.modalPresentationStyle = UIModalPresentationFullScreen;
        [self presentViewController:navi animated:YES completion:nil];
    } failCallBack:^(NSError * _Nonnull error) {
        
    }];




