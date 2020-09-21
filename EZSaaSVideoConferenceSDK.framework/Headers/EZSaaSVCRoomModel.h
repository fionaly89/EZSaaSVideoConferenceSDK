//
//  EZSaaSVCRoomModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/10/11.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//•    会议房间
@interface EZSaaSVCRoomModel : NSObject

@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *no; //房间编号
@property (nonatomic, strong) NSString *sdk_no; //SDK房间编号
@property (nonatomic, strong) NSString *password; //入会密码

@property (nonatomic, assign) BOOL access_whitelist; //是否开启白名单验证
@property (nonatomic, assign) BOOL access_pwd; //是否开启密码验证
@property (nonatomic, assign) NSInteger limited; //最大方数，默认-1为不限制（不在业务层限制，实际根据流媒体能力）

@end

NS_ASSUME_NONNULL_END
