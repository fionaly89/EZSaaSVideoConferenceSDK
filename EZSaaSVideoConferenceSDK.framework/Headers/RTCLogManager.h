//
//  RTCLogManager.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2022/11/7.
//  Copyright © 2022 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    RTCLogActionType_login_login_register, //点击了登录/注册按钮
    RTCLogActionType_login_account, //输入了帐号[帐号名]
    RTCLogActionType_login_password,    //输入了密码
    RTCLogActionType_login_agreement,   //勾选了协议
    RTCLogActionType_login_login,   //点击了登录
    
    RTCLogActionType_room_meeting, //选择了会议[会议名称]
    RTCLogActionType_room_meeting_id, //输入了会议ID[会议ID值]
    RTCLogActionType_room_name, //输入了入会姓名[名字]
    
    RTCLogActionType_op_microphone_on, //开启了话筒
    RTCLogActionType_op_microphone_off, //关闭了话筒
    RTCLogActionType_op_camera_on, //开启了摄像
    RTCLogActionType_op_camera_off, //关闭了摄像
    RTCLogActionType_op_beauty_on, //开启了美颜[SDK版本号]
    RTCLogActionType_op_beauty_off, //关闭了美颜
    RTCLogActionType_op_desktop_share_on, //开启了桌面共享
    RTCLogActionType_op_desktop_share_off, //关闭了桌面共享
    RTCLogActionType_op_whiteboard_share_on, //开启了白板
    RTCLogActionType_op_whiteboard_share_off, //关闭了白板
    RTCLogActionType_op_picture_share_on, //开启了图片共享[图片地址]
    RTCLogActionType_op_picture_share_off, //关闭了图片共享
    RTCLogActionType_op_speaker_on, //开启了扬声器
    RTCLogActionType_op_speaker_off, //关闭了扬声器
    
    RTCLogActionType_host_silence_all_strict, //开启了全体静音且不允许成员自行解除
    RTCLogActionType_host_silence_all_loose, //开启了全体静音但允许成员自行解除
    RTCLogActionType_host_silence_all_off, //解除了全体静音
    RTCLogActionType_host_silence_enter_on, //开启了入会自动静音
    RTCLogActionType_host_silence_enter_six_on, //6人以上时启用入会自动静音
    RTCLogActionType_host_silence_enter_off, //关闭了入会自动静音
    RTCLogActionType_host_silence_individual_off, //解静音了成员[名称]
    RTCLogActionType_host_silence_individual_on, //静音了成员[名称]
    RTCLogActionType_host_transfer_emcee, //转让了主持给[名称]
    
    RTCLogActionType_ui_lifecycle, //ui 事件
} RTCLogActionType;

@interface RTCLogManager : NSObject

+ (instancetype)sharedManager;

- (void)startLoggerWithUUID:(NSString *)uuid domainUrl:(NSString *)domainUrl;

- (void)switchLoggerDomainUrl:(NSString *)domainUrl;

/// 记录UI操作日志
/// - Parameters:
///   - actionType: 操作类型
///   - resultBody: 操作结果描述
///   - result: 操作结果
- (void)addActionLogByType:(RTCLogActionType)actionType resultBody:(NSString *)resultBody result:(BOOL)result;

/// 记录HTTP请求日志
/// - Parameters:
///   - task: 请求任务
///   - requestDict: 请求字段
///   - responseDict: 返回字段
///   - duration: 耗时
///   - result: 请求成功失败结果
- (void)addHTTPLogByTask:(NSURLSessionDataTask *)task
             requestDict:(NSMutableDictionary *)requestDict
            responseDict:(NSDictionary *)responseDict
                duration:(NSTimeInterval)duration
                  result:(BOOL)result;

@end

NS_ASSUME_NONNULL_END
