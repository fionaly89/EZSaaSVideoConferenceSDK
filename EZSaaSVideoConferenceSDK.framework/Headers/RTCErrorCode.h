//
//  RTCErrorCode.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2022/6/7.
//  Copyright © 2022 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger {
    RTCError_InMeeting = 1000, //EZSaaS.EZSaaSVideoConferenceSDK" code:1000 userInfo:@{@"msg":@"你正在会议中"}
    RTCError_EnterMeeting = 1001, //EZSaaS.EZSaaSVideoConferenceSDK" code:1001 userInfo:@{@"msg":@"正在加入会议"}
    RTCError_NetworkError = 1015, //code:1015 userInfo:@{@"msg":@"网络不给力哦～"
    RTCError_NetworkError13 = 1013, //code:1013 userInfo:@{@"msg":@"网络异常(-13)，请检查网络设置后重试"
    RTCError_InCalled = 1011, //code:1011 userInfo:@{@"msg":@"你正在被呼叫"}]);
    RTCError_InCalling = 1010, //code:1010 userInfo:@{@"msg":@"呼叫中"}]);
    RTCError_MemberNotExist = 1009, //code:1009 userInfo:@{@"msg":@"找不到被呼成员"}]);
    RTCError_CallFailure = 1012, //code:1012 userInfo:@{@"msg":@"呼叫失败"}]);
    RTCError_AuthEmpty = 1013, //code:-1 userInfo:@{@"msg":@"鉴权信息为空"}
    RTCError_InvalidLineId = 1014, //code:-2 userInfo:@{@"msg":@"无效的线路ID"}
    RTCError_RoomNeedPassword = 409, //入会失败，需要输入密码
    RTCError_IncorrectRoomPass = 504, //入会失败，输入密码错误
    RTCError_PersonLimit = 410, //入会失败，房间人数超限
    RTCError_InvitedOnly = 505, //入会失败，会议仅限受邀人加入，您当前没有权限
    RTCError_MeetingOver = 501, //入会失败，会议已结束
    RTCError_MeetingLocked = 411, //入会失败，会议已锁定，如需加入，请联系主持人
    RTCError_MemberLimit = 413, //入会失败，企业外成员无法加入
} RTCErrorCodeType;

NS_ASSUME_NONNULL_END
