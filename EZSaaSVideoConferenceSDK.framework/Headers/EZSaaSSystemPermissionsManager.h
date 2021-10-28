//
//  EZSaaSSystemPermissionsManager.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/5/6.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KEZSaaSSystemPermissions) {

    KAVMediaTypeVideo = 0,  // 相机
    KALAssetsLibrary,       //相册
    KAVAudioSession,        //音频
    KABAddressBook          //手机通讯录
};

@interface EZSaaSSystemPermissionsManager : NSObject

+ (instancetype)sharedManager;

/**
 *  根据场景选择合适的提示系统权限类型
 *
 *  @param systemPermissions 系统权限类型
 *
 */
- (void)requestAuthorization:(KEZSaaSSystemPermissions)systemPermissions vc:(UIViewController *)vc result:(void(^)(BOOL status))result;

- (BOOL)showTips:(KEZSaaSSystemPermissions)systemPermissions vc:(UIViewController *)vc;

@end

NS_ASSUME_NONNULL_END
