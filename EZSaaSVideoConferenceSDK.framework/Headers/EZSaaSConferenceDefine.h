//
//  EZSaaSConferenceDefine.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/2/24.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, EZSaaSVideoConferenceStatus) {
    EZSaaSVideoConferenceStatusInProgress = 1,
    EZSaaSVideoConferenceStatusPreparing,
    EZSaaSVideoConferenceStatusClose,
};

//0-普通成员;1-创建者;2-主持人
typedef NS_ENUM(NSInteger, EZSaaSVideoConferenceRole) {
    Role_Member = 0,
    Role_Creator,
    Role_Host,
};

NS_ASSUME_NONNULL_END
