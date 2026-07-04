/* Runtime dump - MSDaemon
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSDaemon : NSObject
{
    char _stabilizedIsBusy;
    int _busyCount;
    int _UIBusyCount;
    NSObject<OS_dispatch_queue> * _idleCountQueue;
    NSTimer * _hysteresisTimer;
}

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer * hysteresisTimer;
@property (nonatomic) char stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * idleCountQueue;

- (void)dealloc;
- (MSDaemon *)init;
- (void).cxx_destruct;
- (void)retainBusy;
- (void)releaseBusy;
- (void)didIdle;
- (void)didUnidle;
- (int)busyCount;
- (void)setBusyCount:(int)arg0;
- (NSObject<OS_dispatch_queue> *)idleCountQueue;
- (void)retainPowerAssertion;
- (void)releasePowerAssertion;
- (NSTimer *)hysteresisTimer;
- (void)setHysteresisTimer:(NSTimer *)arg0;
- (char)stabilizedIsBusy;
- (void)setStabilizedIsBusy:(char)arg0;
- (void)stabilizedDidUnidle;
- (void)_hysteresisTimerDidFire:(id)arg0;
- (void)_didChangeIdleBusyState:(char)arg0;
- (void)stabilizedDidIdle;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (int)UIBusyCount;
- (void)setUIBusyCount:(int)arg0;
- (void)setIdleCountQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)isBusy;

@end
