/* Runtime dump - BRCSystemResourcesManager
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver>
{
    NSObject<OS_dispatch_queue> * _notificationQueue;
    char _invalidated;
    NSHashTable * _reachabilityObservers;
    BRReachabilityMonitor * _reachabilityMonitor;
    char _isNetworkReachable;
    NSObject<OS_dispatch_source> * _isNetworkReachableTimer;
    NSHashTable * _powerObservers;
    int _powerNotifyToken;
    char _powerLevelOK;
    NSObject<OS_dispatch_source> * _powerLevelOKTimer;
    NSMutableSet * _lowDiskSet;
    NSMutableDictionary * _lowDiskDict;
    NSObject<OS_dispatch_source> * _lowDiskSource;
    NSObject<OS_dispatch_source> * _lowDiskTimer;
    NSHashTable * _lowMemoryObservers;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    NSMapTable * _processObservers;
    NSHashTable * _appListObservers;
}

@property (readonly) char isNetworkReachable;
@property (readonly) char isPowerOK;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRCSystemResourcesManager *)manager;

- (void)dealloc;
- (BRCSystemResourcesManager *)init;
- (void)suspend;
- (void)reset;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (void)addReachabilityObserver:(NSObject *)arg0;
- (void)removeReachabilityObserver:(NSObject *)arg0;
- (char)isNetworkReachable;
- (char)isPowerOK;
- (char)hasEnoughSpaceForDevice:(int)arg0;
- (void)addLowDiskObserver:(NSObject *)arg0 forDevice:(int)arg1;
- (void)removeLowDiskObserver:(NSObject *)arg0 forDevice:(int)arg1;
- (void)addProcessMonitor:(id)arg0 forProcessID:(int)arg1;
- (void)removeProcessMonitor:(id)arg0;
- (void)addAppListObserver:(NSObject *)arg0;
- (void)_initReachability;
- (void)_initPowerManager;
- (void)_initLowDiskManager;
- (void)_initLowMemory;
- (void)_initProcessObservers;
- (void)_initAppListObservers;
- (void)_initXPCFSEvents;
- (void)_invalidateReachability;
- (void)_invalidatePowerManager;
- (void)_invalidateLowDiskManager;
- (void)_invalidateLowMemory;
- (void)_invalidateProcessObservers;
- (void)_invalidateAppListObservers;
- (void)_resetReachability;
- (void)_resetPowerManager;
- (void)_resetLowDiskManager;
- (void)_setNetworkReachableWithCoalescing:(char)arg0;
- (void)_setNetworkReachable:(char)arg0;
- (void)_setPowerLevelWithCoalescing:(char)arg0;
- (void)_setPowerLevel:(char)arg0;
- (void)_processLowDiskNotification:(char)arg0;
- (void)_invalidateProcessMonitorObject:(NSObject *)arg0;
- (NSObject *)_createMonitoringObjectForProcessID:(int)arg0 observer:(NSObject *)arg1;
- (void)reachabilityMonitor:(BRReachabilityMonitor *)arg0 didChangeReachabilityStatusTo:(char)arg1;
- (void)addPowerObserver:(NSObject *)arg0;
- (void)removePowerObserver:(NSObject *)arg0;
- (void)addLowMemoryObserver:(NSObject *)arg0;
- (void)removeLowMemoryObserver:(NSObject *)arg0;
- (void)removeAppListObserver:(NSObject *)arg0;
- (void)_didReceiveMemoryWarning;

@end
