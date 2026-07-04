/* Runtime dump - FAPushNotificationHandler
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAPushNotificationHandler : NSObject

+ (FAPushNotificationHandler *)sharedHandler;

- (void)didReceivePushNotificationWithPayload:(NSData *)arg0;

@end
