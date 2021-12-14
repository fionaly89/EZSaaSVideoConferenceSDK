//
//  EZSaaSConferenceRegModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/8/31.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSConferenceRegModel : NSObject

/// UDP地址
@property (nonatomic, copy) NSString *addr;
/// UDP端口
@property (nonatomic, copy) NSString *port;
/// MQTT地址
@property (nonatomic, copy) NSString *mqtt_address;
/// MQTT端口
@property (nonatomic, assign) NSInteger mqtt_port;
/// MQTT完整地址
@property (nonatomic, copy) NSString *mqtt_tcp;
/// WebRtc MQTT地址
@property (nonatomic, copy) NSString *mqtt_ws;
/// 注册服务器ID
@property (nonatomic, copy) NSString *server_id;

@end

NS_ASSUME_NONNULL_END
