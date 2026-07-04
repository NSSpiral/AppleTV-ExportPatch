/* Runtime dump - PLForegroundMonitor
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLForegroundMonitor : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSCountedSet * _interestingApplications;
    NSMutableSet * _foregroundApplications;
    NSMapTable * _observers;
    char _isMonitoringApplicationStates;
}

+ (PLForegroundMonitor *)sharedInstance;

- (void)dealloc;
- (PLForegroundMonitor *)init;
- (void)addForegroundObserver:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)removeForegroundObserver:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)startWatchingApplicationWithBundleIdentifier:(NSString *)arg0;
- (void)_applicationDidMoveToForegroundLocked:(id)arg0;
- (void)_startMonitoringApplicationStatesLocked;
- (void)_applicationDidMoveToBackgroundLocked:(id)arg0;
- (void)_stopMonitoringApplicationStatesLocked;
- (void)_applicationStateDidChange:(NSDictionary *)arg0;
- (void)stopWatchingApplicationWithBundleIdentifier:(NSString *)arg0;

@end
