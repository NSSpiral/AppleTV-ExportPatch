/* Runtime dump - BSPortDeathWatcher
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPortDeathWatcher : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    BSDispatchSource * _source;
    BSMachSendRight * _sendRight;
    id _handler;
}

@property (readonly, copy, nonatomic) BSMachSendRight * sendRight;

- (void)dealloc;
- (void)invalidate;
- (BSMachSendRight *)sendRight;
- (BSPortDeathWatcher *)initWithSendRight:(BSMachSendRight *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 deathHandler:(id /* block */)arg2;
- (void)queue_handlePortDeathEvent;
- (BSPortDeathWatcher *)initWithPort:(unsigned int)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 deathHandler:(id /* block */)arg2;

@end
