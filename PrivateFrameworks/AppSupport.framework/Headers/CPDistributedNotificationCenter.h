/* Runtime dump - CPDistributedNotificationCenter
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedNotificationCenter : NSObject
{
    NSString * _centerName;
    NSLock * _lock;
    struct __CFRunLoopSource * _receiveNotificationSource;
    char _isServer;
    struct __CFDictionary * _sendPorts;
    unsigned int _startCount;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (CPDistributedNotificationCenter *)centerNamed:(id)arg0;
+ (NSOperationQueue *)_serverPortToNotificationCenterMapDispatchQueue;
+ (struct __CFDictionary *)_serverPortToNotificationCenterMap;
+ (void)setCenter:(struct CGPoint)arg0 forServerPort:(unsigned int)arg1;
+ (NSObject *)centerForServerPort:(unsigned int)arg0;

- (void)runServerOnCurrentThread;
- (void)dealloc;
- (NSString *)name;
- (void)runServer;
- (NSString *)_initWithServerName:(NSString *)arg0;
- (void)_checkOutAndRemoveSource;
- (void)_checkIn;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop *)arg0;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop *)arg0;
- (void)deliverNotification:(NSNotification *)arg0 userInfo:(NSDictionary *)arg1;
- (void)_receivedCheckIn:(unsigned int)arg0 auditToken:(struct ? *)arg1;
- (void)_notificationServerWasRestarted;
- (void)stopDeliveringNotifications;
- (void)startDeliveringNotificationsToMainThread;
- (void)postNotificationName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (char)postNotificationName:(NSString *)arg0 userInfo:(NSDictionary *)arg1 toBundleIdentifier:(NSString *)arg2;
- (void)postNotificationName:(NSString *)arg0;

@end
