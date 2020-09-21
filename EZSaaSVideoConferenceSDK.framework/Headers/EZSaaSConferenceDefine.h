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

NS_ASSUME_NONNULL_END
