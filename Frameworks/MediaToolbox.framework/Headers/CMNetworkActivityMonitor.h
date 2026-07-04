/* Runtime dump - CMNetworkActivityMonitor
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface CMNetworkActivityMonitor : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    char _networkIsActive;
    CMNetworkActivityObserver * _cmObserver;
    int _showingNetworkActivityCount;
    int _monitoringActiveCount;
}

@property (nonatomic) char networkIsActive;
@property (retain, nonatomic) CMNetworkActivityObserver * cmObserver;
@property (nonatomic) int showingNetworkActivityCount;
@property (nonatomic) int monitoringActiveCount;

+ (CMNetworkActivityMonitor *)sharedActivityMonitor;

- (void)setNetworkIsActive:(char)arg0;
- (void)setCMObserver:(NSObject *)arg0;
- (int)monitoringActiveCount;
- (void)setMonitoringActiveCount:(int)arg0;
- (CMNetworkActivityObserver *)cmObserver;
- (void)beginMonitoring;
- (void)endMonitoring;
- (int)showingNetworkActivityCount;
- (void)setShowingNetworkActivityCount:(int)arg0;
- (char)networkIsActive;
- (void)dealloc;
- (CMNetworkActivityMonitor *)init;

@end
