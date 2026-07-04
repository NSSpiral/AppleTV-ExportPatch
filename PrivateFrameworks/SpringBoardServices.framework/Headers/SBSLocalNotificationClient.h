/* Runtime dump - SBSLocalNotificationClient
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSLocalNotificationClient : NSObject

+ (SBSLocalNotificationClient *)currentUserNotificationSettings;
+ (void)registerUserNotificationSettings:(NSDictionary *)arg0;
+ (void)scheduleLocalNotification:(NSNotification *)arg0;
+ (void)cancelLocalNotification:(NSNotification *)arg0;
+ (void)cancelAllLocalNotifications;
+ (void)setScheduledLocalNotifications:(id)arg0;
+ (SBSLocalNotificationClient *)scheduledLocalNotifications;
+ (void)migrateUserNotificationSettingsForBundleIdentifierPushSettingsPairs:(id)arg0;
+ (SBSLocalNotificationClient *)currentUserNotificationSettingsForBundleID:(NSObject *)arg0;
+ (void)_scheduleLocalNotifications:(id)arg0 cancel:(char)arg1 replace:(char)arg2 optionalBundleIdentifier:(NSString *)arg3 waitUntilDone:(char)arg4;
+ (void)_scheduleLocalNotifications:(id)arg0 cancel:(char)arg1 replace:(char)arg2 optionalBundleIdentifier:(NSString *)arg3;
+ (NSString *)scheduledLocalNotificationsForBundleIdentifier:(NSString *)arg0;
+ (void)registerUserNotificationSettings:(NSDictionary *)arg0 bundleIdentifier:(NSString *)arg1;
+ (NSNotification *)getPendingNotification;
+ (void)scheduleLocalNotification:(NSNotification *)arg0 bundleIdentifier:(NSString *)arg1;
+ (void)scheduleLocalNotification:(NSNotification *)arg0 bundleIdentifier:(NSString *)arg1 waitUntilDone:(char)arg2;
+ (void)cancelLocalNotification:(NSNotification *)arg0 bundleIdentifier:(NSString *)arg1;
+ (void)cancelLocalNotification:(NSNotification *)arg0 bundleIdentifier:(NSString *)arg1 waitUntilDone:(char)arg2;
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(NSString *)arg0;
+ (void)setScheduledLocalNotifications:(id)arg0 bundleIdentifier:(NSString *)arg1;
+ (unsigned int)currentAllowedNotificationTypesForBundleID:(NSObject *)arg0;

@end
