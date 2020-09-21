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
@property (nonatomic, strong) NSString *corp_id; //公司ID
@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *nickname; //ID
@property (nonatomic, strong) NSString *org_id; //组织ID
@property (nonatomic, assign) NSInteger role; //角色ID
@property (nonatomic, strong) NSString *user_id;

@end

NS_ASSUME_NONNULL_END
