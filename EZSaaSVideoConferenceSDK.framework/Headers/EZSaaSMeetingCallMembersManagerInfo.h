//
//  EZSaaSMeetingCallMembersManagerInfo.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/8/31.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, EZSaaSInviteStatus) {
    /** 等待中 */
    EZSaaSInviteStatus_Waiting = 0,
    
    /** 接听 */
    EZSaaSInviteStatus_Accepted = 1,
    
    /** 拒绝 */
    EZSaaSInviteStatus_Rejected = 2,
    
    /** 未接听 */
    EZSaaSInviteStatus_Timeout = 3,
    
    /** 呼叫失败 */
    EZSaaSInviteStatus_Error = 4,
    
    /** 对方忙 */
    EZSaaSInviteStatus_Busy = 5,
    
    /** 取消呼叫 */
    EZSaaSInviteStatus_Canceled = 6,
    
    /** 移除 */
    EZSaaSInviteStatus_Removed = 7,
    
    /** 已邀请 */
    EZSaaSInviteStatus_Invite = 8,
    
    /** 通话中断 */
    EZSaaSInviteStatus_Interrupt = 9,

    /** 挂断 */
    EZSaaSInviteStatus_Hangup = 10,
    
    /** 网络异常 */
    EZSaaSInviteStatus_Abnormal = 11,
    
    /** 另一端已接听 */
    EZSaaSInviteStatus_AcceptedByOther = 12,
};

@interface EZSaaSMeetingCallMembersManagerInfo : NSObject

@property(nonatomic, copy) NSString *id_p; //用户ID，必须项
@property(nonatomic, copy) NSString *name; //用户名称，必须项
@property(nonatomic, copy) NSString *nickname; //用户昵称，必须项
@property(nonatomic, copy) NSString *aliasName; //用户昵称别名，必须项
@property(nonatomic, copy) NSString *portrait; //用户头像，必须项
@property(nonatomic, copy) NSString *roomNo; //房间ID，必须项

@property(nonatomic, assign) EZSaaSInviteStatus status; //呼叫状态，非必须项
@property(nonatomic, copy) NSString *callId; //呼叫ID，非必须项

-(NSString *)description;

@end

NS_ASSUME_NONNULL_END
