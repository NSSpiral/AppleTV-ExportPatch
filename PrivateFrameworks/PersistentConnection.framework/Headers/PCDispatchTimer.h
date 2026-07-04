/* Runtime dump - PCDispatchTimer
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCDispatchTimer : NSObject
{
    NSObject<OS_dispatch_source> * _timerSource;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long _fireTime;
    NSDate * _fireDate;
    CUTWeakReference * _target;
    SEL _selector;
    char _isValid;
}

@property (readonly, nonatomic) char isValid;
@property (retain, nonatomic) NSDate * fireDate;

- (void)dealloc;
- (void)invalidate;
- (char)isValid;
- (void)setFireDate:(NSDate *)arg0;
- (void)start;
- (NSDate *)fireDate;
- (void)_cleanupTimer;
- (PCDispatchTimer *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 target:(CUTWeakReference *)arg1 selector:(SEL)arg2 fireTime:(unsigned long long)arg3;
- (void)_callTarget;

@end
