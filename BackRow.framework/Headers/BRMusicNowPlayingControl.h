/* Runtime dump - BRMusicNowPlayingControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAudioVisualizerControl.h>

@class BREvent, BRMusicNowPlayingLayer;
@interface BRMusicNowPlayingControl : BRAudioVisualizerControl
{
    BRMusicNowPlayingLayer * _nowPlayingLayer;
    NSString * _lastAssetID;
    NSTimer * _flipTimer;
    NSTimer * _delayedContentUpdateTimer;
    NSTimer * _assetChangeAnimationUnblockTimer;
    NSTimer * _spinnerTimer;
    double _lastEventTime;
    double _flipDuration;
    double _flipInterval;
    double _assetChangeAnimationBlockTime;
    double _assetChangeAnimationDuration;
    double _newTrackKicksInTime;
    double _oldTrackFadeOutTime;
    double _postFlipAssetChangeAnimationBlockTime;
    int _transitionDirection;
    char _assetChangeAnimationBlockFlag;
    char _buffering;
}

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)_mediaCued:(id)arg0;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_periodicMetadataChanged:(NSNotification *)arg0;
- (void)_playbackAssetChanged:(NSNotification *)arg0;
- (char)displayTrackPopup;
- (void)_updateElapsedTime;
- (void)_playbackProgressChanged:(NSNotification *)arg0;
- (void)_spinnerTimerFired:(id)arg0;
- (void)_updateCoverArt:(id)arg0;
- (void)_radioBufferingStart:(id)arg0;
- (void)_radioBufferingEnd:(id)arg0;
- (void)_scheduleFlipTimerWithDelay:(double)arg0;
- (void)_updateTrackWithTransition:(char)arg0;
- (void)_updatePlayerShuffleState;
- (void)_updatePlayerRepeatState;
- (void)_updateSpinner;
- (void)_playlistChanged:(NSNotification *)arg0;
- (void)_shuffleModeChanged:(NSNotification *)arg0;
- (void)_repeatModeChanged:(NSNotification *)arg0;
- (void)_setTransitionDirection:(id)arg0;
- (void)_chapterPictureChanged:(NSNotification *)arg0;
- (void)_updateTrackWithTransition:(char)arg0 updateDisplay:(char)arg1;
- (id)_fetchCoverArt;
- (void)_blockAssetChangeAnimationWithTimeInterval:(double)arg0;
- (void)_flipNow:(id)arg0;
- (void)_unblockAssetChangeAnimation:(NSObject *)arg0;
- (void)dealloc;
- (BRMusicNowPlayingControl *)init;
- (char)isAccessibilityElement;

@end
