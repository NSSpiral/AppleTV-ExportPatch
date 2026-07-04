/* Runtime dump - ATVSedonaMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVVideoAsset.h>

@protocol BRMediaAssetDerivesMediaURL;

@class ATVFeedElement, BRTimer;
@interface ATVSedonaMediaAsset : ATVVideoAsset <BRMediaAssetDerivesMediaURL>
{
    char _playlistURLDetermined;
    char _hasBeenPlayed;
    char _isPaused;
    char _isStalled;
    double _lastNotedPlaybackPosition;
    BRTimer * _bufferingTimer;
    char _endSent;
    char _startSent;
    int _resolutionState;
    id _mediaOpenCompletionHandler;
    NSNumber * _durationFromNetflixLibrary;
    double _timeLastQOSReportSent;
    double _timeOfLastBookmarkUpdate;
}

+ (char)shouldUseSedonaMediaAsset:(NSSet *)arg0;

- (NSDictionary *)playbackMetadata;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_playbackProgressChanged:(NSNotification *)arg0;
- (void)setBookmarkTimeInMS:(unsigned int)arg0;
- (void)setBookmarkTimeInSeconds:(unsigned int)arg0;
- (ATVSedonaMediaAsset *)initWithFeedElement:(ATVFeedElement *)arg0;
- (void)_playerWillStop:(id)arg0;
- (void)resolveMediaURL:(id /* block */)arg0;
- (void)_streamSwitched:(id)arg0;
- (void)_stallDuringPlayback:(id)arg0;
- (void)_playerEnd:(double)arg0 reason:(NSString *)arg1;
- (void)_finalizeNetflixPlaybackByUnregisteringProtocol:(char)arg0;
- (void)_playerError:(NSError *)arg0;
- (void)_playerAssetWillChange:(NSDictionary *)arg0;
- (void)_timeSkipped:(id)arg0;
- (void)_vendorOutOfDateSoftware:(id)arg0;
- (void)_mediaOpenFinished:(id)arg0;
- (void)_reportQualityOfService:(NSObject *)arg0;
- (void)_playerStart:(double)arg0;
- (void)_updateLastNotedPlaybackPositionToEnd;
- (void)_playerAssetDidChange:(NSDictionary *)arg0;
- (void)_playerFinalStateChanged:(NSNotification *)arg0;
- (void)dealloc;
- (ATVSedonaMediaAsset *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;

@end
