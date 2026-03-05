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
@property (nonatomic, strong) NSString *noOriginal; //房间编号
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
@property (nonatomic, assign) BOOL member_sensitive_state;

//只有会议类型是网络研讨会该字段必填。新增入参截屏录屏字段，默认0都不禁止；1代表已禁止嘉宾；2代表已禁止观众；3代表已禁止嘉宾和观众。
@property (nonatomic, assign) NSInteger webinar_screen_shot;
//只有会议类型是网络研讨会该字段必填。新增入参聊天字段，默认0不禁止；1代表已禁止嘉宾；2代表已禁止观众；3代表已禁止嘉宾和观众。
@property (nonatomic, assign) NSInteger webinar_chat;

//im群组id，如果通过im群组创建的话需要传入
@property (nonatomic, assign) NSInteger im_session_id;

@property (nonatomic, assign) NSInteger integ_member_limit; //入会权限（0：允许所有人、1：仅允许企业成员、2：仅允许受邀成员）（不区分企业内企业外）
@property (nonatomic, assign) NSInteger integ_waiting_room_state; //是否开启等候室（1：是、0：否）（不区分企业内企业外）
@property (nonatomic, assign) BOOL integ_water_mark; //是否开启会议水印（不区分企业内企业外）
@property (nonatomic, assign) BOOL integ_screen_shot; //是否允许会议录屏（不区分企业内企业外）
@property (nonatomic, assign) NSInteger early_entry_perm; //提前进入权限（1：允许成员提前进入、2：仅允许成员当天进入）（周期会议默认选2）
@property (nonatomic, assign) NSInteger allow_add_friend; //是否允许添加好友 0-否 1-是
@property (nonatomic, assign) NSInteger auto_mcu_record; //自动云录制开关（0：关闭、1：主持人入会后打开）

@end

NS_ASSUME_NONNULL_END
