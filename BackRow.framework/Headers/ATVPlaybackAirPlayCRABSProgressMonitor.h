/* Runtime dump - ATVPlaybackAirPlayCRABSProgressMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVPlaybackProgressMonitor.h>
@interface ATVPlaybackAirPlayCRABSProgressMonitor : ATVPlaybackProgressMonitor
{
    char _playabilityMetricsAreViable;
    NSDictionary * _latestPlayabilityMetricsForSampling;
}

- (void)startPeriodicSample;
- (NSObject *)_initWithPlayerItem:(AVPlayerItem *)arg0 andMediaAsset:(NSSet *)arg1;
- (void)_submitReportAndDisconnect:(char)arg0;
- (void)finishPeriodicSample;
- (void)playerItemMonitoringStarted;
- (void)playerDeactivated;
- (void)dealloc;
- (NSDictionary *)metrics;

@end
