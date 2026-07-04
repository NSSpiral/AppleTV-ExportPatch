/* Runtime dump - BSWatchdog
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSWatchdog : NSObject
{
    <BSWatchdogDelegate> * _delegate;
    <BSWatchdogProviding> * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    double _timeout;
    BSTimer * _timer;
    id _completion;
    NSDate * _startDate;
    char _invalidated;
    char _completed;
    char _hasFired;
}

@property (retain, nonatomic) <BSWatchdogDelegate> * delegate;
@property (readonly, retain, nonatomic) <BSWatchdogProviding> * provider;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, nonatomic) double timeout;
@property (readonly, retain, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) char fired;

- (void)_invalidateTimer;
- (void)dealloc;
- (void)setDelegate:(<BSWatchdogDelegate> *)arg0;
- (NSString *)description;
- (<BSWatchdogDelegate> *)delegate;
- (void)invalidate;
- (void)start;
- (BSWatchdog *)initWithProvider:(<BSWatchdogProviding> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (void)_startWatchdogTimer;
- (void)_completeWatchdogAfterFiring:(char)arg0;
- (void)_stageOneTimerFired;
- (void)_setupTimerWithInterval:(double)arg0 handler:(id /* block */)arg1;
- (void)_stageTwoTimerFired;
- (BSWatchdog *)initWithProvider:(<BSWatchdogProviding> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (char)hasFired;
- (NSObject<OS_dispatch_queue> *)queue;
- (BSWatchdog *)initWithTimeout:(double)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (BSWatchdog *)initWithTimeout:(double)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)_watchdogTimerFired;
- (<BSWatchdogProviding> *)provider;
- (double)timeout;
- (NSDate *)startDate;

@end
