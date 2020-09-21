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

@interface EZSaaSVCCorporationModel : NSObject //•    企业

@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *name; //企业名称
@property (nonatomic, strong) NSString *logo;//企业Logo
@property (nonatomic, strong) NSString *account_id; //企业创建者ID
@property (nonatomic, strong) EZSaaSVCAccountModel *account; //企业创建者
@property (nonatomic, assign) NSInteger created_at; //创建时间（Unix时间戳）
@property (nonatomic, assign) NSInteger deleted_at; //创建时间（Unix时间戳）

@end

NS_ASSUME_NONNULL_END
