/* Runtime dump - TSUMemoryWatcher
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUMemoryWatcher : NSObject
{
    TSUFlushingManager * _flushingManager;
    char _going;
    char _stop;
}

- (void)dealloc;
- (void)stopObserving;
- (void)_periodicallySimulateMemoryWarning:(id)arg0;
- (void)_simulateMemoryWarning:(id)arg0;
- (TSUMemoryWatcher *)initWithFlushingManager:(TSUFlushingManager *)arg0;
- (void)beginObserving;

@end
