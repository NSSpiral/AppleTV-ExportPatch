/* Runtime dump - SBSRemoteNotificationClient
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteNotificationClient : NSObject

+ (void)registerForRemoteNotifications;
+ (char)isRegisteredForRemoteNotifications;
+ (void)unregisterForRemoteNotifications;
+ (unsigned char)legacyRegisteredRemoteNotificationTypes;
+ (void)registerForRemoteNotificationsWithLegacyTypes:(unsigned char)arg0;
+ (NSDictionary *)getPendingNotificationUserInfo;
+ (void)getSupportedBundleIdentifiers:(id *)arg0 enabledBundleIdentifiers:(id *)arg1;
+ (void)setAllowed:(char)arg0 forBundleIdentifier:(NSString *)arg1;
+ (NSString *)getNotificationUserInfoForToken:(int)arg0;
+ (unsigned int)_remoteNotificationServerPort;

@end
