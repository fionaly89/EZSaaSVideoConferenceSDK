//
//  RTCMemberCallStatusModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2022/7/6.
//  Copyright © 2022 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RTCMemberCallStatusModel : NSObject

@property(nonatomic, assign) BOOL isShow; //启动APP是否展示被呼叫界面（false：不展示被呼叫界面；true:展示被呼叫界面）
@property(nonatomic, copy) NSString *callUserId; //呼叫用户ID
@property(nonatomic, copy) NSString *callId; //呼叫ID
@property(nonatomic, assign) int callType; //呼叫类型 （ 1.语音通话 2.视频通话 3.视频会议 其他.会议）
@property(nonatomic, copy) NSString *roomNo; //房间No
@property(nonatomic, copy) NSString *roomPwd; //房间密码

@end

NS_ASSUME_NONNULL_END
