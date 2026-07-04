/* Runtime dump - ATVPlaybackAirPlayHLSProgressMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVPlaybackProgressMonitor.h>
@interface ATVPlaybackAirPlayHLSProgressMonitor : ATVPlaybackProgressMonitor
{
    AVPlayerItemAccessLogEvent * _latestAVPlayerItemAccessLogEvent;
}

- (void)startPeriodicSample;
- (NSObject *)_initWithPlayerItem:(AVPlayerItem *)arg0 andMediaAsset:(NSSet *)arg1;
- (void)_submitReportAndDisconnect:(char)arg0;
- (void)dealloc;
- (NSDictionary *)metrics;

@end
