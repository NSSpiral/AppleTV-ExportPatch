/* Runtime dump - AVPeriodicTimebaseObserver
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver
{
    struct ? _intervalRequested;
    struct ? _lastIntervalUsed;
    struct ? _lastPeriodicFireTime;
    struct ? _lastNonperiodicFireTime;
    struct ? _lastStopTime;
    unsigned int _sequenceNum;
    id _block;
}

- (AVPeriodicTimebaseObserver *)initWithTimebase:(struct OpaqueCMTimebase *)arg0 interval:(struct ?)arg1 queue:(NSObject *)arg2 block:(id /* block */)arg3;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (void)_fireBlockForTime:(struct ?)arg0;
- (void)dealloc;

@end
