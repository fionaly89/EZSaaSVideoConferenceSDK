//
//  EZSaaSConferenceRegModel.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2020/8/31.
//  Copyright © 2020 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSConferenceRegModel : NSObject

@property (nonatomic, copy) NSString *addr;  //注册服务器地址，若当前无服务器则为空
@property (nonatomic, copy) NSString *port;

@end

NS_ASSUME_NONNULL_END
