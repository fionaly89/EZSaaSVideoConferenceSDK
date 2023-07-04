# EZSaaSVideoConferenceSDK
### 概要介绍
萤石视频会议 SDK 提供完善的音视频通话开发框架，提供基于网络的视频会议功能。SDK 兼容 iOS 11.0+。
#### 集成方式
EZSaaSVideoConferenceSDK 集成方式：通过 CocoaPods 自动集成我们的 SDK

Podfile 范例：
```
# Uncomment the next line to define a global platform for your project
source 'https://github.com/CocoaPods/Specs.git'
source 'http://code.zaoing.com/meeting/freewindSpecs.git'

platform :ios, '11.0'

target 'YSRTCDemo' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!
  project 'YSRTCDemo.xcodeproj'
 
  pod 'VCSSDK', '1.3.17', :inhibit_warnings => true
  pod 'EZSaaSVideoConferenceSDK', '1.8.9'
end

#屏幕共享工程配置
target 'YSRTCDemoReplayKit' do
  use_frameworks!
  project 'YSRTCDemo.xcodeproj'
  pod 'VCSSDK', '1.3.17', :inhibit_warnings => true
end

#屏幕共享工程配置
target 'YSRTCDemoReplayKitSetupUI' do
  use_frameworks!
  project 'YSRTCDemo.xcodeproj'
  pod 'VCSSDK', '1.3.17', :inhibit_warnings => true
end

post_install do |installer_representation|
  installer_representation.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['ARCHS'] = '$(ARCHS_STANDARD_64_BIT)'
      config.build_settings['APPLICATION_EXTENSION_API_ONLY'] = 'NO'
    end
  end
end
```

#### 类库说明
##### EZSaaSVideoConferenceSDK SDK 主要提供了如下类（协议）与方法
类（协议）                 描述                              说明
`EZSaaSMobileRTCSDK`  SDK的主入口类  提供初始化，注册，内部管理类管理的功能
`EZSaaSMobileRTCSDKInitContext`    初始化配置类 负责配置SDK 的初始化信息

类（协议） 描述  说明
`EZSaaSMobileRTCMeetingServiceDelegate`  SDK事件回调代理
`EZSaaSMobileRTCAuthDelegate`   SDK鉴权信息回调

##### 调用方式
所有 SDK 业务均通过 EZSaaSMobileRTCSDK 单例调用
```
@interface EZSaaSMobileRTCSDK : NSObject
+ (instancetype)sharedRTC;
@end
```
#初始化SDK，配置代理
```
#如果不需要，可以不用修改默认配置
EZSaaSMobileRTCSDKInitContext *context = [EZSaaSMobileRTCSDKInitContext new];
context.domain = @"";
context.appNaviColor = [UIColor redColor];
context.appThemeColor = [UIColor yellowColor];
context.appDisableThemeColor = [UIColor grayColor];
context.enableLog = YES;
//配置鉴权appid、appkey
context.appid = ;
context.appkey = ;
    
//如果需要使用美颜功能
context.authData = ;
context.authDataSize = ;
[[EZSaaSMobileRTCSDK sharedRTC] initializeWithContext:context];
    
[EZSaaSMobileRTCSDK sharedRTC].delegate = self;
[EZSaaSMobileRTCSDK sharedRTC].authDelegate = self;
```
##### 通知方式
SDK 通过两种方式通知上层 API 调用结果：回调（callback）和委托 (delegate)，两种方式都只在主线程触发。

##### 基础代理配置：
```
/// 通知APP当前是否需要支持屏幕旋转
/// @param bSupport 是否支持旋转
- (void)supportedAutorotate:(BOOL)bSupport
{
    self.bSupportLandscape = bSupport;
}

#如果主工程里集成了 FDFullscreenPopGesture 三方库，那么需要实现该代理
- (void)supportedInteractivePop:(BOOL)bSupport vc:(nonnull UIViewController *)vc
{
    vc.fd_interactivePopDisabled = !bSupport;
}

#如果主工程里集成了 IQKeyboardManager 三方库，那么需要实现该代理
- (void)supportedIQKeyboardManager:(BOOL)bSupport
{
    [IQKeyboardManager sharedManager].enable = bSupport;
}
```
##### 鉴权信息回调：
当鉴权信息过期或者失效时，SDK通过该回调通知主工程刷新 token，并将新的 token 设置给 SDK
```
#pragma mark - EZSaaSMobileRTCAuthDelegate
- (void)oonMobileRTCAuthExpiredWithrefreshSuccessCallback:(void(^)(NSString *token))refreshSuccessCallback
{
    refreshSuccessCallback(@"新 token");
}
```
##### 常用功能：
###### 打开加入会议：
```
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
```
###### 打开即时会议页面：
```
EZSaaSMobileRTCAuthService *authService = [EZSaaSMobileRTCAuthService new];
authService.rtcToken = AUTH_TOKEN;

[[EZSaaSMobileRTCSDK sharedRTC] getEZSaaSInstantConferenceVCWithAuthService:authService
                                                    successCallback:^(UIViewController * _Nonnull vc)
    {
        YSNavigationViewController *navi = [[YSNavigationViewController alloc] initWithRootViewController:vc];
        navi.modalPresentationStyle = UIModalPresentationFullScreen;
        [self presentViewController:navi animated:YES completion:nil];
    } failCallBack:^(NSError * _Nonnull error) {

    }];
```
###### 主动加入某个会议：   
```
EZSaaSMobileRTCAuthService *authService = [EZSaaSMobileRTCAuthService new];
authService.rtcToken = AUTH_TOKEN;
[[EZSaaSMobileRTCSDK sharedRTC] enterEZSaaSConferenceWithAuthService:authService
             navi:self.navigationController
                                                                      roomNo:meetingId
                                                                    nickname:@"测试"
                                                                    password:@""
                                                                   isAudioOn:YES
                                                                   isVideoOn:YES
                                                                   isSoundOn:YES
                                                             successCallback:^(UIViewController * _Nonnull vc)
        {
            YSNavigationViewController *navi = [[YSNavigationViewController alloc] initWithRootViewController:vc];
            navi.modalPresentationStyle = UIModalPresentationFullScreen;
            [self presentViewController:navi animated:YES completion:nil];
        } failCallBack:^(NSError * _Nonnull error) {

        }];
```

##### 接入会议中修改被邀请人功能：
在初始化SDK时，如果 enableCallMember 未设置或设置成 false，在修改会议成员时SDK会调用该接口
```
/// 打开通讯录回调，传入已选中成员，传回所选的所有成员
/// @param naviVC 当前成员列表导航控制器
/// @param meetingModel 当前会议信息
/// @param selectedMembers 当前已选中的成员信息
/// @param completion 结果回调
- (void)onMeetingMembers:(UINavigationController *)naviVC
            meetingModel:(EZSaaSVCConferenceModel *)meetingModel
         selectedMembers:(NSMutableArray<EZSaaSVCJoinMemberModel *> *)selectedMembers
              completion:(void(^)(NSMutableArray<EZSaaSVCJoinMemberModel *> *models))completion;
```
##### 接入呼叫功能：
在初始化SDK时，如果 enableCallMember 设置成 true，在会议中添加其他成员时会调用该接口
```
#pragma mark - EZSaaSMobileRTCMeetingServiceDelegate
//打开通讯录回调，传入已选中成员，传回新的所有成员
- (void)onMeetingMembers:(UINavigationController *)naviVC
         selectedMembers:(NSMutableArray<EZSaaSVCJoinMemberModel *> *)selectedMembers
              completion:(void(^)(NSMutableArray<EZSaaSVCJoinMemberModel *> *models))completion;

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

```

##### 接入切换服务器、切换语言：
```
1.设置SDK语言：
--在进行会议之前，可以通过 [EZSaaSMobileRTCSDK sharedRTC] setLocalLanguage 来设置SDK支持的语言

#pragma mark - 多语言设置
//多语言设置
- (void)setLocalLanguage:(RTCLanguageType)languageType;

```






