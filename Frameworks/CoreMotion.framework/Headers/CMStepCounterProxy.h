/* Runtime dump - CMStepCounterProxy
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMStepCounterProxy : NSObject
{
    struct CLConnectionClient * fLocationdConnection;
    char fStartedUpdates;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    int fStepCountFromStart;
    int fPrevStepCount;
}

- (void)_handleQueryResponse:(struct CLConnectionMessage *)arg0 onQueue:(struct __short)arg1 withHandler:(struct __raw)arg2;
- (void)_queryStepCountStartingFromInternal:(id)arg0 to:(NSObject *)arg1 toQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (void)_startStepCountingUpdatesToQueue:(NSObject *)arg0 updateOn:(int)arg1 withHandler:(id /* block */)arg2;
- (void)dealloc;
- (CMStepCounterProxy *)init;
- (void)_teardown;

@end
