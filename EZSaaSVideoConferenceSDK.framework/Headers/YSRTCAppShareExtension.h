//
//  YSRTCAppShareExtension.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2023/12/25.
//  Copyright © 2023 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    YSRTCAppShareRoleType_normal = 0, //普通会议邀请
    YSRTCAppShareRoleType_guest, //嘉宾身份邀请
    YSRTCAppShareRoleType_audience, //观众身份邀请
} YSRTCAppShareRoleType;

@interface YSRTCAppShareExtension : NSObject

@property (nonatomic, assign) YSRTCAppShareRoleType roleType; //当前以什么身份分享会议链接

@end

NS_ASSUME_NONNULL_END
