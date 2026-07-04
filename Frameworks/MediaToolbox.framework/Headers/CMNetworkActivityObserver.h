/* Runtime dump - CMNetworkActivityObserver
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface CMNetworkActivityObserver : NSObject
{
    char _valid;
    char _registered;
    int _cmActivityToken;
    int _cmActivityPollingToken;
    CMNetworkActivityMonitor * _activityMonitor;
}

@property (readonly, nonatomic) CMNetworkActivityMonitor * activityMonitor;

+ (CMNetworkActivityObserver *)registeredObserverForActivityMonitor:(id)arg0;

- (void)unregisterObservations;
- (CMNetworkActivityMonitor *)activityMonitor;
- (void)_pollWithInterval:(double)arg0 networkActivityDidCompleteBlock:(id /* block */)arg1;
- (void)registerObservations;
- (CMNetworkActivityObserver *)initForActivityMonitor:(CMNetworkActivityMonitor *)arg0;
- (void)dealloc;
- (void)invalidate;

@end
