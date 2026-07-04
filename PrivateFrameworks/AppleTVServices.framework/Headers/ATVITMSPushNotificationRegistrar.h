/* Runtime dump - ATVITMSPushNotificationRegistrar
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVITMSPushNotificationRegistrar : NSObject

+ (void)registerForUser:(id)arg0;
+ (NSObject *)registeredUserID;
+ (NSDictionary *)_deviceTokenForCurrentiTMSEnvironment;
+ (void)_registerPlistBody:(NSObject *)arg0 withRegistrationURL:(NSURL *)arg1;
+ (void)_registerPlistBody:(NSObject *)arg0 withRegistrationURL:(NSURL *)arg1 withNextBackoffDelay:(long long)arg2;
+ (void)registerTokenWithURL:(NSURL *)arg0;

@end
