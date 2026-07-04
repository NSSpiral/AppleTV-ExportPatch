/* Runtime dump - GKSTUNObserverInternal
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface GKSTUNObserverInternal : GKSTUNObserver
{
    struct __SCDynamicStore * _dynamicStore;
    NSObject<OS_dispatch_queue> * _stunDiscoveryQueue;
    char _fStunDiscoveryQueued;
}

- (void)dealloc;
- (GKSTUNObserverInternal *)init;
- (char)initialize;
- (void)cleanUp;
- (void)registerForNetworkChanges;
- (void)trySTUNDiscovery;
- (void)deregisterForNetworkChanges;

@end
