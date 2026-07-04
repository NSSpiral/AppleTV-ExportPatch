/* Runtime dump - CMActivityAlarm
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityAlarm : NSObject
{
    char fIsValid;
    struct __CFRunLoop * fRunLoop;
    NSObject<OS_dispatch_queue> * fQueue;
    id fHandler;
    unsigned int _trigger;
    double _duration;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned int trigger;

+ (char)activityAlarmAvailable;
+ (NSDictionary *)activityAlarmInfo;

- (void)fire;
- (CMActivityAlarm *)initWithTrigger:(unsigned int)arg0 duration:(double)arg1 onQueue:(/* block */ id)arg2 withHandler:(id /* block */)arg3;
- (CMActivityAlarm *)initWithTrigger:(unsigned int)arg0 duration:(double)arg1 onRunLoop:(struct __CFRunLoop *)arg2 withHandler:(id /* block */)arg3;
- (void)setTrigger:(unsigned int)arg0;
- (void)dealloc;
- (double)duration;
- (void)invalidate;
- (void)setDuration:(double)arg0;
- (char)isValid;
- (unsigned int)trigger;

@end
