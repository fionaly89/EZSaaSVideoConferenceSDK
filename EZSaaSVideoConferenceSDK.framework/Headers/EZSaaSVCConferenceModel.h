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

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVCConferenceModel : NSObject

@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *title; //会议标题
@property (nonatomic, strong) NSString *content; //会议内容
@property (nonatomic, strong) NSString *account_id; //创建人ID
@property (nonatomic, strong) NSString *corp_id; //所属企业ID
@property (nonatomic, strong) NSString *room_id; //会议房间ID
@property (nonatomic, strong) NSString *log_id; //会议日志ID

@property (nonatomic, strong) EZSaaSVCAccountModel *account; //创建人
@property (nonatomic, strong) EZSaaSVCRoomModel *room; //会议房间
@property (nonatomic, strong) EZSaaSVCCorporationModel *corporation; //所属企业

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

@property (nonatomic, assign) NSInteger white_list_num;

@end

NS_ASSUME_NONNULL_END
