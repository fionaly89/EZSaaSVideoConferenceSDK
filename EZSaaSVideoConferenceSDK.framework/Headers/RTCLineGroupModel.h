//
//  RTCLineGroupModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2022/8/16.
//  Copyright © 2022 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RTCLineGroupModel : NSObject

@property (nonatomic, copy) NSString *cid; //ID
@property (nonatomic, copy) NSString *name; //版本名称
@property (nonatomic, copy) NSString *line_id; //服务器线路ID
@property (nonatomic, copy) NSString *sg_id; //服务器分组ID
@property (nonatomic, assign) NSInteger is_default; //是否默认线路（为空或0: 否;  1: 是）

@end

NS_ASSUME_NONNULL_END

