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
    RTCCommandEventStateInitiativeExit,
    
    RTCCommandEventStateDialingTimeOut = 4000, //单人主叫方超时
} RTCCommandEventState;

#pragma mark - CallType
typedef enum : NSInteger {
    RTCIncomingType_normal = 0, //正常视频会议
    RTCIncomingType_voice, //单聊语音
    RTCIncomingType_video, //单聊视频
    RTCIncomingType_meeting, //群聊视频
} RTCIncomingType;

#pragma mark - Language Type
typedef enum : NSInteger {
    RTCLanguageType_chinese = 0, //中文
    RTCLanguageType_english, //英文
} RTCLanguageType;

#pragma mark - Invite link Type
typedef enum : int {
    YSRTCInviteLinkType_normal = 0, //普通会议
    YSRTCInviteLinkType_audience, //研讨会邀请观众
    YSRTCInviteLinkType_guest, //研讨会邀请嘉宾
} YSRTCInviteLinkType;

typedef enum : NSUInteger {
    Auth_microphone,
    Auth_camera,
    Auth_album,
} RTCAPPSysAuth;

typedef NS_ENUM(NSUInteger, RTCAPPSysAuthSubType) {
    Auth_microphone_meeting = 0, //会中麦克风
    Auth_microphone_message = 1, //消息麦克风
    Auth_camera_instantConference = 50, //即时会议页面
    Auth_camera_scan = 51, //扫码页面
    Auth_camera_identification = 52, //实人认证页面
    Auth_camera_beauty = 53, //美颜页面
    Auth_camera_meeting = 54, //会中页面
    Auth_camera_mineHeader = 55, //我的设置头像页面
    Auth_camera_companyIdentification = 56, //企业认证页面
    Auth_camera_companyEditInfo = 57, //企业信息页面
    Auth_camera_IMSendImage = 58, //消息_拍照
    Auth_album_meeting = 100, //会中共享图片页面
    Auth_album_mineHeader = 101, //我的设置头像页面
    Auth_album_companyIdentification = 102, //企业认证页面
    Auth_album_identification = 103, //实人认证页面
    Auth_album_companyEditInfo = 104, //企业信息页面
    Auth_album_IMSendImage = 105, //消息_相册
    Auth_calendar_meeting = 150, //会中日历分享页面
    Auth_calendar_meetingDetail = 151, //会议详情日历分享页面
    Auth_contacts_meeting = 200, //会中日历分享页面通讯录中选择分享人
    Auth_contacts_meetingDetail = 201, //会议详情日历分享页面通讯录中选择分享人
};

NS_ASSUME_NONNULL_END
