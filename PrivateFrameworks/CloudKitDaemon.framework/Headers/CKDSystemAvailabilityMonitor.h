/* Runtime dump - CKDSystemAvailabilityMonitor
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSystemAvailabilityMonitor : NSObject
{
    char _systemIsAvailable;
    NSMutableSet * _watchers;
    NSObject<OS_dispatch_queue> * _availabilityQueue;
}

@property char systemIsAvailable;
@property (retain, nonatomic) NSMutableSet * watchers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * availabilityQueue;

+ (CKDSystemAvailabilityMonitor *)sharedMonitor;

- (void)dealloc;
- (CKDSystemAvailabilityMonitor *)init;
- (CKDSystemAvailabilityMonitor *)_init;
- (void).cxx_destruct;
- (char)systemIsAvailable;
- (void)registerWatcher:(id)arg0;
- (void)unregisterWatcher:(id)arg0;
- (char)_systemMayNowBeReady;
- (NSObject<OS_dispatch_queue> *)availabilityQueue;
- (NSMutableSet *)watchers;
- (void)setSystemIsAvailable:(char)arg0;
- (void)_notifyWatchersOfStateChange;
- (void)setWatchers:(NSMutableSet *)arg0;
- (void)setAvailabilityQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
