/* Runtime dump - CMSedentaryTimer
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSedentaryTimer : NSObject
{
    CMSedentaryTimer_Internal * _internal;
}

@property (readonly, nonatomic) CMSedentaryTimer_Internal * _internal;

+ (char)isAvailable;

- (CMSedentaryTimer_Internal *)_internal;
- (void)startTimerWithStartTime:(id)arg0 periodInterval:(double)arg1 reminderInterval:(double)arg2 autoReschedule:(char)arg3 handler:(id /* block */)arg4;
- (void)stopTimerWithHandler:(id /* block */)arg0;
- (void)queryAlarmDataSince:(id)arg0 withHandler:(id /* block */)arg1;
- (void)registerForAlarmsWithHandler:(id /* block */)arg0;
- (void)dealloc;
- (CMSedentaryTimer *)init;
- (char)isActive;

@end
