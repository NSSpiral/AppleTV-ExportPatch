/* Runtime dump - HAPTimer
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPTimer : NSObject
{
    double _timeInterval;
    char _running;
    <HAPTimerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_source> * _timer;
    unsigned int _options;
}

@property (weak) <HAPTimerDelegate> * delegate;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> * timer;
@property (readonly, nonatomic) unsigned int options;
@property (nonatomic) char running;

- (void)dealloc;
- (void)setDelegate:(<HAPTimerDelegate> *)arg0;
- (HAPTimer *)init;
- (<HAPTimerDelegate> *)delegate;
- (void)suspend;
- (double)timeInterval;
- (void)resume;
- (unsigned int)options;
- (char)isRunning;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_source> *)timer;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (HAPTimer *)initWithTimeInterval:(double)arg0 options:(unsigned int)arg1;
- (void)_handleExpiration;
- (void)_resume;
- (void)_kick;
- (void)_suspend;
- (void)_fire;
- (void)kick;
- (void)setRunning:(char)arg0;

@end
