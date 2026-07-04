/* Runtime dump - MKThrottledGate
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKThrottledGate : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    int _maxAvailableTickets;
    float _availableTickets;
    float _refreshRate;
    NSMutableArray * _waitingJobs;
    VKTimer * _timer;
}

- (void)_timerFired:(id)arg0;
- (char)_dispatchWaitingJobsIfNecessary;
- (void)_ensureTimer;
- (char)_replenishAvailableJobsIfNecessary;
- (MKThrottledGate *)initWithMax:(int)arg0 refreshRate:(float)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)dispatch:(VKDispatch *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_destruct;

@end
