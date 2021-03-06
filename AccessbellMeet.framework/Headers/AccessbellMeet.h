
#import <AccessbellMeet/AccessbellMeetView.h>
#import <AccessbellMeet/AccessbellMeetViewDelegate.h>
#import <AccessbellMeet/AccessbellMeetConferenceOptions.h>
#import <AccessbellMeet/AccessbellMeetLogger.h>
#import <AccessbellMeet/AccessbellMeetBaseLogHandler.h>
#import <AccessbellMeet/InfoPlistUtil.h>


@interface AccessbellMeet : NSObject

/**
 * Name for the conference NSUserActivity type. This is used when integrating with
 * SiriKit or Handoff, for example.
 */
@property (copy, nonatomic, nullable) NSString *conferenceActivityType;
/**
 * Custom URL scheme used for deep-linking.
 */
@property (copy, nonatomic, nullable) NSString *customUrlScheme;
/**
 * List of domains used for universal linking.
 */
@property (copy, nonatomic, nullable) NSArray<NSString *> *universalLinkDomains;
/**
 * Default conference options used for all conferences. These options will be merged
 * with those passed to AccessbellMeetView.join when joining a conference.
 */
@property (nonatomic, nullable) AccessbellMeetConferenceOptions *defaultConferenceOptions;

#pragma mark - This class is a singleton

+ (instancetype _Nonnull)sharedInstance;

#pragma mark - Methods that the App delegate must call

-             (BOOL)application:(UIApplication *_Nonnull)application
  didFinishLaunchingWithOptions:(NSDictionary *_Nonnull)launchOptions;

-    (BOOL)application:(UIApplication *_Nonnull)application
  continueUserActivity:(NSUserActivity *_Nonnull)userActivity
    restorationHandler:(void (^_Nullable)(NSArray<id<UIUserActivityRestoring>> *_Nonnull))restorationHandler;

- (BOOL)application:(UIApplication *_Nonnull)app
            openURL:(NSURL *_Nonnull)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *_Nonnull)options;

#pragma mark - Utility methods

- (AccessbellMeetConferenceOptions *_Nonnull)getInitialConferenceOptions;

- (BOOL)isCrashReportingDisabled;

@end
