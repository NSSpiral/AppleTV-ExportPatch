/* Runtime dump - MPNetworkPlayabilityMonitor
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNetworkPlayabilityMonitor : NSObject
{
    int _effectiveNetworkTypeForCloudPlayback;
    double _lastAverageBitrate;
    int _networkType;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, nonatomic) double lastAverageBitrate;
@property (readonly, nonatomic) int networkType;
@property (readonly, nonatomic) int effectiveNetworkTypeForPlayback;

+ (MPNetworkPlayabilityMonitor *)sharedNetworkPlayabilityMonitor;

- (int)networkType;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(NSObject *)arg0;
- (int)effectiveNetworkTypeForPlayback;
- (void)_networkTypeDidChangeNotification:(NSNotification *)arg0;
- (void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
- (int)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg0;
- (double)lastAverageBitrate;
- (void)dealloc;
- (MPNetworkPlayabilityMonitor *)init;
- (void).cxx_destruct;

@end
