//
//  EZSaaSVCOwnerModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/5/14.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSVCAccountModel.h"
#import "EZSaaSVCRoomModel.h"
#import "EZSaaSVCConferenceModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCOwnerModel : NSObject

@property (nonatomic, strong) NSString *account_id; //创建人ID
@property (nonatomic, assign) NSInteger begin_time; //会议开始时间（Unix时间戳）
@property (nonatomic, strong) NSString *content; //会议内容
@property (nonatomic, strong) NSString *corp_id; //所属企业ID
@property (nonatomic, assign) NSInteger duration; //会议持续时间（单位秒）
@property (nonatomic, assign) NSInteger end_time; //会议结束时间（Unix时间戳）
@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *log_id; //ID
@property (nonatomic, strong) NSString *room_id; //会议房间ID
@property (nonatomic, assign) NSInteger state;
@property (nonatomic, strong) NSString *title; //会议标题
@property (nonatomic, assign) NSInteger type; //会议类型: 1-即时会议; 2-预约会议

@property (nonatomic, strong) EZSaaSVCAccountModel *account; //创建人
@property (nonatomic, strong) EZSaaSVCRoomModel *room; //会议房间
@property (nonatomic, strong) EZSaaSVCConferenceModel *conference;

@end

NS_ASSUME_NONNULL_END
