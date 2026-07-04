/* Runtime dump - CPLNetworkWatcher
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLNetworkWatcher : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    struct __SCNetworkReachability * _reachability;
    unsigned int _reachabilityFlags;
    unsigned int _networkState;
    <CPLNetworkWatcherDelegate> * _delegate;
}

@property (readonly, nonatomic) unsigned int networkState;
@property (weak, nonatomic) <CPLNetworkWatcherDelegate> * delegate;

+ (NSObject *)_descriptionForNetworkState:(unsigned int)arg0;

- (void)setDelegate:(<CPLNetworkWatcherDelegate> *)arg0;
- (<CPLNetworkWatcherDelegate> *)delegate;
- (CPLNetworkWatcher *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)_updateState:(unsigned int)arg0;
- (void)_setupReachability;
- (void)_teardownReachability;
- (void)_reachabilityFlagsDidChange:(unsigned int)arg0;
- (void)_initialReachabilityTestFailed;
- (unsigned int)networkState;

@end
