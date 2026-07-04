/* Runtime dump - AVCallbackRegistry
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCallbackRegistry : NSObject
{
    struct __CFBag * _observers;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
}

+ (AVCallbackRegistry *)sharedCallbackRegistry;
+ (void)initialize;

- (void)registerCallbackObserver:(NSObject *)arg0;
- (void)unregisterCallbackObserver:(NSObject *)arg0;
- (NSObject *)callbackObserver:(NSObject *)arg0;
- (void)dealloc;
- (AVCallbackRegistry *)init;
- (void)finalize;

@end
