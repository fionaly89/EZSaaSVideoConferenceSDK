//
//  EZSaaSVCSearchResultModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/11/26.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSVCAccountModel.h"
#import "EZSaaSVCCorporationOrgModel.h"
#import "EZSaaSVCCorporationModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCSearchResultModel : NSObject

@property (nonatomic, strong) EZSaaSVCAccountModel *account;
@property (nonatomic, strong) EZSaaSVCCorporationOrgModel *org;
@property (nonatomic, strong) EZSaaSVCCorporationModel *corporation;
@property (nonatomic, strong) NSString *account_id; //帐号ID
@property (nonatomic, strong) NSString *im_acc_id; //帐号对应im_acc_id
@property (nonatomic, strong) NSString *corp_id; //公司ID
@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *nickname; //ID
@property (nonatomic, strong) NSString *org_id; //组织ID
@property (nonatomic, assign) NSInteger role; //角色ID
@property (nonatomic, strong) NSString *user_id;
@property (nonatomic, assign) NSInteger member_type; //内部联系人-0   外部联系人-1
@property (nonatomic, strong) NSString *third_corp_name; //外部联系人所属企业
@property (nonatomic, strong) NSString *org_path; //组织架构路径
@property (nonatomic, strong) NSString *orgsTreeName;

@property (nonatomic, assign) int is_executive; //是否为高管，0 表示不是，1 表示是, 默认0
@property (nonatomic, assign) int power_view_executive; //is_executive字段为1时，才会进一步判断该字段，代表该高管手机号码和办公电话对当前token用户是否真正可见, 0 表示不可见，1 表示可见, 默认0
@property (nonatomic, assign) int post_type; //成员在企业的岗位类型（0：主岗；1：副岗），默认是0)

@property (nonatomic, strong) YSRTCVCAccountCorp_extModel *corp_ext;

@end

NS_ASSUME_NONNULL_END
