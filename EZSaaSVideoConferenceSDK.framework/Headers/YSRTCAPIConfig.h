//
//  YSRTCAPIConfig.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2022/11/23.
//  Copyright © 2022 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTCEnum.h"
#import "EZSaaSMeetingCallMembersManagerInfo.h"
#import "EZSaaSVCJoinMemberModel.h"
#import "RTCWaitRoomMembersModel.h"
#import "EZSaaSVCConferenceModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCCallInConfig : NSObject

@property (nonatomic, copy) NSString *roomNo; //房间号
@property (nonatomic, copy) NSString *roomPassWord; //房间密码
@property (nonatomic, copy) NSString *callingName; //主叫人昵称
@property (nonatomic, copy) NSString *callingAliasName; //主叫人昵称别名，必须项
@property (nonatomic, copy) NSString *callingPortrait; //主叫人头像
@property (nonatomic, copy) NSString *callingMeetingName; //会议名称
@property (nonatomic, copy) NSString *callId; //主叫方生成的呼叫ID

@property (nonatomic, assign) RTCIncomingType callType; //被叫类型

@end

@interface YSRTCJoinRoomConfig : NSObject

@property (nonatomic, copy) NSString *roomNo; //房间号
@property (nonatomic, copy) NSString *nickname; //昵称
@property (nonatomic, copy) NSString *aliasName; //用户昵称别名，必须项
@property (nonatomic, copy) NSString *password; //密码
@property (nonatomic, copy) NSString *inviterId; //邀请人ID
@property (nonatomic, copy) NSString *invitationCode; //邀请码

@property (nonatomic, assign) BOOL isAudioOn; //入会是否默认开启麦克风
@property (nonatomic, assign) BOOL isVideoOn; //入会是否默认开启摄像头
@property (nonatomic, assign) BOOL isSoundOn; //入会是否默认开启扬声器

@end

@interface YSRTCInviteMeetingConfig : NSObject

@property (nonatomic, strong) EZSaaSMeetingCallMembersManagerInfo *memberInfo;
@property (nonatomic, copy) NSString *meetingTitle;

@property (nonatomic, assign) BOOL videoCallEnable;

@end

@interface YSRTCMeetingGroupConfig : NSObject

@property (nonatomic, strong) NSArray<EZSaaSMeetingCallMembersManagerInfo *> *memberInfos;
@property (nonatomic, copy) NSString *meetingTitle;

@property (nonatomic, assign) BOOL videoCallEnable;

@end

@interface YSRTCInvitedLinkConfig : NSObject

@property (nonatomic, assign) YSRTCInviteLinkType linkType; //邀请链接类型
@property (nonatomic, copy) NSString *nickname; //邀请人昵称
@property (nonatomic, copy) NSString *title; //会议标题
@property (nonatomic, copy) NSString *content; //会议标题(可选)
@property (nonatomic, copy) NSString *startDate; //会议开始时间 2024-02-20
@property (nonatomic, copy) NSString *startTime; //会议开始时间 19:00
@property (nonatomic, copy) NSString *endDate; //会议开始时间 2024-02-21
@property (nonatomic, copy) NSString *endTime; //会议开始时间 22:00
@property (nonatomic, copy) NSString *roomNo; //房间号
@property (nonatomic, copy) NSString *roomId; //房间ID
@property (nonatomic, assign) BOOL whiteListOnly; //是否仅允许白名单人员入会

@end

@interface YSRTCMemberInviteModel : NSObject

@property (nonatomic, strong) UINavigationController *naviVC; //展示页面的导航控制器
@property (nonatomic, strong) EZSaaSVCConferenceModel *meetingModel; //当前会议信息
@property (nonatomic, strong) NSArray<EZSaaSVCJoinMemberModel *> *inMeetingMembers; //当前会中已入会人员列表
@property (nonatomic, strong) NSArray<EZSaaSMeetingCallMembersManagerInfo *> *callingMembers; //当前会中呼叫列表中的人员列表
@property (nonatomic, strong) NSArray<RTCWaitRoomMembersModel *> *waitMembers; //当前会议中等候室中的人员列表
@property (nonatomic, assign) BOOL isHost; //邀请人是否是主持人
@property (nonatomic, assign) RTCIncomingType callType; //呼叫类型

@end

NS_ASSUME_NONNULL_END
