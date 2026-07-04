/* Runtime dump - BSTimer
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSTimer : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    id _handler;
    BSDispatchSource * _source;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
}

+ (BSTimer *)scheduledTimerWithFireInterval:(double)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 handler:(id /* block */)arg2;

- (void)cancel;
- (void)dealloc;
- (BSTimer *)initWithFireInterval:(double)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 handler:(id /* block */)arg2;
- (BSTimer *)initWithFireInterval:(double)arg0 repeatInterval:(double)arg1 leewayInterval:(double)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 handler:(id /* block */)arg4;
- (void)schedule;

@end
