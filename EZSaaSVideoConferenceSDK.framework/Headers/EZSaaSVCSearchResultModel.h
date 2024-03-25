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

@end

NS_ASSUME_NONNULL_END
