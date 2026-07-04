/* Runtime dump - PLThrottleTimer
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThrottleTimer : NSObject
{
    id _target;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int _timeoutId;
    unsigned int _maxTimeoutId;
    char _isPingedSinceLastFire;
    char _isPaused;
    char _isInvalid;
    SEL _action;
    double _timeout;
    double _maxTimeout;
}

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) double maxTimeout;

- (void)invalidate;
- (SEL)action;
- (NSObject *)target;
- (void)setPaused:(char)arg0;
- (PLThrottleTimer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1 timeout:(double)arg2 maxTimeout:(double)arg3;
- (void)ping;
- (void)_inqFireWithTimeout:(char)arg0 timeoutId:(unsigned int)arg1 maxTimeout:(char)arg2 maxTimeoutId:(unsigned int)arg3;
- (void)_inqScheduleTimeout:(char)arg0 maxTimeout:(char)arg1;
- (double)timeout;
- (double)maxTimeout;

@end
