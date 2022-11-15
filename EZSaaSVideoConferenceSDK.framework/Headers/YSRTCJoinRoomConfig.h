//
//  YSRTCJoinRoomConfig.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2022/10/8.
//  Copyright © 2022 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCJoinRoomConfig : NSObject

@property (nonatomic, copy) NSString *roomNo; //房间号
@property (nonatomic, copy) NSString *nickname; //昵称
@property (nonatomic, copy) NSString *aliasName; //用户昵称别名，必须项
@property (nonatomic, copy) NSString *password; //密码

@property (nonatomic, assign) BOOL isAudioOn; //入会是否默认开启麦克风
@property (nonatomic, assign) BOOL isVideoOn; //入会是否默认开启摄像头
@property (nonatomic, assign) BOOL isSoundOn; //入会是否默认开启扬声器

@end

NS_ASSUME_NONNULL_END
