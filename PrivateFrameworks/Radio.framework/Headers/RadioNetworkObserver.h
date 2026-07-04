/* Runtime dump - RadioNetworkObserver
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioNetworkObserver : NSObject
{
    int _networkUsageCount;
    NSObject<OS_dispatch_queue> * _networkUsageQueue;
}

@property (readonly, nonatomic) char isUsingNetwork;
@property (readonly, nonatomic) char isCellularNetworkingAllowed;

+ (RadioNetworkObserver *)sharedNetworkObserver;

- (void)_cellularNetworkAllowedDidChangeNotification:(NSNotification *)arg0;
- (void)beginUsingNetwork;
- (void)endUsingNetwork;
- (char)isCellularNetworkingAllowed;
- (char)isUsingNetwork;
- (void)dealloc;
- (RadioNetworkObserver *)init;
- (RadioNetworkObserver *)_init;
- (void).cxx_destruct;

@end
