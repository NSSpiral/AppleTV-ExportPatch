/* Runtime dump - CMCatherineFeederInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMCatherineFeederInternal : NSObject
{
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient * fLocationdConnection;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (void)_startWatchdogCheckins;
- (void)_stopWatchdogCheckins;
- (void)_startDaemonConnection;
- (void)_feedCatherine:(double)arg0 confidence:(double)arg1 timestamp:(double)arg2;
- (void)dealloc;
- (CMCatherineFeederInternal *)init;
- (void)_teardown;

@end
