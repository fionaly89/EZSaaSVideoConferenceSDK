//
//  EZSaaSVCCorporationMemberModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/10/29.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class YSRTCVCAccountCorp_extModel;
@class EZSaaSVCAccountModel;
@class EZSaaSVCCorporationModel;
@class EZSaaSVCCorporationOrgModel;

@interface EZSaaSVCCorporationMemberModel : NSObject

@property (nonatomic, strong) EZSaaSVCAccountModel *account; //帐号信息，详见Models
@property (nonatomic, strong) EZSaaSVCCorporationModel *corporation; //企业

@property (nonatomic, strong) NSString *portrait;
@property (nonatomic, strong) NSString *account_id; //帐号ID
@property (nonatomic, strong) NSString *im_acc_id; //帐号对应im_acc_id
@property (nonatomic, strong) NSString *corp_id; //企业ID
@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, assign) NSInteger role; //角色：0-普通成员；1-创建者；2-管理员
@property (nonatomic, strong) NSString *ys_id; //ys中的企业ID
@property (nonatomic, strong) NSString *org_id; //组织ID
@property (nonatomic, assign) NSInteger member_type; //内部联系人-0   外部联系人-1
@property (nonatomic, strong) NSString *third_corp_name; //外部联系人所属企业
@property (nonatomic, strong) EZSaaSVCCorporationOrgModel *org; //企业
@property (nonatomic, strong) NSString *orgsTreeName;
@property (nonatomic, strong) NSString *position;
@property (nonatomic, strong) NSString *inviter_acc_name; //邀请人企业下昵称
@property (nonatomic, strong) NSString *inviter_acc_id; //邀请人企业下ID
@property (nonatomic, assign) NSInteger invitation_method; //加入企业方式:(0-通过添加觅讯账户成员方式；1-通过生成企业邀请链接方式；2-通过主动加入企业方式。)
@property (nonatomic, assign) BOOL corp_cooperation_established;

@property (nonatomic, strong) YSRTCVCAccountCorp_extModel *corp_ext;

@end

NS_ASSUME_NONNULL_END
