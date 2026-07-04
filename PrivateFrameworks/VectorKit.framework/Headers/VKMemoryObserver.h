/* Runtime dump - VKMemoryObserver
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMemoryObserver : NSObject
{
    id _target;
    SEL _selector;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
}

- (void)dealloc;
- (void)_receivedMemoryNotification;
- (void)triggerMemoryNotification:(char)arg0;
- (VKMemoryObserver *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

@end
