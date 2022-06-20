// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef DIGITALREEFSDK_SWIFT_H
#define DIGITALREEFSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="DigitalReefSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


@class NSString;
@class UIVideoView;

SWIFT_CLASS("_TtC14DigitalReefSDK18AdAnalyticsManager")
@interface AdAnalyticsManager : NSObject
+ (AdAnalyticsManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)adShownAnalyticsWithAdId:(NSString * _Nonnull)adId campaignId:(NSString * _Nonnull)campaignId;
- (void)adClosedAnalyticsWithAdId:(NSString * _Nonnull)adId campaignId:(NSString * _Nonnull)campaignId hasVideo:(BOOL)hasVideo videoView:(UIVideoView * _Nullable)videoView;
- (void)adClosedWithNewNotificationWithAdId:(NSString * _Nonnull)adId campaignId:(NSString * _Nonnull)campaignId hasVideo:(BOOL)hasVideo videoView:(UIVideoView * _Nullable)videoView;
- (void)adBtnActionAnalyticsWithAdId:(NSString * _Nonnull)adId campaignId:(NSString * _Nonnull)campaignId hasVideo:(BOOL)hasVideo videoView:(UIVideoView * _Nullable)videoView ctaLink:(NSString * _Nonnull)ctaLink urlData:(NSString * _Nonnull)urlData;
- (void)adContentErrorAdAnalyticsWithAdId:(NSString * _Nonnull)adId campaignId:(NSString * _Nonnull)campaignId;
- (void)gifDisplayedAdAnalyticsWithAdId:(NSString * _Nonnull)adId campaignId:(NSString * _Nonnull)campaignId;
- (void)gifCompletedAdAnalyticsWithAdId:(NSString * _Nonnull)adId campaignId:(NSString * _Nonnull)campaignId;
@end


SWIFT_CLASS("_TtC14DigitalReefSDK8AdEvents")
@interface AdEvents : NSObject
- (nonnull instancetype)initWithKey:(NSString * _Nonnull)key value:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIActivityIndicatorView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC14DigitalReefSDK8AdLoader")
@interface AdLoader : UIViewController
@property (nonatomic, readonly, strong) UIActivityIndicatorView * _Nonnull activityIndicatorView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)closeAdLoader;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DigitalReefSDK16ClientAttributes")
@interface ClientAttributes : NSObject
- (nonnull instancetype)initWithPHONE_NUMBER:(NSString * _Nullable)PHONE_NUMBER CARRIER:(NSString * _Nullable)CARRIER BILL_TYPE:(NSString * _Nullable)BILL_TYPE OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14DigitalReefSDK9CustomNav")
@interface CustomNav : UINavigationController
- (void)viewDidLoad;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DigitalReefSDK21DRNotificationHandler")
@interface DRNotificationHandler : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DRNotificationHandler * _Nonnull shared;)
+ (DRNotificationHandler * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) BOOL engagementPushClicked;
@property (nonatomic) BOOL engagementInAppOpened;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)logToSDKWithMsg:(NSString * _Nonnull)msg;
- (void)removeAdFromDBWithAdId:(NSString * _Nonnull)adId campaignId:(NSString * _Nonnull)campaignId;
- (BOOL)addAdtoDBWithAdSourceType:(NSString * _Nonnull)adSourceType SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getOptInType SWIFT_WARN_UNUSED_RESULT;
- (void)closeLoader;
@end

@class UNNotification;
@class NSDictionary;
@class UNNotificationResponse;

@interface DRNotificationHandler (SWIFT_EXTENSION(DigitalReefSDK))
- (void)requestPermission;
- (void)didReceiveAPNSToken:(NSString * _Nonnull)token;
- (void)willPresentNotification:(UNNotification * _Nonnull)notification;
- (void)didReceiveRemoteNotification:(NSDictionary * _Nonnull)info;
- (void)didReceiveNotificationResponse:(UNNotificationResponse * _Nonnull)response;
- (void)alertReceived:(NSDictionary * _Nonnull)info adId:(NSString * _Nonnull)adId;
@end

@class UNNotificationRequest;
@class UNMutableNotificationContent;
@class UNNotificationContent;

SWIFT_CLASS("_TtC14DigitalReefSDK11DigitalReef")
@interface DigitalReef : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DigitalReef * _Nonnull shared;)
+ (DigitalReef * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (void)includeMediaAttachmentWithRequest:(UNNotificationRequest * _Nonnull)request mutableContent:(UNMutableNotificationContent * _Nonnull)mutableContent contentHandler:(void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler;
+ (void)requestPushPermission;
+ (void)sendEventWithName:(NSString * _Nonnull)name;
+ (void)sendEventWithName:(NSString * _Nonnull)name seconds:(NSInteger)seconds;
- (void)fetchAds;
- (NSString * _Nonnull)fetchClientID SWIFT_WARN_UNUSED_RESULT;
- (void)showRating;
- (void)syncDeviceData;
- (NSString * _Nonnull)deviceData SWIFT_WARN_UNUSED_RESULT;
- (void)sendAdAnalytics;
- (void)removeAllInDb;
- (void)testCompression;
- (void)logsConsoleData;
- (void)realmDb;
- (void)requestAppTrackingTransparencyPermission;
- (void)setClientAttributesWithAttributes:(ClientAttributes * _Nonnull)attributes;
@end

@class NSData;

SWIFT_CLASS("_TtC14DigitalReefSDK9GzManager")
@interface GzManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GzManager * _Nonnull shared;)
+ (GzManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)gzippedWithDataToBeCompressed:(NSData * _Nonnull)dataToBeCompressed;
- (NSDictionary * _Nullable)gunzippedDictionaryWithDataContent:(NSString * _Nonnull)dataContent SWIFT_WARN_UNUSED_RESULT;
- (void)testGzip;
- (void)testDecompress;
@end


SWIFT_CLASS("_TtC14DigitalReefSDK13InAPPUIButton")
@interface InAPPUIButton : UIButton
@property (nonatomic, copy) NSString * _Nullable deeplink;
@property (nonatomic, copy) NSString * _Nullable ctaType;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class DRInAppHelper;
@class DRInAppModel;

SWIFT_CLASS("_TtC14DigitalReefSDK19InAppMessageService")
@interface InAppMessageService : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) InAppMessageService * _Nonnull shared;)
+ (InAppMessageService * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (void)saveMessage:(DRInAppHelper * _Nonnull)item;
- (void)saveHistory:(DRInAppModel * _Nonnull)item sessionId:(NSString * _Nonnull)sessionId;
- (void)removeMessage:(NSString * _Nonnull)id;
- (void)removeStaleMessages;
- (void)removeStaleHistory;
- (NSArray<DRInAppModel *> * _Nonnull)getAll SWIFT_WARN_UNUSED_RESULT;
- (NSArray<DRInAppModel *> * _Nonnull)getLaunchInAppMessages SWIFT_WARN_UNUSED_RESULT;
- (BOOL)checkInAppAdExists:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (NSArray<DRInAppModel *> * _Nonnull)getPushClickInAppMessages:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (BOOL)updateAdShown:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (NSArray<DRInAppModel *> * _Nonnull)getInAppMessagesFromInAppEvent:(NSString * _Nonnull)eventName SWIFT_WARN_UNUSED_RESULT;
- (int32_t)countMessagesViewedHistorically:(NSInteger)timeDelta SWIFT_WARN_UNUSED_RESULT;
- (int32_t)countMessagesViewedHistoricallyByMessageWithId:(NSString * _Nonnull)id timeDelta:(NSInteger)timeDelta SWIFT_WARN_UNUSED_RESULT;
- (int32_t)countMessagesViewedHistoricallyByCategory:(NSString * _Nonnull)category timeDelta:(NSInteger)timeDelta SWIFT_WARN_UNUSED_RESULT;
- (int32_t)countMessagesViewedInThisSession:(NSString * _Nonnull)sessionId SWIFT_WARN_UNUSED_RESULT;
- (int32_t)countMessagesViewedInThisSessionByCategoryWithCategory:(NSString * _Nonnull)category sessionId:(NSString * _Nonnull)sessionId SWIFT_WARN_UNUSED_RESULT;
- (int32_t)countMessagesViewedInThisSessionByMessageWithMessageId:(NSString * _Nonnull)messageId sessionId:(NSString * _Nonnull)sessionId SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DigitalReefSDK17LocalInAppMessage")
@interface LocalInAppMessage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




@interface UIImage (SWIFT_EXTENSION(DigitalReefSDK))
+ (UIImage * _Nullable)gifForObjcWithData:(NSData * _Nonnull)data scale:(CGFloat)scale SWIFT_WARN_UNUSED_RESULT;
@end



@class AVPlayer;
@class AVPlayerLayer;
@class NSURL;
@class NSLayoutConstraint;
@class UIImageView;
@class AVPlayerItem;
@class AVAsset;
@class UILabel;

SWIFT_CLASS("_TtC14DigitalReefSDK11UIVideoView")
@interface UIVideoView : UIView
@property (nonatomic, copy) NSString * _Nullable adType;
@property (nonatomic, copy) NSString * _Nullable adId;
@property (nonatomic, copy) NSString * _Nullable campaignId;
@property (nonatomic, strong) AVPlayer * _Nullable player;
@property (nonatomic, strong) AVPlayerLayer * _Nullable playerLayer;
@property (nonatomic, copy) NSURL * _Nullable videoUrl;
@property (nonatomic) BOOL fullScreenVideo;
@property (nonatomic, strong) NSLayoutConstraint * _Nullable top;
@property (nonatomic, strong) NSLayoutConstraint * _Nullable bottom;
@property (nonatomic, strong) NSLayoutConstraint * _Nullable trailing;
@property (nonatomic, strong) NSLayoutConstraint * _Nullable leading;
@property (nonatomic, strong) UIImageView * _Nullable backgroundImg;
@property (nonatomic, strong) AVPlayerItem * _Nullable playerItem;
@property (nonatomic, copy) NSString * _Nonnull videoWatchedSeconds;
@property (nonatomic) BOOL videoEnded;
@property (nonatomic) BOOL videoFormatFullOrPartial;
@property (nonatomic, strong) AVAsset * _Nullable avAsset;
@property (nonatomic, readonly, strong) UIActivityIndicatorView * _Nonnull activityIndicatorView;
@property (nonatomic, readonly, strong) UILabel * _Nonnull currentTimeLabel;
@property (nonatomic, readonly, strong) UILabel * _Nonnull videoLengthLabel;
@property (nonatomic) BOOL isPlaying;
- (void)setPauseIcon;
- (void)setPlayIcon;
- (void)setSoundIcon;
- (void)setMuteIcon;
@property (nonatomic) BOOL isMuted;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)setVolumeIcon;
- (void)playVideoWithVideoUrl:(NSURL * _Nonnull)url videoAsset:(AVAsset * _Nullable)avAsset image:(UIImageView * _Nullable)imageView fullScrnMode:(BOOL)fullScreenMode muted:(BOOL)videoMuted videoFrmtFull:(BOOL)videoFormatFull adId:(NSString * _Nonnull)adIdInfo campaignId:(NSString * _Nonnull)campaignIdInfo adType:(NSString * _Nonnull)adTypeInfo height:(CGFloat)videoHeight;
- (void)pauseVideo;
- (void)playVideo;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
