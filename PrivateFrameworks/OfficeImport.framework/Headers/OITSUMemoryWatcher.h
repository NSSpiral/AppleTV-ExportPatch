/* Runtime dump - OITSUMemoryWatcher
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUMemoryWatcher : NSObject
{
    OITSUFlushingManager * _flushingManager;
    char _going;
    char _stop;
}

- (void)dealloc;
- (void)stopObserving;
- (void)_periodicallySimulateMemoryWarning:(id)arg0;
- (void)_simulateMemoryWarning:(id)arg0;
- (OITSUMemoryWatcher *)initWithFlushingManager:(OITSUFlushingManager *)arg0;
- (void)beginObserving;

@end
