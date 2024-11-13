#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KotlinLogging, KotlinKotlinThrowable, KotlinLoggingFormat, KotlinLoggingLevel, KotlinKotlinEnumCompanion, KotlinKotlinEnum<E>, KotlinKotlinArray<T>, KotlinSystemLogEngine, KotlinPermissionState, KotlinPermissionException, KotlinLocatorBuilder, KotlinKotlinException, KotlinKotlinRuntimeException, KotlinKotlinIllegalStateException;

@protocol KotlinKotlinx_coroutines_coreFlow, KotlinLocator, KotlinLocationManager, KotlinPlatformLocationManager, KotlinLogEngine, KotlinKotlinComparable, KotlinKotlinx_coroutines_coreFlowCollector, KotlinKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end

@interface KotlinMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

@interface KotlinMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKotlinKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

@interface KotlinNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

@interface KotlinByte : KotlinNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

@interface KotlinUByte : KotlinNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

@interface KotlinShort : KotlinNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

@interface KotlinUShort : KotlinNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

@interface KotlinInt : KotlinNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

@interface KotlinUInt : KotlinNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

@interface KotlinLong : KotlinNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

@interface KotlinULong : KotlinNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

@interface KotlinFloat : KotlinNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

@interface KotlinDouble : KotlinNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

@interface KotlinBoolean : KotlinNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Locator")))
@protocol KotlinLocator
@required
@property (readonly) id<KotlinKotlinx_coroutines_coreFlow> location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleLocationManagerLocator")))
@interface KotlinAppleLocationManagerLocator : KotlinBase <KotlinLocator>
- (instancetype)initWithLogging:(KotlinLogging *)logging __attribute__((swift_name("init(logging:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KotlinKotlinx_coroutines_coreFlow> location __attribute__((swift_name("location")));
@end

__attribute__((swift_name("LocationManager")))
@protocol KotlinLocationManager
@required
- (void)startLocationUpdates __attribute__((swift_name("startLocationUpdates()")));
- (void)stopLocationUpdates __attribute__((swift_name("stopLocationUpdates()")));
@end

__attribute__((swift_name("PlatformLocationManager")))
@protocol KotlinPlatformLocationManager <KotlinLocationManager>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppleLocationManager")))
@interface KotlinCoreAppleLocationManager : KotlinBase <KotlinPlatformLocationManager>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)startLocationUpdates __attribute__((swift_name("startLocationUpdates()")));
- (void)stopLocationUpdates __attribute__((swift_name("stopLocationUpdates()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocatorBuilder")))
@interface KotlinLocatorBuilder : KotlinBase
- (id<KotlinLocator>)build __attribute__((swift_name("build()")));
- (void)loggingInit:(void (^)(KotlinLogging *))init __attribute__((swift_name("logging(init:)")));
@end

__attribute__((swift_name("LogEngine")))
@protocol KotlinLogEngine
@required
- (void)assertThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("assert(throwable:tag:message:)")));
- (void)debugThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("debug(throwable:tag:message:)")));
- (void)errorThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("error(throwable:tag:message:)")));
- (void)infoThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("info(throwable:tag:message:)")));
- (void)verboseThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("verbose(throwable:tag:message:)")));
- (void)warnThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("warn(throwable:tag:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logging")))
@interface KotlinLogging : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property id<KotlinLogEngine> engine __attribute__((swift_name("engine")));
@property KotlinLoggingFormat *format __attribute__((swift_name("format")));
@property NSString * _Nullable identifier __attribute__((swift_name("identifier")));
@property KotlinLoggingLevel *level __attribute__((swift_name("level")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KotlinKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KotlinKotlinEnum<E> : KotlinBase <KotlinKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KotlinKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logging.Format")))
@interface KotlinLoggingFormat : KotlinKotlinEnum<KotlinLoggingFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KotlinLoggingFormat *compact __attribute__((swift_name("compact")));
@property (class, readonly) KotlinLoggingFormat *multiline __attribute__((swift_name("multiline")));
+ (KotlinKotlinArray<KotlinLoggingFormat *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KotlinLoggingFormat *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logging.Level")))
@interface KotlinLoggingLevel : KotlinKotlinEnum<KotlinLoggingLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KotlinLoggingLevel *warnings __attribute__((swift_name("warnings")));
@property (class, readonly) KotlinLoggingLevel *events __attribute__((swift_name("events")));
@property (class, readonly) KotlinLoggingLevel *info __attribute__((swift_name("info")));
+ (KotlinKotlinArray<KotlinLoggingLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KotlinLoggingLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemLogEngine")))
@interface KotlinSystemLogEngine : KotlinBase <KotlinLogEngine>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)systemLogEngine __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KotlinSystemLogEngine *shared __attribute__((swift_name("shared")));
- (void)assertThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("assert(throwable:tag:message:)")));
- (void)debugThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("debug(throwable:tag:message:)")));
- (void)errorThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("error(throwable:tag:message:)")));
- (void)infoThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("info(throwable:tag:message:)")));
- (void)verboseThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("verbose(throwable:tag:message:)")));
- (void)warnThrowable:(KotlinKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("warn(throwable:tag:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionState")))
@interface KotlinPermissionState : KotlinKotlinEnum<KotlinPermissionState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KotlinPermissionState *notRequested __attribute__((swift_name("notRequested")));
@property (class, readonly) KotlinPermissionState *granted __attribute__((swift_name("granted")));
@property (class, readonly) KotlinPermissionState *denied __attribute__((swift_name("denied")));
@property (class, readonly) KotlinPermissionState *deniedForever __attribute__((swift_name("deniedForever")));
+ (KotlinKotlinArray<KotlinPermissionState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KotlinPermissionState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KotlinKotlinThrowable : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KotlinKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KotlinKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("PermissionException")))
@interface KotlinPermissionException : KotlinKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionDeniedException")))
@interface KotlinPermissionDeniedException : KotlinPermissionException
- (instancetype)initWithPermission:(NSString *)permission __attribute__((swift_name("init(permission:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionDeniedForeverException")))
@interface KotlinPermissionDeniedForeverException : KotlinPermissionException
- (instancetype)initWithPermission:(NSString *)permission __attribute__((swift_name("init(permission:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionMissingException")))
@interface KotlinPermissionMissingException : KotlinPermissionException
- (instancetype)initWithPermission:(NSString *)permission __attribute__((swift_name("init(permission:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionRequestException")))
@interface KotlinPermissionRequestException : KotlinPermissionException
- (instancetype)initWithMessage:(NSString *)message permission:(NSString *)permission __attribute__((swift_name("init(message:permission:)"))) __attribute__((objc_designated_initializer));
@end

@interface KotlinPermissionState (Extensions)
- (void)throwOrError __attribute__((swift_name("throwOrError()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocatorKt")))
@interface KotlinLocatorKt : KotlinBase
+ (id<KotlinLocator>)LocatorBuildAction:(void (^)(KotlinLocatorBuilder *))buildAction __attribute__((swift_name("Locator(buildAction:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol KotlinKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KotlinKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KotlinKotlinEnumCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KotlinKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KotlinKotlinArray<T> : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KotlinInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KotlinKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinException")))
@interface KotlinKotlinException : KotlinKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KotlinKotlinRuntimeException : KotlinKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KotlinKotlinIllegalStateException : KotlinKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KotlinKotlinCancellationException : KotlinKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol KotlinKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KotlinKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
