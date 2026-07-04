/* Runtime dump - ATVPlaybackStreamingProgressMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVPlaybackProgressMonitor.h>
@interface ATVPlaybackStreamingProgressMonitor : ATVPlaybackProgressMonitor
{
    AVPlayerItemAccessLogEvent * _latestEventForSampling;
    int _streamStartupMillis;
    int _playbackStartupMillis;
    int _playbackStartupDwellMillis;
}

- (void)startPeriodicSample;
- (void)finishPeriodicSample;
- (id)gatherSessionSummary;
- (void)playerActivated:(id)arg0;
- (NSObject *)streamingType;
- (id)_gatherAdditionalMetrics;
- (void)_streamSwitched:(id)arg0;
- (void)_stallDuringPlayback:(id)arg0;
- (void)dealloc;

@end
