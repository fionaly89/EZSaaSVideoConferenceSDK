//
//  RTCEventKitHelper.h
//  EZSaaSMobileRTC
//
//  Created by EZSaaS on 2021/3/22.
//  Copyright © 2021 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZSaaSVCConferenceModel;

@interface YSRTCInvitedLinkInfo : NSObject

@property (nonatomic, copy) NSString *nickname; //昵称
@property (nonatomic, copy) NSString *aliasName; //昵称别名
@property (nonatomic, copy) NSString *title; //会议标题
@property (nonatomic, copy) NSString *content; //会议标题(可选)
@property (nonatomic, assign) NSInteger begin_time; //会议开始时间（Unix时间戳）
@property (nonatomic, assign) NSInteger end_time; //会议结束时间（Unix时间戳）

@property (nonatomic, copy) NSString *startDate; //会议开始时间 2024-02-20
@property (nonatomic, copy) NSString *startTime; //会议开始时间 19:00
@property (nonatomic, copy) NSString *endDate; //会议开始时间 2024-02-21
@property (nonatomic, copy) NSString *endTime; //会议开始时间 22:00

@property (nonatomic, copy) NSString *roomNo; //房间号
@property (nonatomic, assign) BOOL access_pwd;
@property (nonatomic, copy) NSString *roomPsd; //房间密码
@property (nonatomic, copy) NSString *roomId; //房间ID
@property (nonatomic, assign) BOOL whiteListOnly; //是否仅允许白名单人员入会
@property (nonatomic, copy) NSString *urlStr; //前置地址

@property (nonatomic, assign) BOOL isUseOri; //是否使用原始处理逻辑

@property (nonatomic, copy) NSString *extNickname; //外部昵称
@property (nonatomic, assign) BOOL isUseExtNickname; //是否使用原外部昵称

@end

@interface RTCEventKitHelper : NSObject

+ (instancetype)sharedInstance;

#pragma mark - 发送短信方法
-(void)showMessageView:(NSArray * __nullable)phones title:(NSString *)title body:(NSString *)body navi:(UINavigationController *)navi;

#pragma mark - 拷贝会议信息
+(NSString *)getConferenceModelInfo:(EZSaaSVCConferenceModel *)conferenceModel;
+(NSString *)getConferenceModelInfo:(EZSaaSVCConferenceModel *)conferenceModel extNickname:(NSString *)extNickname;
+(NSString *)getConferenceModelInfoWithMixLink:(EZSaaSVCConferenceModel *)conferenceModel;
+(NSString *)getConferenceModelInfo:(EZSaaSVCConferenceModel *)conferenceModel url:(NSString *)url;
+(NSString *)getConferenceModelInfoWithMixLink:(EZSaaSVCConferenceModel *)conferenceModel url:(NSString *)url;

+(NSString *)getInviteStringWith:(YSRTCInvitedLinkInfo *)inviteInfo;

@end

NS_ASSUME_NONNULL_END
