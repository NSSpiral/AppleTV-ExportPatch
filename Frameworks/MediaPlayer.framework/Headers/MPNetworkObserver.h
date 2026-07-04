/* Runtime dump - MPNetworkObserver
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNetworkObserver : NSObject
{
    int _networkUsageCount;
    NSObject<OS_dispatch_queue> * _networkUsageQueue;
}

@property (readonly, nonatomic) char isUsingNetwork;
@property (readonly, nonatomic) char isCellularNetworkingAllowed;

+ (MPNetworkObserver *)sharedNetworkObserver;

- (void)_cellularNetworkAllowedDidChangeNotification:(NSNotification *)arg0;
- (void)beginUsingNetwork;
- (void)endUsingNetwork;
- (char)isCellularNetworkingAllowed;
- (char)isUsingNetwork;
- (void)dealloc;
- (MPNetworkObserver *)init;
- (MPNetworkObserver *)_init;
- (void).cxx_destruct;

@end
