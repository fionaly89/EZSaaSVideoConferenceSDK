//
//  EZSaaSVCCorporationOrgModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/11/1.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@class EZSaaSVCCorporationMemberModel;

@interface EZSaaSVCCorporationOrgModel : NSObject

@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *name; //组织名
@property (nonatomic, strong) NSString *pid; //上级组织ID，无表示顶级组织
@property (nonatomic, strong) NSString *corp_id; //企业ID

@property (nonatomic, assign) NSInteger ys_id; //ys中的组织ID
@property (nonatomic, assign) NSInteger ys_pid; //ys中的上级组织ID
@property (nonatomic, assign) NSInteger deleted_at; //删除时间

@property (nonatomic, assign) NSInteger org_count;
@property (nonatomic, assign) NSInteger mem_count;

@property (nonatomic, strong) NSArray<EZSaaSVCCorporationMemberModel *> *subMembers;
@property (nonatomic, strong) NSArray<EZSaaSVCCorporationOrgModel *> *subOrgs;

@end

NS_ASSUME_NONNULL_END
