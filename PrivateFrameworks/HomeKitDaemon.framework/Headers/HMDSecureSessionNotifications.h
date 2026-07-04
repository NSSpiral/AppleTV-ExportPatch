/* Runtime dump - HMDSecureSessionNotifications
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSecureSessionNotifications : NSObject
{
    NSMutableDictionary * _sessionNotificationPayloads;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (retain, nonatomic) NSMutableDictionary * sessionNotificationPayloads;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;

- (HMDSecureSessionNotifications *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (NSMutableDictionary *)sessionNotificationPayloads;
- (NSObject *)_notificationPayloadsForDestination:(NSObject *)arg0;
- (void)addNotificationPayload:(NSData *)arg0 identifier:(NSString *)arg1 destination:(NSObject *)arg2;
- (void)removeNotificationPayloadWithIdentifier:(NSString *)arg0 destination:(NSObject *)arg1;
- (NSString *)notificationPayloadWithIdentifier:(NSString *)arg0 destination:(NSObject *)arg1;
- (void)clearNotificationsForDestination:(NSObject *)arg0;
- (void)setSessionNotificationPayloads:(NSMutableDictionary *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
