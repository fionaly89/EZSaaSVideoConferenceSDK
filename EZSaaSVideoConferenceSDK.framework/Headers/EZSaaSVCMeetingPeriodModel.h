//
//  EZSaaSVCMeetingPeriodModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by YSRTC on 2025/10/22.
//  Copyright © 2025 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCMeetingPeriodModel : NSObject

@property (nonatomic, assign) NSInteger period_type; //周期类型（-1：自定义、0:不重复、1：每天、2：每个工作日、3：每周、4：每两周、5：每月）
@property (nonatomic, assign) NSInteger period_unit; //周期单位（1：天、2：周、3：月） ===自定义
@property (nonatomic, assign) NSInteger period_span; //周期跨度 ===自定义
@property (nonatomic, assign) NSInteger period_anchor_type; //周期锚定类型（1：星期、2：日期） ===自定义
@property (nonatomic, copy) NSString *period_anchor_date; //周期锚定时间（json数组格式：[]） ===自定义
@property (nonatomic, assign) NSInteger period_finish_criteria; //周期终止条件（1：终止时间、2：限定次数）
@property (nonatomic, assign) NSInteger period_cycle_count; //周期循环次数
@property (nonatomic, assign) NSInteger period_finish_time; //周期终止时间

@end

NS_ASSUME_NONNULL_END
