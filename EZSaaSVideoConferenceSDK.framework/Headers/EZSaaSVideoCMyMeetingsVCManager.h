//
//  EZSaaSVideoCMyMeetingsVCManager.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2019/10/23.
//  Copyright © 2019 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZSaaSVCConferenceModel;

@interface EZSaaSVideoCMyMeetingsVCManagerModel : NSObject

@property (nonatomic, strong) NSString *beginTime;
@property (nonatomic, strong) NSString *endTime;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *owner;
@property (nonatomic, assign) NSInteger state;

@property (nonatomic, strong) EZSaaSVCConferenceModel *model;

@end

@interface EZSaaSVideoCMyMeetingsVCManager : NSObject

+(NSArray<NSDictionary<NSString *, NSArray<EZSaaSVideoCMyMeetingsVCManagerModel *> *> *> *)converModelsToDict:(NSArray<NSDictionary<NSString *, NSArray<EZSaaSVideoCMyMeetingsVCManagerModel *> *> *> *)dict models:(NSArray<EZSaaSVCConferenceModel *> *)models;

@end
 
NS_ASSUME_NONNULL_END
