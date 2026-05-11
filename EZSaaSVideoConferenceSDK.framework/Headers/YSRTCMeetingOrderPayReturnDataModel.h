//
//  YSRTCMeetingOrderPayReturnDataModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by YSRTC on 2026/2/4.
//  Copyright © 2026 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YSRTCMeetingOrderPayDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCMeetingOrderPayReturnDataModel : NSObject

@property (nonatomic, strong) YSRTCMeetingOrderPayDataModel *returnData;

@property (nonatomic, copy) NSString *channelCode;
@property (nonatomic, copy) NSString *orderNo;
@property (nonatomic, copy) NSString *payType; // 支付宝app："alipay_app"、微信app： “wechat_app” 、 支付宝h5：“alipay_wap ”，微信native：”wx_native
@property (nonatomic, copy) NSString *tradeOrder;
@property (nonatomic, copy) NSString *returnType;
@property (nonatomic, copy) NSString *cashUrl;

@end

NS_ASSUME_NONNULL_END
