//
//  EZSaaSVCJoinMemberModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/11/5.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSConferenceDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCJoinMemberModel : NSObject

@property (nonatomic, strong) NSString *im_acc_id;
@property (nonatomic, strong) NSString *account_id;
@property (nonatomic, strong) NSString *corp_id;
@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *name; //用户名
@property (nonatomic, strong) NSString *portrait; //头像地址
@property (nonatomic, assign) NSInteger role; //企业角色：0-普通成员；1-创建者；2-管理员
@property (nonatomic, assign) EZSaaSVideoConferenceRole meetingRole; //会议角色：0-普通成员;1-创建者;2-主持人
@property (nonatomic, assign) NSInteger member_type; //内部联系人-0   外部联系人-1
@property (nonatomic, strong) NSString *companyName; //关联公司
@property (nonatomic, copy) NSString *chatNo;   //对应会话ID
@property (nonatomic, strong) NSString *third_corp_name; //第三方企业公司

@end

NS_ASSUME_NONNULL_END
