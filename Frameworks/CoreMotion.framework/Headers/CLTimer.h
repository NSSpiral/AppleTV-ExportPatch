/* Runtime dump - CLTimer
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLTimer : NSObject
{
    CLSilo * _silo;
    <CLTimerScheduler> * _scheduler;
    id _handler;
    double _nextFireTime;
    double _fireInterval;
}

@property (copy, nonatomic) id handler;
@property (nonatomic) double nextFireTime;
@property (nonatomic) double fireInterval;

- (void)shouldFire;
- (CLTimer *)initInSilo:(CLSilo *)arg0 withScheduler:(<CLTimerScheduler> *)arg1;
- (void)updateScheduler;
- (void)setNextFireAfterDelay:(double)arg0;
- (void)setNextFireTime:(double)arg0;
- (void)setFireInterval:(double)arg0;
- (void)setNextFireAfterDelay:(double)arg0 interval:(double)arg1;
- (void)setNextFireTime:(double)arg0 interval:(double)arg1;
- (double)nextFireTime;
- (double)fireInterval;
- (void)invalidate;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void).cxx_destruct;

@end
