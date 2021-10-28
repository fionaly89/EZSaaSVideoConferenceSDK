//
//  EZSaaSVCCorporationModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/10/11.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSVCAccountModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : int {
    CorpAuditStatus_authNot,
    CorpAuditStatus_authed,
} CorpAuditStatus;

@interface EZSaaSVCCorporationModel : NSObject //•    企业

@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *name; //企业名称
@property (nonatomic, strong) NSString *logo;//企业Logo
@property (nonatomic, strong) NSString *account_id; //企业创建者ID
@property (nonatomic, strong) EZSaaSVCAccountModel *account; //企业创建者
@property (nonatomic, assign) NSInteger created_at; //创建时间（Unix时间戳）
@property (nonatomic, assign) NSInteger deleted_at; //创建时间（Unix时间戳）

@property (nonatomic, strong) NSString *corp_city; //所在城市(省市区|分割)
@property (nonatomic, assign) CorpAuditStatus corp_audit_status; //企业认证状态： 0-未认证  1-已认证
@property (nonatomic, assign) int corp_type; //企业类型(1:企业;2:政府/事业单位3:个体工商户;4:其他组织)
@property (nonatomic, strong) NSString *corp_industry; //所在行业
@property (nonatomic, assign) BOOL vas_conc; //是否开启并发验证
@property (nonatomic, assign) BOOL vas_time; //是否开启期限验证

@property (nonatomic, strong) NSString *corp_nickname; //创建者企业内名称

@end

NS_ASSUME_NONNULL_END
