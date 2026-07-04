/* Runtime dump - ATVPlaybackITMSProgressMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVPlaybackProgressMonitor.h>
@interface ATVPlaybackITMSProgressMonitor : ATVPlaybackProgressMonitor
{
    char _playabilityMetricsAreViable;
    double _mostRecentReadyToPlay;
    char _readyToPlayTransitionHappened;
    NSDictionary * _latestPlayabilityMetricsForSampling;
}

@property double mostRecentReadyToPlay;
@property char readyToPlayTransitionHappened;

- (void)startPeriodicSample;
- (NSObject *)_initWithPlayerItem:(AVPlayerItem *)arg0 andMediaAsset:(NSSet *)arg1;
- (NSString *)mediaTypeString;
- (void)finishPeriodicSample;
- (void)_takeAdditionalPeriodicSamples:(id)arg0 andDescriptions:(id)arg1;
- (void)startSamplingIfNecessary;
- (void)playerItemMonitoringStarted;
- (void)playerActivated:(id)arg0;
- (void)playerDeactivated;
- (NSObject *)streamingType;
- (id)_gatherAdditionalMetrics;
- (void)_playbackStalled:(id)arg0;
- (void)setMostRecentReadyToPlay:(double)arg0;
- (double)mostRecentReadyToPlay;
- (char)readyToPlayTransitionHappened;
- (void)setReadyToPlayTransitionHappened:(char)arg0;
- (id)_gatherMetricsForStall;
- (void)dealloc;

@end
