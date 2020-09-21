//
//  EZSaaSMeetingCallMembersManagerInfo.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/8/31.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import <VCSSDK/VCSNetCall.h>

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
};

@interface EZSaaSMeetingCallMembersManagerInfo : NSObject

@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *nickname;
@property(nonatomic, copy) NSString *id_p;
@property(nonatomic, copy) NSString *portrait;
@property(nonatomic, assign) EZSaaSInviteStatus status;
@property(nonatomic, copy) NSString *roomNo;

-(NSString *)description;

@end

NS_ASSUME_NONNULL_END
