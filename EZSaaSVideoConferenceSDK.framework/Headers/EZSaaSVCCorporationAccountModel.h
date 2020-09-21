//
//  EZSaaSVCCorporationAccountModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/11/12.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCCorporationAccountModel : NSObject

@property (nonatomic, strong) NSString *account_id; //帐号ID
@property (nonatomic, strong) NSString *corp_id; //公司ID
@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *nickname; //ID
@property (nonatomic, strong) NSString *org_id; //组织ID
@property (nonatomic, assign) NSInteger role; //角色ID
@property (nonatomic, strong) NSString *user_id;

@end

NS_ASSUME_NONNULL_END
