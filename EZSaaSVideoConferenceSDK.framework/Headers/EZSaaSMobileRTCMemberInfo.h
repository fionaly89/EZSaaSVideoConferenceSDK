//
//  EZSaaSMobileRTCMemberInfo.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/7/7.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSMobileRTCMemberInfo : NSObject

@property (nonatomic, copy) NSString *cid; //ID                                 Y
@property (nonatomic, copy) NSString *nickName;  //String    用户昵称            Y
@property (nonatomic, copy) NSString *headPortraitUrl; //String    用户头像url   Y
@property (nonatomic, copy) NSString *relative_portrait;

@end

NS_ASSUME_NONNULL_END
