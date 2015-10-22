// Generated by Apple Swift version 2.0 (swiftlang-700.0.59 clang-700.0.72)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import Foundation;
@import Dispatch;
#endif

#import <InsertFramework/InsertFramework.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSCoder;

SWIFT_CLASS("_TtC15InsertFramework20CameraFloatingButton")
@interface CameraFloatingButton : UIButton
+ (CameraFloatingButton * __nonnull)sharedButton;
- (nonnull instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;

SWIFT_CLASS("_TtC15InsertFramework30IIOAnalyticsAppSpecificTracker")
@interface IIOAnalyticsAppSpecificTracker : NSObject
+ (void)screenViewWithScreenId:(NSNumber * __nonnull)screenId elementId:(NSNumber * __nonnull)elementId;
+ (void)buttonClickWithScreenId:(NSNumber * __nonnull)screenId elementId:(NSNumber * __nonnull)elementId action:(NSInteger)action;
+ (void)listItemClickWithScreenId:(NSNumber * __nonnull)screenId elementId:(NSNumber * __nonnull)elementId itemId:(NSString * __nonnull)itemId itemIndex:(NSInteger)itemIndex itemText:(NSString * __nonnull)itemText action:(NSInteger)action;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15InsertFramework22IIOAnalyticsAppTracker")
@interface IIOAnalyticsAppTracker : NSObject
+ (void)emitApplicationSessionStartAnalyticsEvent:(IIOAnalyticsOrienatation)orientation;
+ (void)emitApplicationSessioEndAnalyticsEvent:(IIOAnalyticsOrienatation)orientation;
+ (void)emitAppInBackgroundAnalyticsEvent:(IIOAnalyticsOrienatation)orientation;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURL;

SWIFT_CLASS("_TtC15InsertFramework25IIOAnalyticsClicksTracker")
@interface IIOAnalyticsClicksTracker : NSObject
+ (void)emitClickedEvent:(NSInteger)insertId elementId:(NSString * __nonnull)elementId imageUrl:(NSURL * __nullable)imageUrl action:(NSURL * __nonnull)action actionType:(IIOAnalyticsCtaActionType)actionType elementType:(IIOAnalyticsClickableElementType)elementType;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15InsertFramework23IIOAnalyticsFormTracker")
@interface IIOAnalyticsFormTracker : NSObject
+ (void)emitSubmitClickedEvent:(NSInteger)insertId elementId:(NSString * __nonnull)elementId radioButtonInput:(NSArray<NSDictionary<NSString *, NSString *> *> * __nonnull)radioButtonInput;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class IIONWInsert;

SWIFT_CLASS("_TtC15InsertFramework25IIOAnalyticsInsertTracker")
@interface IIOAnalyticsInsertTracker : NSObject
+ (void)emitInsertDisplayedAnalyticsEvent:(NSInteger)insertId triggerdBy:(NSInteger)triggerdBy;
+ (void)emitInsertDismissedAnalyticsEvent:(NSInteger)insertId dismissedBy:(IIOAnalyticsDismissedReason)dismissedBy;
+ (void)emitInsertNotDisplayedAnalyticsEvent:(NSInteger)insertId triggerdBy:(NSInteger)triggerdBy reason:(IIOAnalyticsNotDisplayedReason)reason;
+ (void)emitAnalyticsEvent:(NSInteger)insertId event:(NSString * __nonnull)event additionlInfo:(NSDictionary<NSString *, NSObject *> * __nonnull)additionlInfo;
+ (void)emitInsertReceivedAnalyticsEvent:(NSArray<IIONWInsert *> * __nonnull)inserts;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15InsertFramework26IIOAnalyticsYoutubeTracker")
@interface IIOAnalyticsYoutubeTracker : NSObject
+ (void)emitPlayEventForInsert:(NSInteger)insertId videoId:(NSString * __nonnull)videoId orientation:(IIOAnalyticsOrienatation)orientation videoLength:(NSUInteger)videoLength seekBarTime:(NSUInteger)seekBarTime;
+ (void)emitPauseEventForInsert:(NSInteger)insertId videoId:(NSString * __nonnull)videoId orientation:(IIOAnalyticsOrienatation)orientation videoLength:(NSTimeInterval)videoLength seekBarTime:(NSTimeInterval)seekBarTime playDuration:(NSTimeInterval)playDuration reason:(IIOAnalyticsVideoPauseReason)reason;
+ (void)emitVideoStoppedEventForInsert:(NSInteger)insertId videoId:(NSString * __nonnull)videoId orientation:(IIOAnalyticsOrienatation)orientation videoLength:(NSInteger)videoLength playDuration:(NSInteger)playDuration totalPlayDuration:(NSInteger)totalPlayDuration reason:(IIOAnalyticsVideoStopReason)reason;
+ (void)emitOrientationChangedEventForInsert:(NSInteger)insertId videoId:(NSString * __nonnull)videoId orientation:(IIOAnalyticsOrienatation)orientation videoLength:(NSInteger)videoLength seekBarTime:(NSInteger)seekBarTime state:(IIOAnalyticsVideoState)state playDuration:(NSInteger)playDuration;
+ (void)emitVideoResumedEventForInsert:(NSInteger)insertId videoId:(NSString * __nonnull)videoId orientation:(IIOAnalyticsOrienatation)orientation videoLength:(NSInteger)videoLength seekBarTime:(NSInteger)seekBarTime;
+ (void)emitVideoBufferingEventForInsert:(NSInteger)insertId videoId:(NSString * __nonnull)videoId orientation:(IIOAnalyticsOrienatation)orientation videoLength:(NSInteger)videoLength seekBarTime:(NSInteger)seekBarTime BufferDuration:(NSInteger)BufferDuration;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15InsertFramework17IIOErrorReporting")
@interface IIOErrorReporting : NSObject

/// This is a conviniance method for reporting an error without the overhead of creating a full additionalInfo dictionary.
///
/// :param: type The errortype
/// :param: message the value of the errorMsg key
///
/// :return: void
+ (void)reportError:(IIOErrorReasonType)type message:(NSString * __nonnull)message;

/// This is a conviniance method for reporting an error without the overhead of creating a full additionalInfo dictionary.
///
/// :param: type The errortype
/// :param: message the value of the errorMsg key
/// :param: insertId
///
/// :return: void
+ (void)reportError:(IIOErrorReasonType)type message:(NSString * __nonnull)message insertId:(NSInteger)insertId;

/// <code>:param: type the error type 
/// :param: additionalInfo the inner dictionary inside the error dictionary
/// 
/// </code>
+ (void)reportError:(IIOErrorReasonType)type additionalInfo:(NSDictionary<NSString *, NSObject *> * __nonnull)additionalInfo;

/// :param: type the error type :param: additionalInfo the inner dictionary inside the error dictionary :param: insertId
+ (void)reportError:(IIOErrorReasonType)type additionalInfo:(NSDictionary<NSString *, NSObject *> * __nonnull)additionalInfo insertId:(NSInteger)insertId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15InsertFramework27IIOMessageBufferInitializer")
@interface IIOMessageBufferInitializer : NSObject
+ (void)initializeBufferWithQueueSize:(NSUInteger)size duration:(NSUInteger)duration;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15InsertFramework21IIOPrivateAppDelegate")
@interface IIOPrivateAppDelegate : NSObject
+ (IIOPrivateAppDelegate * __nonnull)sharedInstance;
- (void)appWillEnterForeground;
+ (void)start;
@end


@interface NSDate (SWIFT_EXTENSION(InsertFramework))
@end


@interface NSNumber (SWIFT_EXTENSION(InsertFramework))
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) IIOCTAActionType actionType;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) IIONWScreenElementEventConfigurationActionType eventType;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) IIOTooltipPositionType position;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) IIOLinearLayoutOrientation orientation;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) IIOMTLWidgetType widgetType;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly, copy) NSString * __nonnull comparableSelf;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) IIOGravityType gravity;
@property (nonatomic, readonly) IIOLayoutGravityType layout_gravity;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) IIOMTLSharedPreferenceConfigurationValueType sharedPreferenceValueType;
@property (nonatomic, readonly) IIOMTLSharedPreferenceConfigurationType sharedPreferenceConfigurationType;
@property (nonatomic, readonly) IIOMTLSharedPreferenceConfigurationOperator sharedPreferenceOperator;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) UIViewContentMode scaleType;
@property (nonatomic, readonly) NSURL * __nullable src;
@property (nonatomic, readonly) NSURL * __nullable action;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) NSString * __nonnull video_id;
@property (nonatomic, readonly) IIOYoutubeAutoPlayType autoPlay;
@property (nonatomic, readonly) IIOYoutubeControlsStyle controls;
@end

@class IIODimension;

@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) IIODimension * __nonnull layout_width;
@property (nonatomic, readonly) IIODimension * __nonnull layout_height;
@property (nonatomic, readonly) IIODimension * __nonnull height;
@end

@class UIColor;

@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) UIColor * __nullable color;
@property (nonatomic, readonly) UIColor * __nullable background;
@property (nonatomic, readonly) UIColor * __nullable textColor;
@property (nonatomic, readonly) UIColor * __nullable frameColor;
@property (nonatomic, readonly) UIColor * __nullable xColor;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) NSString * __nonnull text;
@property (nonatomic, readonly) NSString * __nonnull id;
@property (nonatomic, readonly) IIOTextDirectionType textDirection;
@property (nonatomic, readonly) IIOTextStyleType textStyle;
@property (nonatomic, readonly) NSString * __nonnull fontFamily;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) BOOL stringToBool;
@property (nonatomic, readonly) BOOL isMandatory;
@property (nonatomic, readonly) BOOL checked;
@property (nonatomic, readonly) UIColor * __nullable checkedTextColor;
@property (nonatomic, readonly) UIColor * __nullable checkedBackground;
@property (nonatomic, readonly) IIOCTAButtonStatus enabled;
@end


@interface NSString (SWIFT_EXTENSION(InsertFramework))
@property (nonatomic, readonly) NSNumber * __nullable nonNegativeNumber;
@property (nonatomic, readonly) NSNumber * __nullable weightSum;
@property (nonatomic, readonly) NSNumber * __nullable layout_weight;
@property (nonatomic, readonly) NSNumber * __nullable layout_margin;
@property (nonatomic, readonly) NSNumber * __nullable layout_marginTop;
@property (nonatomic, readonly) NSNumber * __nullable layout_marginBottom;
@property (nonatomic, readonly) NSNumber * __nullable layout_marginLeft;
@property (nonatomic, readonly) NSNumber * __nullable layout_marginRight;
@property (nonatomic, readonly) NSNumber * __nullable padding;
@property (nonatomic, readonly) NSNumber * __nullable paddingLeft;
@property (nonatomic, readonly) NSNumber * __nullable padding_left;
@property (nonatomic, readonly) NSNumber * __nullable paddingRight;
@property (nonatomic, readonly) NSNumber * __nullable padding_right;
@property (nonatomic, readonly) NSNumber * __nullable paddingTop;
@property (nonatomic, readonly) NSNumber * __nullable padding_top;
@property (nonatomic, readonly) NSNumber * __nullable paddingBottom;
@property (nonatomic, readonly) NSNumber * __nullable padding_bottom;
@property (nonatomic, readonly) NSNumber * __nullable textSize;
@property (nonatomic, readonly) NSNumber * __nullable xWidth;
@property (nonatomic, readonly) NSNumber * __nullable frameWidth;
@end

@class NSDictionary;

SWIFT_CLASS("_TtC15InsertFramework14PairingManager")
@interface PairingManager : NSObject
+ (PairingManager * __nullable)newManager:(NSDictionary * __nonnull)infoDictionary;
- (void)startDevicePairing;
- (void)captureButtonPressed;
@end

@class NSArray;

SWIFT_CLASS("_TtC15InsertFramework14SocketAnyEvent")
@interface SocketAnyEvent : NSObject
@property (nonatomic, readonly, copy) NSString * __null_unspecified event;
@property (nonatomic, readonly) NSArray * __nullable items;
@property (nonatomic, readonly, copy) NSString * __nonnull description;
@end

@protocol SocketEngineClient;
@protocol NSURLSessionDelegate;
@class NSData;
enum PacketType : NSInteger;
@class WebSocket;
@class NSError;

SWIFT_CLASS("_TtC15InsertFramework12SocketEngine")
@interface SocketEngine : NSObject
- (nonnull instancetype)initWithClient:(id <SocketEngineClient> __nonnull)client sessionDelegate:(id <NSURLSessionDelegate> __nullable)sessionDelegate OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithClient:(id <SocketEngineClient> __nonnull)client opts:(NSDictionary * __nullable)opts;
- (void)closeWithFast:(BOOL)fast;
- (void)open:(NSDictionary<NSString *, id> * __nullable)opts;

/// Send an engine message (4)
- (void)send:(NSString * __nonnull)msg withData:(NSArray<NSData *> * __nullable)datas;

/// Write a message, independent of transport.
- (void)write:(NSString * __nonnull)msg withType:(enum PacketType)type withData:(NSArray<NSData *> * __nullable)data;
- (void)websocketDidConnect:(WebSocket * __nonnull)socket;
- (void)websocketDidDisconnect:(WebSocket * __nonnull)socket error:(NSError * __nullable)error;
- (void)websocketDidReceiveMessage:(WebSocket * __nonnull)socket text:(NSString * __nonnull)text;
- (void)websocketDidReceiveData:(WebSocket * __nonnull)socket data:(NSData * __nonnull)data;
@end

typedef SWIFT_ENUM(NSInteger, PacketType) {
  PacketTypeOpen = 0,
  PacketTypeClose = 1,
  PacketTypePing = 2,
  PacketTypePong = 3,
  PacketTypeMessage = 4,
  PacketTypeUpgrade = 5,
  PacketTypeNoop = 6,
};


SWIFT_PROTOCOL("_TtP15InsertFramework18SocketEngineClient_")
@protocol SocketEngineClient
@property (nonatomic, readonly, copy) NSString * __nonnull socketURL;
@property (nonatomic, readonly) BOOL secure;
- (void)didError:(id __nonnull)reason;
- (void)engineDidClose:(NSString * __nonnull)reason;
- (void)parseSocketMessage:(NSString * __nonnull)msg;
- (void)parseBinaryData:(NSData * __nonnull)data;
@end

enum SocketIOClientStatus : NSInteger;

SWIFT_CLASS("_TtC15InsertFramework14SocketIOClient")
@interface SocketIOClient : NSObject <SocketEngineClient>
@property (nonatomic, readonly, copy) NSString * __nonnull socketURL;
@property (nonatomic, readonly) SocketEngine * __nullable engine;
@property (nonatomic, readonly) BOOL secure;
@property (nonatomic, readonly) enum SocketIOClientStatus status;
@property (nonatomic, copy) NSString * __nonnull nsp;
@property (nonatomic, copy) NSDictionary<NSString *, id> * __nullable opts;
@property (nonatomic) BOOL reconnects;
@property (nonatomic) NSInteger reconnectWait;
@property (nonatomic, readonly, copy) NSString * __nullable sid;

/// Create a new SocketIOClient. opts can be omitted
- (nonnull instancetype)initWithSocketURL:(NSString * __nonnull)socketURL opts:(NSDictionary<NSString *, id> * __nullable)opts OBJC_DESIGNATED_INITIALIZER;

/// Closes the socket. Only reopen the same socket if you know what you're doing. Will turn off automatic reconnects. Pass true to fast if you're closing from a background task
- (void)closeWithFast:(BOOL)fast;

/// Connect to the server.
- (void)connect;

/// Connect to the server. If we aren't connected after timeoutAfter, call handler
- (void)connectWithTimeoutAfter:(NSInteger)timeoutAfter withTimeoutHandler:(void (^ __nullable)(void))handler;

/// error
- (void)didError:(id __nonnull)reason;

/// Same as close
- (void)disconnectWithFast:(BOOL)fast;

/// Same as emit, but meant for Objective-C
- (void)emit:(NSString * __nonnull)event withItems:(NSArray * __nonnull)items;

/// Same as emitWithAck, but for Objective-C
- (void (^ __nonnull)(uint64_t, void (^ __nonnull)(NSArray * __nullable)))emitWithAck:(NSString * __nonnull)event withItems:(NSArray * __nonnull)items;
- (void)engineDidClose:(NSString * __nonnull)reason;

/// Leaves nsp and goes back to /
- (void)leaveNamespace;

/// Joins nsp if it is not /
- (void)joinNamespace;

/// Joins namespace /
- (void)joinNamespace:(NSString * __nonnull)namespace_;

/// Removes handler(s)
- (void)off:(NSString * __nonnull)event;

/// Adds a handler for an event.
- (void)onObjectiveC:(NSString * __nonnull)event callback:(void (^ __nonnull)(NSArray * __nullable, void (^ __nullable)(NSArray * __nonnull)))callback;

/// Removes all handlers. Can be used after disconnecting to break any potential remaining retain cycles.
- (void)removeAllHandlers;

/// Adds a handler that will be called on every event.
- (void)onAny:(void (^ __nonnull)(SocketAnyEvent * __nonnull))handler;

/// Same as connect
- (void)open;
- (void)parseSocketMessage:(NSString * __nonnull)msg;
- (void)parseBinaryData:(NSData * __nonnull)data;

/// Tries to reconnect to the server.
- (void)reconnect;
@end

typedef SWIFT_ENUM(NSInteger, SocketIOClientStatus) {
  SocketIOClientStatusNotConnected = 0,
  SocketIOClientStatusClosed = 1,
  SocketIOClientStatusConnecting = 2,
  SocketIOClientStatusConnected = 3,
  SocketIOClientStatusReconnecting = 4,
};


@interface UIColor (SWIFT_EXTENSION(InsertFramework))
- (nullable instancetype)initWithRgba:(NSString * __nonnull)rgba;
@end

@class NSHTTPCookie;
@class NSStream;

SWIFT_CLASS("_TtC15InsertFramework9WebSocket")
@interface WebSocket : NSObject <NSStreamDelegate>
@property (nonatomic) dispatch_queue_t __null_unspecified queue;
@property (nonatomic, copy) void (^ __nullable onConnect)(void);
@property (nonatomic, copy) void (^ __nullable onDisconnect)(NSError * __nullable);
@property (nonatomic, copy) void (^ __nullable onText)(NSString * __nonnull);
@property (nonatomic, copy) void (^ __nullable onData)(NSData * __nonnull);
@property (nonatomic, copy) void (^ __nullable onPong)(void);
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * __nonnull headers;
@property (nonatomic) BOOL voipEnabled;
@property (nonatomic) BOOL selfSignedSSL;
@property (nonatomic, readonly) BOOL isConnected;
- (nonnull instancetype)initWithUrl:(NSURL * __nonnull)url OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithUrl:(NSURL * __nonnull)url cookies:(NSArray<NSHTTPCookie *> * __nullable)cookies;
- (nonnull instancetype)initWithUrl:(NSURL * __nonnull)url protocols:(NSArray<NSString *> * __nonnull)protocols;

/// Connect to the websocket server on a background thread
- (void)connect;

/// disconnect from the websocket server
- (void)disconnect;

/// write a string to the websocket. This sends it as a text frame.
- (void)writeString:(NSString * __nonnull)str;

/// write binary data to the websocket. This sends it as a binary frame.
- (void)writeData:(NSData * __nonnull)data;
- (void)writePing:(NSData * __nonnull)data;
- (void)stream:(NSStream * __nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
@end

#pragma clang diagnostic pop
