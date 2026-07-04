/* Runtime dump - LTTrickPlayPlayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class LTAVPlayer, LTSkipAssetVisualControl, LTTrickPlayAsset;
@interface LTTrickPlayPlayer : NSObject
{
    NSTimer * _playTimer;
    NSTimer * _highFreqProgressTimer;
    double _timeIntervalOfLastHighFreqUpdate;
    int _preferredTimeScale;
    double _forwardPlaybackEndTime;
    double _reversePlaybackEndTime;
    char _didSetLayerContents;
    LTTrickPlayAsset * _asset;
    LTSkipAssetVisualControl * _visuals;
    float _rate;
    double _previousTimeIntervalCheck;
    double _currentTimeInterval;
    NSMutableDictionary * _cachedChapterImageProxies;
    LTAVPlayer * _avPlayer;
}

+ (NSSet *)trickPlayerWithAsset:(LTTrickPlayAsset *)arg0;

- (LTSkipAssetVisualControl *)visuals;
- (void)bufferAheadFromTime:(struct ?)arg0;
- (LTTrickPlayPlayer *)initWithTrickPlayAsset:(NSSet *)arg0;
- (void)_updatePlayer:(id)arg0;
- (void)_highFreqProgressTimerFired:(id)arg0;
- (void)_resetVisuals;
- (void)_postUpdateProgress;
- (void)_checkAtEitherEndOfPlayback;
- (double)_timeAdjustedForInterstitials:(double)arg0;
- (char)_hasChapterImages;
- (void)setReversePlaybackEndTime:(double)arg0;
- (LTAVPlayer *)avPlayer;
- (void)setForwardPlaybackEndTime:(double)arg0;
- (void)setAVPlayer:(AVPlayer *)arg0;
- (void)invalidate;
- (void).cxx_destruct;
- (float)rate;
- (void)setRate:(float)arg0;
- (struct ?)currentTime;
- (void)seekToTime:(struct ?)arg0;

@end
