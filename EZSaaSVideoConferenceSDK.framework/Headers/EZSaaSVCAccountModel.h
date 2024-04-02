//
//  EZSaaSVCAccountModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/10/11.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSConferenceDefine.h"
#import "EZSaaSVCRoomModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCAccountModel : NSObject

@property (nonatomic, copy) NSString *cid; //ID
@property (nonatomic, copy) NSString *im_acc_id; //帐号对应im_acc_id
@property (nonatomic, copy) NSString *name; //用户名
@property (nonatomic, copy) NSString *nickname; //昵称
@property (nonatomic, copy) NSString *aliasName; //昵称别名
@property (nonatomic, copy) NSString *portrait; //头像地址
@property (nonatomic, copy) NSString *relative_portrait; //相对头像地址
@property (nonatomic, copy) NSString *mobile; //手机号
@property (nonatomic, copy) NSString *serial_no; //设备序列号

@property (nonatomic, assign) NSInteger type; //类型：1-帐号;2-终端
@property (nonatomic, assign) NSInteger created_at; //创建时间（Unix时间戳）
@property (nonatomic, assign) NSInteger updated_at; //最后登录时间
@property (nonatomic, assign) NSInteger state; //状态：0-正常;1-异常
@property (nonatomic, copy) NSString *room_id; //房间ID
@property (nonatomic, strong) EZSaaSVCRoomModel *room; //房间

@property (nonatomic, copy) NSString *third_corp_name; //外协成员关联的企业名字
@property (nonatomic, copy) NSString *corp_nickname; //帐号在企业内名称
@property (nonatomic, copy) NSString *corp_role; //帐号在企业内角色
@property (nonatomic, copy) NSString *corp_id; //企业ID
@property (nonatomic, copy) NSString *corp_name; //企业名称
@property (nonatomic, copy) NSString *corp_orgid; //分组id
@property (nonatomic, copy) NSString *corp_org; //分组名称

//仅限 conference/get-members 接口返回
@property (nonatomic, assign) EZSaaSVideoConferenceRole role; //类型：0-普通成员;1-创建者;2-主持人

@property (nonatomic, assign) NSInteger version_state; //更新状态 0-未同意 1-同意
@property (nonatomic, assign) NSInteger cert_status; //是否实人认证 0-未认证  1-已认证

@property (nonatomic, assign) NSInteger member_type; //内部联系人-0   外部联系人-1
 
@end

NS_ASSUME_NONNULL_END
