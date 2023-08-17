//
//  RTCRoomVideoRecordModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2023/7/27.
//  Copyright © 2023 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RTCRoomVideoRecordLogModel : NSObject

@property (nonatomic, strong) NSString *begin_at; //ID
@property (nonatomic, strong) NSString *channel_id; //ID
@property (nonatomic, strong) NSString *conf_id; //ID
@property (nonatomic, strong) NSString *content; //ID
@property (nonatomic, strong) NSString *corp_id; //ID
@property (nonatomic, strong) NSString *duration; //ID
@property (nonatomic, strong) NSString *end_at; //ID
@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *isRecord; //ID
@property (nonatomic, strong) NSString *mcu_duration; //ID
@property (nonatomic, strong) NSString *preview_url; //ID
@property (nonatomic, strong) NSString *record_file_num; //ID
@property (nonatomic, strong) NSString *record_state; //ID
@property (nonatomic, strong) NSString *room_id; //ID
@property (nonatomic, strong) NSString *state; //ID
@property (nonatomic, strong) NSString *title; //ID

@end

@interface RTCRoomVideoRecordModel : NSObject

@property (nonatomic, strong) NSString *acc_id_begin; //ID
@property (nonatomic, strong) NSString *acc_id_end; //ID
@property (nonatomic, strong) NSString *begin_at; //ID
@property (nonatomic, strong) NSString *conf_id; //ID
@property (nonatomic, strong) NSString *created_at; //ID
@property (nonatomic, strong) NSString *deleted_at; //ID
@property (nonatomic, strong) NSString *duration; //ID
@property (nonatomic, strong) NSString *end_at; //ID
@property (nonatomic, strong) NSString *expire_at;
@property (nonatomic, strong) NSString *file_num;
@property (nonatomic, strong) NSString *file_size;
@property (nonatomic, strong) NSString *cid;
@property (nonatomic, strong) NSString *log_id;
@property (nonatomic, strong) NSString *room_id;
@property (nonatomic, strong) NSString *state;
@property (nonatomic, strong) NSString *updated_at;

@property (nonatomic, strong) RTCRoomVideoRecordLogModel *log;

@end

NS_ASSUME_NONNULL_END
