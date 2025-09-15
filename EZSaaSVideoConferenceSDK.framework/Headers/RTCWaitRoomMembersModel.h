//
//  RTCWaitRoomMembersModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2023/5/19.
//  Copyright © 2023 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AccountBase;
@class Account;
@interface RTCWaitRoomMembersModel : NSObject

@property (nonatomic, strong) NSString *key;
@property (nonatomic, copy) NSString *id_p;
@property (nonatomic, strong) AccountBase *accountBase;
@property (nonatomic, strong) Account *account;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *portrait;
@property (nonatomic, strong) NSString *mobile;
@property (nonatomic, assign) int memberType;
/** 登录终端类型 */
@property(nonatomic, readwrite) int terminalType;

//成员状态
@property (nonatomic, assign) int waitingRoomState;

//表示是否已经处理过该等候室成员
-(BOOL)hasProcessed;

-(BOOL)isAgreed;

-(BOOL)isRefused;

@end

NS_ASSUME_NONNULL_END
