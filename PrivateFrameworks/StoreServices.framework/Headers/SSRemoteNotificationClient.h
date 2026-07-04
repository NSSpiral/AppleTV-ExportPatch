/* Runtime dump - SSRemoteNotificationClient
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRemoteNotificationClient : NSObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int _notifyToken;
}

+ (SSRemoteNotificationClient *)sharedClient;

- (void)dealloc;
- (SSRemoteNotificationClient *)init;
- (void)registerForRemoteNotifications;
- (void)unregisterForRemoteNotifications;
- (id)popQueuedNotifications;

@end
