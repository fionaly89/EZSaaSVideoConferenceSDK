//
//  EZSaaSVCConferenceModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/10/11.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSVCAccountModel.h"
#import "EZSaaSVCRoomModel.h"
#import "EZSaaSVCCorporationModel.h"
#import "RTCRoomVideoRecordModel.h"
#import "EZSaaSVCMeetingPeriodModel.h"
//#import "MeetingRecurrenceResult.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCConferenceModel : NSObject

@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *title; //会议标题
@property (nonatomic, strong) NSString *content; //会议内容
@property (nonatomic, strong) NSString *account_id; //创建人ID
@property (nonatomic, strong) NSString *corp_id; //所属企业ID
@property (nonatomic, strong) NSString *room_id; //会议房间ID
@property (nonatomic, strong) NSString *log_id; //会议日志ID
@property (nonatomic, strong) NSString *share_cfg_id; //分享的id

@property (nonatomic, strong) EZSaaSVCAccountModel *account; //创建人
@property (nonatomic, strong) EZSaaSVCRoomModel *room; //会议房间
@property (nonatomic, strong) EZSaaSVCCorporationModel *corporation; //所属企业
@property (nonatomic, strong) EZSaaSVCMeetingPeriodModel *periodic_config; //周期会议信息

@property (nonatomic, assign) NSInteger type; //会议类型: 1-即时会议; 2-预约会议; 3-单聊会议; 4-群聊会议; 5-网络研讨会
@property (nonatomic, assign) NSInteger begin_time; //会议开始时间（Unix时间戳）
@property (nonatomic, assign) NSInteger end_time; //会议结束时间（Unix时间戳）
@property (nonatomic, assign) NSInteger duration; //会议持续时间（单位秒）
@property (nonatomic, assign) NSInteger state; //状态：1-会议中;2-待开始;3-结束；

@property (nonatomic, assign) BOOL water_mark;
@property (nonatomic, assign) BOOL screen_shot;//允许成员截图与录屏
@property (nonatomic, assign) BOOL share_screen;

@property (nonatomic, assign) BOOL inside_water_mark;
@property (nonatomic, assign) BOOL inside_screen_shot;

@property (nonatomic, assign) BOOL external_screen_shot;
@property (nonatomic, assign) BOOL external_share_screen;
@property (nonatomic, assign) BOOL external_water_mark;

@property (nonatomic, assign) BOOL isRecord; //是否有录像（true：有；false：否）
@property (nonatomic, assign) int record_file_num; //录像文件个数

@property (nonatomic, assign) BOOL is_speech; //是否有语音转写（true：有；false：否）
@property (nonatomic, assign) BOOL is_summary; //是否有会议纪要（true：有；false：否）

@property (nonatomic, strong) RTCRoomVideoRecordModel *RoomVideoRecord;

@property (nonatomic, assign) NSInteger guest_total; //嘉宾数量
@property (nonatomic, assign) NSInteger audience_total; //观众数量

@property (nonatomic, assign) NSInteger guest_num; //会中真实参会嘉宾人数
@property (nonatomic, assign) NSInteger audience_num; //会中真实参会观众人数

@property (nonatomic, assign) NSInteger attend_num; //参会人员数量

@property (nonatomic, assign) NSInteger white_list_num;  //白名单成员数量

//@property (nonatomic, assign) BOOL isRecord; // 是否开启过录像
//@property (nonatomic, assign) BOOL is_speech; // 是否开启过转写
//@property (nonatomic, assign) BOOL is_summary; // 是否开启过会议纪要
@property (nonatomic, assign) NSInteger record_state; //录像文件状态：0-生成中，1-已生成，2-生成失败，3-已过期，4-已删除，5-即将过期
@property (nonatomic, assign) NSInteger record_expire_at;  //录像文件过期时间（单位秒）


@property (nonatomic, assign) NSInteger repetitionIndex;
@property (nonatomic, copy) NSString *repetitionStr;
@property (nonatomic, assign) NSInteger integ_member_limit; //入会权限（0：允许所有人、1：仅允许企业成员、2：仅允许受邀成员）（不区分企业内企业外）
@property (nonatomic, assign) NSInteger integ_waiting_room_state; //是否开启等候室（1：是、0：否）（不区分企业内企业外）
@property (nonatomic, assign) BOOL integ_water_mark; //是否开启会议水印（不区分企业内企业外）
@property (nonatomic, assign) BOOL integ_screen_shot; //是否允许会议录屏（不区分企业内企业外）
@property (nonatomic, assign) NSInteger early_entry_perm; //提前进入权限（1：允许成员提前进入、2：仅允许成员当天进入）（周期会议默认选2）

@property (nonatomic, assign) NSInteger period_type; //周期类型（-1：自定义、0:不重复、1：每天、2：每个工作日、3：每周、4：每两周、5：每月）
@property (nonatomic, assign) NSInteger period_unit; //周期单位（1：天、2：周、3：月） ===自定义
@property (nonatomic, assign) NSInteger period_span; //周期跨度 ===自定义
@property (nonatomic, assign) NSInteger period_anchor_type; //周期锚定类型（1：星期、2：日期） ===自定义
@property (nonatomic, copy) NSString *period_anchor_date; //周期锚定时间（json数组格式：[]） ===自定义
@property (nonatomic, assign) NSInteger period_finish_criteria; //周期终止条件（1：终止时间、2：限定次数）
@property (nonatomic, assign) NSInteger period_cycle_count; //周期循环次数
@property (nonatomic, assign) NSInteger period_finish_time; //周期终止时间

@property (nonatomic, assign) BOOL periodic; // 是否为周期会议
@property (nonatomic, assign) NSInteger remain_session_count; //剩余场次数量
@property (nonatomic, assign) NSInteger closed_session_count; //已开场次数量

@property (nonatomic, assign) BOOL isAgainMeeting; //是否从历史记录重新开始会议

//@property (nonatomic, assign) BOOL speech_transcript_enabled; //是否开启语音转写
//@property (nonatomic, assign) BOOL speech_summary_enabled; //是否开启会议纪要
//@property (nonatomic, assign) NSInteger auto_mcu_record; //自动云录制开关（0：关闭、1：打开）

@property (nonatomic, assign) BOOL indiv_speech_transcript_enabled; //是否开启个人语音转写
@property (nonatomic, assign) BOOL indiv_speech_summary_enabled; //是否开启个人会议纪要
@property (nonatomic, assign) BOOL has_indiv_speech_transcript; //是否有个人语音转写
@property (nonatomic, assign) BOOL has_indiv_speech_summary; //是否有个人会议纪要
@property (nonatomic, strong) NSString *conf_record_share_cfg_id; //会议记录分享配置id


@end

NS_ASSUME_NONNULL_END
