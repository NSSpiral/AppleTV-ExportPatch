/* Runtime dump - NSNotificationQueue
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationQueue : NSObject
{
    id _notificationCenter;
    id _asapQueue;
    id _asapObs;
    id _idleQueue;
    id _idleObs;
}

+ (NSNotificationQueue *)defaultQueue;

- (void)enqueueNotification:(NSNotification *)arg0 postingStyle:(unsigned int)arg1;
- (NSNotificationQueue *)initWithNotificationCenter:(CPDistributedNotificationCenter *)arg0;
- (void)_flushNotificationQueue;
- (void)dequeueNotificationsMatching:(id)arg0 coalesceMask:(unsigned int)arg1;
- (void)dealloc;
- (NSNotificationQueue *)init;
- (void)enqueueNotification:(NSNotification *)arg0 postingStyle:(unsigned int)arg1 coalesceMask:(unsigned int)arg2 forModes:(NSArray *)arg3;

@end
