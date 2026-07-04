/* Runtime dump - CLDispatchSilo
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLDispatchSilo : CLSilo
{
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)async:(char)arg0;
- (void)sync:(NSObject<OS_dispatch_queue> *)arg0;
- (void)assertInside;
- (void)assertOutside;
- (NSTimer *)newTimer;
- (void)afterInterval:(double)arg0 async:(char)arg1;
- (CLDispatchSilo *)initWithUnderlyingQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (CLDispatchSilo *)initMain;
- (NSString *)debugDescription;
- (CLDispatchSilo *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;

@end
