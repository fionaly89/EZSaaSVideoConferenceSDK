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

@property (nonatomic, assign) BOOL access_corp_member; //是否仅企业内成员可入会
@property (nonatomic, assign) BOOL water_mark; //会议水印

@property (nonatomic, assign) NSInteger corp_external_member_limit; //外协-企业内外部联系人入会类型限制(0：不允许外部联系人入会;1:允许外部联系人入会；2：仅受邀外部联系人入会)
@property (nonatomic, assign) NSInteger external_member_limit; //外部联系人入会类型限制(0：不允许外部联系人入会;1:允许外部联系人入会；2：仅受邀外部联系人入会)
@property (nonatomic, assign) NSInteger external_waiting_room_state; //外部联系人是否开启等候室(0：关闭;1:开启)
@property (nonatomic, assign) NSInteger inside_waiting_room_state; //内部成员是否开启等候室(0：关闭;1:开启)
@property (nonatomic, assign) NSInteger mute; //成员入会静音设置 0-关闭 1-开启 2-人员超过6人

@end

NS_ASSUME_NONNULL_END
