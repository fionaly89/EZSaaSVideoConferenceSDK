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
