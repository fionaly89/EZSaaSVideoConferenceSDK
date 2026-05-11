//
//  RTCAppSystemAuthListManager.h
//  EZSaaSMobileRTC
//
//  Created by EZSaaS on 2023/2/10.
//  Copyright © 2023 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTCEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface RTCTempAlertInfo : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *content;

@end

@interface RTCAppSystemAuthListSubInfo : NSObject

@property (nonatomic, strong) NSString *authSubName; //模块名称
@property (nonatomic, strong) NSString *authSubDescription; //权限功能描述
@property (nonatomic, strong) NSString *authSuperDescription; //权限上级功能描述
@property (nonatomic, assign) BOOL authSubGain; //是否允许
@property (nonatomic, assign) RTCAPPSysAuthSubType type;

@end

@interface RTCAppSystemAuthListInfo : NSObject

@property (nonatomic, strong) UIImage *authImage; //系统权限图标
@property (nonatomic, strong) NSString *authName; //系统权限名称
@property (nonatomic, strong) NSString *authDescTitleName; //系统权限名称
@property (nonatomic, strong) NSString *authDescription; //权限功能描述
@property (nonatomic, assign) BOOL authGain; //是否允许
           
@property (nonatomic, assign) RTCAPPSysAuth authType;
@property (nonatomic, strong) NSArray<RTCAppSystemAuthListSubInfo *> *array;

@end

@interface RTCAppSystemAuthListManager : NSObject

+ (instancetype)sharedInstance;

- (NSArray<RTCAppSystemAuthListInfo *> *)getAuthList;

/// 展示权限是否允许，会自动弹窗
/// - Parameters:
///   - authType: 权限大类型
///   - subType: 权限子类型
- (void)gainAuthType:(RTCAPPSysAuth)authType subType:(RTCAPPSysAuthSubType)subType result:(void(^)(BOOL status))result;

/// 检查权限是否允许
/// - Parameters:
///   - authType: 主权限
///   - subType: 子权限
- (BOOL)checkAuthStatus:(RTCAPPSysAuth)authType subTypee:(RTCAPPSysAuthSubType)subType;

- (void)setAuthSubTypeIsAuth:(RTCAPPSysAuthSubType)type auth:(BOOL)auth;

- (RTCAppSystemAuthListInfo *)getAuthListByAuthType:(RTCAPPSysAuth)authType;
- (RTCAppSystemAuthListSubInfo *)getSubAuthTitleByAuthType:(RTCAPPSysAuth)authType subTypee:(RTCAPPSysAuthSubType)subType;
- (RTCTempAlertInfo *)getAlertInfoByAuthType:(RTCAPPSysAuth)authType subTypee:(RTCAPPSysAuthSubType)subType;

@end

NS_ASSUME_NONNULL_END
