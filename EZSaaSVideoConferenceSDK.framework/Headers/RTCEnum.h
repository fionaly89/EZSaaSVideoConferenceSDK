//
//  RTCEnum.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2022/4/12.
//  Copyright © 2022 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 事件命令类型
/**
 事件命令类型
 
 - RTCCommandEventStateAudio: 音频状态
 - RTCCommandEventStateVideo: 视频状态
 - RTCCommandEventStateRole: 角色状态
 - RTCCommandEventStateHandup: 举手状态
 - RTCCommandEventStateEnter:  成员进入
 - RTCCommandEventStateExit: 成员退出
 - RTCCommandEventStateBegin: 会议开始
 - RTCCommandEventStateEnded: 会议结束
 - RTCCommandEventStateInvite:  邀请参会
 - RTCCommandEventStatePassthrough:  消息透传
 - RTCCommandEventStateKickout: 被踢出房间
 - RTCCommandEventStateInitiativeExit: 主动退出房间
 */
typedef enum : NSInteger {
    
    RTCCommandEventStateAudio = 2000,
    RTCCommandEventStateVideo,
    RTCCommandEventStateRole,
    RTCCommandEventStateHandup,
    RTCCommandEventStateEnter,
    RTCCommandEventStateExit,
    RTCCommandEventStateBegin,
    RTCCommandEventStateEnded,
    RTCCommandEventStateInvite,
    RTCCommandEventStatePassthrough,
    RTCCommandEventStateKickout,
    RTCCommandEventStateInitiativeExit
} RTCCommandEventState;

NS_ASSUME_NONNULL_END
