//
//  EZSaaSVCJoinMemberModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/11/5.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCJoinMemberModel : NSObject

@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *name; //用户名
@property (nonatomic, strong) NSString *portrait; //头像地址
@property (nonatomic, assign) NSInteger role; //企业角色：0-普通成员；1-创建者；2-管理员
@property (nonatomic, assign) NSInteger meetingRole; //会议角色：0-成员；1-主持人

@end

NS_ASSUME_NONNULL_END
