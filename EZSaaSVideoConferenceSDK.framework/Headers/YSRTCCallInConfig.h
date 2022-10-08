//
//  YSRTCCallInConfig.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2022/10/8.
//  Copyright © 2022 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTCEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCCallInConfig : NSObject

@property (nonatomic, copy) NSString *roomNo; //房间号
@property (nonatomic, copy) NSString *roomPassWord; //房间密码
@property (nonatomic, copy) NSString *callingName; //主叫人昵称
@property (nonatomic, copy) NSString *callingPortrait; //主叫人头像
@property (nonatomic, copy) NSString *callingMeetingName; //会议名称
@property (nonatomic, copy) NSString *callId; //主叫方生成的呼叫ID

@property (nonatomic, assign) RTCIncomingType callType; //被叫类型

@end

NS_ASSUME_NONNULL_END
