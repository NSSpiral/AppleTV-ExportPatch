/* Runtime dump - WatchDogTimer
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface WatchDogTimer : CHLogger
{
    NSString * _name;
    NSObject<OS_dispatch_source> * _timer;
}

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (WatchDogTimer *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 withName:(NSString *)arg1 withTimeout:(double)arg2 withCallback:(id /* block */)arg3;

@end
