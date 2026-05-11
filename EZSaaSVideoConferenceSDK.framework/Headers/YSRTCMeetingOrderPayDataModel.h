//
//  YSRTCMeetingOrderPayDataModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by YSRTC on 2026/2/4.
//  Copyright © 2026 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCMeetingOrderPayDataModel : NSObject

@property (nonatomic, copy) NSString *orderInfo;
@property (nonatomic, copy) NSString *partnerid;
@property (nonatomic, copy) NSString *package;
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *sign;
@property (nonatomic, copy) NSString *packagepartnerid;
@property (nonatomic, copy) NSString *prepayid;
@property (nonatomic, copy) NSString *noncestr;
@property (nonatomic, copy) NSString *timestamp;

@end

NS_ASSUME_NONNULL_END
