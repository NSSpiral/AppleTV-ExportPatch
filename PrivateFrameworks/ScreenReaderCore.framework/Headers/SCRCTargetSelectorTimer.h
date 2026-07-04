/* Runtime dump - SCRCTargetSelectorTimer
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCTargetSelectorTimer : SCRCTargetSelector
{
    struct __CFRunLoopTimer * _timer;
    id _key;
    char _isCanceled;
    char _isPending;
    id _object;
    NSLock * _lock;
    char _createdTimer;
}

+ (void)initialize;
+ (void)_runThread;

- (void)release;
- (void)cancel;
- (void)dealloc;
- (void)invalidate;
- (char)isCancelled;
- (char)isPending;
- (char)isCanceled;
- (SCRCTargetSelectorTimer *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1 threadKey:(NSString *)arg2;
- (char)_createdTimer;
- (void)dispatchAfterDelay:(double)arg0;
- (void)dispatchAfterDelay:(double)arg0 withObject:(NSObject *)arg1;
- (NSString *)threadKey;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;
- (SCRCTargetSelectorTimer *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

@end
