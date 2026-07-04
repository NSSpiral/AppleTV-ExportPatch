/* Runtime dump - CMSedentaryTimer_Internal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSedentaryTimer_Internal : NSObject
{
    NSObject<OS_dispatch_queue> * fClientQueue;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
    NSObject<OS_dispatch_queue> * fDaemonQueue;
    struct CLConnectionClient * fLocationdConnection;
    char _timerArmed;
}

@property (nonatomic) char timerArmed;

- (void)_startWatchdogCheckins;
- (void)_stopWatchdogCheckins;
- (void)setTimerArmed:(char)arg0;
- (char)isTimerArmed;
- (void)_handleAlarmDataResponse:(struct CLConnectionMessage *)arg0 withHandler:(struct __short)arg1;
- (char)_isActive;
- (void)_handleStartStopTimerResponse:(struct CLConnectionMessage *)arg0 withHandler:(struct __short)arg1;
- (void)_registerForAlarmsWithHandler:(id /* block */)arg0;
- (void)dealloc;
- (CMSedentaryTimer_Internal *)init;
- (void)_teardown;

@end
