/* Runtime dump - CMNatalimeterInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalimeterInternal : NSObject
{
    struct CLConnectionClient * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
    char fStartedUpdates;
    char fResendActivityOverrideOnInterrupt;
    int fActivityOverride;
    id fHandler;
}

- (void)_startWatchdogCheckins;
- (void)_stopWatchdogCheckins;
- (void)_setSession:(int)arg0 withCompletionHandler:(id /* block */)arg1;
- (id)_getExecutablePathFromPid:(int)arg0;
- (void)_handleQueryResponse:(struct CLConnectionMessage *)arg0 withHandler:(struct __short)arg1;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(int)arg0 withHandler:(id /* block */)arg1;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)arg0;
- (void)_stopAbsoluteNatalimetryDataUpdates;
- (void)dealloc;
- (CMNatalimeterInternal *)init;
- (void)_teardown;

@end
