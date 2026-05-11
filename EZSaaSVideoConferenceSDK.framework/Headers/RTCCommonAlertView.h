//
//  RTCCommonAlertView.h
//  EZSaaSVideoConferenceSDK
//
//  Created by EZSaaS on 2023/2/9.
//  Copyright © 2023 EZSaaS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RTCCommonAlertViewDataModel : NSObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic, strong) UIColor *color;

@end

@interface RTCCommonAlertView : UIView

+ (RTCCommonAlertView *)getRTCCommonAlertViewWithTitle:(NSString *)title
                                               content:(NSString *)content
                                              boldText:(NSString *)boldText
                                         agreeBtnTitle:(NSString *)agreeBtnTitle
                                        refuseBtnTitle:(NSString *)refuseBtnTitle
                                             keyWindow:(nullable UIView *)keyWindow
                                            agreeBlock:(void (^)(void))agreeBlock
                                           refuseBlock:(void (^)(void))refuseBlock;

+ (RTCCommonAlertView *)getRTCCommonAlertViewWithTitle:(NSString *)title
                                               content:(NSString *)content
                                         agreeBtnTitle:(NSString *)agreeBtnTitle
                                        refuseBtnTitle:(NSString *)refuseBtnTitle
                                             keyWindow:(nullable UIView *)keyWindow
                                            agreeBlock:(void (^)(void))agreeBlock
                                           refuseBlock:(void (^)(void))refuseBlock;

+ (RTCCommonAlertView *)getRTCCommonAlertViewWithTitle:(NSString *)title
                                               content:(NSString *)content
                                         agreeBtnTitle:(NSString *)agreeBtnTitle
                                             keyWindow:(nullable UIView *)keyWindow
                                            agreeBlock:(void (^)(void))agreeBlock;

+ (RTCCommonAlertView *)getRTCCommonAlertViewWithTitle:(NSString *)title
                                       selectedContent:(NSString *)selectedContent
                                            isSelected:(BOOL)isSelected
                                         agreeBtnTitle:(NSString *)agreeBtnTitle
                                        refuseBtnTitle:(NSString *)refuseBtnTitle
                                             keyWindow:(nullable UIView *)keyWindow
                                            agreeBlock:(void (^)(BOOL selected))agreeBlock
                                           refuseBlock:(void (^)(void))refuseBlock;

+ (RTCCommonAlertView *)getRTCCommonAlertViewWithTitle:(NSString *)title
                                               content:(NSString *)content
                                         agreeBtnTitle:(NSString *)agreeBtnTitle
                                        refuseBtnTitle:(NSString *)refuseBtnTitle
                                        cancelBtnTitle:(NSString *)cancelBtnTitle
                                             keyWindow:(nullable UIView *)keyWindow
                                            agreeBlock:(void (^)(void))agreeBlock
                                           refuseBlock:(void (^)(void))refuseBlock
                                           cancelBlock:(void (^)(void))cancelBlock;

+ (RTCCommonAlertView *)getRTCCommonAlertViewWithTitle:(NSString *)title
                                               content:(NSString *)content
                                               subContent:(NSString *)subContent
                                              boldText:(NSString *)boldText
                                         agreeBtnTitle:(NSString *)agreeBtnTitle
                                        refuseBtnTitle:(NSString *)refuseBtnTitle
                                             keyWindow:(nullable UIView *)keyWindow
                                            agreeBlock:(void (^)(BOOL select))agreeBlock
                                           refuseBlock:(void (^)(BOOL select))refuseBlock;

//支持传入多个变色内容
+ (RTCCommonAlertView *)getRTCCommonMulDataAlertViewWithTitle:(NSString *)title
                                                      content:(NSString *)content
                                                         data:(NSArray<RTCCommonAlertViewDataModel *> *)data
                                                agreeBtnTitle:(NSString *)agreeBtnTitle
                                               refuseBtnTitle:(NSString *)refuseBtnTitle
                                                    keyWindow:(nullable UIView *)keyWindow
                                                   agreeBlock:(void (^)(void))agreeBlock
                                                  refuseBlock:(void (^)(void))refuseBlock;

-(void)dismissAgreementView;

@end

NS_ASSUME_NONNULL_END
