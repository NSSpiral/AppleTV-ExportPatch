/* Runtime dump - AVTimebaseObserver
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVTimebaseObserver : NSObject
{
    NSObject<OS_dispatch_queue> * _timerQueue;
    AVWeakReference * _weakReference;
    NSObject<OS_dispatch_source> * _timerSource;
    struct OpaqueCMTimebase * _timebase;
    double _lastRate;
    double _currentRate;
    char _invalid;
}

@property (readonly, nonatomic) AVWeakReference * weakReference;
@property (readonly) struct OpaqueCMTimebase * timebase;
@property (readonly, nonatomic) char invalidated;

- (AVWeakReference *)_weakReference;
- (struct OpaqueCMTimebase *)timebase;
- (void)_startObservingTimebaseNotifications;
- (void)_attachTimerSourceToTimebase;
- (char)invalidated;
- (void)_removeTimebaseFromTimerSource;
- (void)_stopObservingTimebaseNotifications;
- (void)_effectiveRateChanged;
- (AVTimebaseObserver *)initWithTimebase:(struct OpaqueCMTimebase *)arg0 queue:(NSObject *)arg1;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (void)_finishInitialization;
- (void)dealloc;
- (void)invalidate;
- (void)finalize;

@end
