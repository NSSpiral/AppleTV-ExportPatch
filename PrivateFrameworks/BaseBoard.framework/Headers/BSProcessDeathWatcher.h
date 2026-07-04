/* Runtime dump - BSProcessDeathWatcher
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSProcessDeathWatcher : NSObject
{
    BSDispatchSource * _source;
    id _deathHandler;
}

- (void)dealloc;
- (void)invalidate;
- (BSProcessDeathWatcher *)initWithPID:(int)arg0 queue:(NSObject *)arg1 deathHandler:(id /* block */)arg2;

@end
