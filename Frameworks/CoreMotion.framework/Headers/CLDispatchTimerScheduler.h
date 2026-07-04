/* Runtime dump - CLDispatchTimerScheduler
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler>
{
    CLTimer * timer;
    NSObject<OS_dispatch_source> * _source;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> * source;
@property (weak, nonatomic) CLTimer * timer;

- (void)reflectNextFireTime:(double)arg0 fireInterval:(double)arg1;
- (CLDispatchTimerScheduler *)initWithDispatchSilo:(VKDispatch *)arg0;
- (void)dealloc;
- (NSObject<OS_dispatch_source> *)source;
- (void)setSource:(NSObject<OS_dispatch_source> *)arg0;
- (void).cxx_destruct;
- (void)setTimer:(CLTimer *)arg0;
- (CLTimer *)timer;

@end
