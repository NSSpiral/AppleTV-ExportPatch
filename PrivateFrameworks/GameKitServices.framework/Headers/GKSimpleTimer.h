/* Runtime dump - GKSimpleTimer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKSimpleTimer : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSObject<OS_dispatch_source> * _timerSource;
    id _delegate;
    double _startTime;
    double _interval;
    char _timerSourceSet;
}

@property (nonatomic) <GKSimpleTimerDelegate> * delegate;
@property (readonly, nonatomic) double interval;

- (void)dealloc;
- (void)setDelegate:(<GKSimpleTimerDelegate> *)arg0;
- (GKSimpleTimer *)init;
- (<GKSimpleTimerDelegate> *)delegate;
- (void)invalidate;
- (double)interval;
- (void)setTimer:(double)arg0;
- (void)fireIn:(double)arg0 fromNow:(double)arg1;

@end
