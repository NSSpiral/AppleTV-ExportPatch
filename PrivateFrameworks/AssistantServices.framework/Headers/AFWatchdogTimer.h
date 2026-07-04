/* Runtime dump - AFWatchdogTimer
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFWatchdogTimer : NSObject
{
    NSObject<OS_dispatch_source> * _timerSource;
}

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (AFWatchdogTimer *)initWithTimeoutInterval:(double)arg0 timeoutHandler:(id /* block */)arg1;

@end
