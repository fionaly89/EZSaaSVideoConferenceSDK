
#ifndef __EZSaaSRTCExtensionConst__H__
#define __EZSaaSRTCExtensionConst__H__

#import <Foundation/Foundation.h>

// 信号量
#define EZSaaSRTCExtensionSemaphoreCreate \
static dispatch_semaphore_t signalSemaphore; \
static dispatch_once_t onceTokenSemaphore; \
dispatch_once(&onceTokenSemaphore, ^{ \
    signalSemaphore = dispatch_semaphore_create(1); \
});

#define EZSaaSRTCExtensionSemaphoreWait \
dispatch_semaphore_wait(signalSemaphore, DISPATCH_TIME_FOREVER);

#define EZSaaSRTCExtensionSemaphoreSignal \
dispatch_semaphore_signal(signalSemaphore);

// 过期
#define EZSaaSRTCExtensionDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)

// 构建错误
#define EZSaaSRTCExtensionBuildError(clazz, msg) \
NSError *error = [NSError errorWithDomain:msg code:250 userInfo:nil]; \
[clazz setEzsaas_error:error];

// 日志输出
#ifdef DEBUG
#define EZSaaSRTCExtensionLog(...) my_nslog(__VA_ARGS__)
#else
#define EZSaaSRTCExtensionLog(...)
#endif

/**
 * 断言
 * @param condition   条件
 * @param returnValue 返回值
 */
#define EZSaaSRTCExtensionAssertError(condition, returnValue, clazz, msg) \
[clazz setEzsaas_error:nil]; \
if ((condition) == NO) { \
    EZSaaSRTCExtensionBuildError(clazz, msg); \
    return returnValue;\
}

#define EZSaaSRTCExtensionAssert2(condition, returnValue) \
if ((condition) == NO) return returnValue;

/**
 * 断言
 * @param condition   条件
 */
#define EZSaaSRTCExtensionAssert(condition) EZSaaSRTCExtensionAssert2(condition, )

/**
 * 断言
 * @param param         参数
 * @param returnValue   返回值
 */
#define EZSaaSRTCExtensionAssertParamNotNil2(param, returnValue) \
EZSaaSRTCExtensionAssert2((param) != nil, returnValue)

/**
 * 断言
 * @param param   参数
 */
#define EZSaaSRTCExtensionAssertParamNotNil(param) EZSaaSRTCExtensionAssertParamNotNil2(param, )

/**
 * 打印所有的属性
 */
#define EZSaaSRTCLogAllIvars \
-(NSString *)description \
{ \
    return [self ezsaas_keyValues].description; \
}
#define EZSaaSRTCExtensionLogAllProperties EZSaaSRTCLogAllIvars

/**
 *  类型（属性类型）
 */
extern NSString *const EZSaaSRTCPropertyTypeInt;
extern NSString *const EZSaaSRTCPropertyTypeShort;
extern NSString *const EZSaaSRTCPropertyTypeFloat;
extern NSString *const EZSaaSRTCPropertyTypeDouble;
extern NSString *const EZSaaSRTCPropertyTypeLong;
extern NSString *const EZSaaSRTCPropertyTypeLongLong;
extern NSString *const EZSaaSRTCPropertyTypeChar;
extern NSString *const EZSaaSRTCPropertyTypeBOOL1;
extern NSString *const EZSaaSRTCPropertyTypeBOOL2;
extern NSString *const EZSaaSRTCPropertyTypePointer;

extern NSString *const EZSaaSRTCPropertyTypeIvar;
extern NSString *const EZSaaSRTCPropertyTypeMethod;
extern NSString *const EZSaaSRTCPropertyTypeBlock;
extern NSString *const EZSaaSRTCPropertyTypeClass;
extern NSString *const EZSaaSRTCPropertyTypeSEL;
extern NSString *const EZSaaSRTCPropertyTypeId;

#endif
