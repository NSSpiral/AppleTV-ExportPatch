/* Runtime dump - BRMusicNowPlayingLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRWaitSpinnerControl;
@interface BRMusicNowPlayingLayer : BRControl
{
    NSMutableDictionary * _currentTrackInfo;
    int _scheduledAnimationCount;
    float _coverArtRotation;
    float _coverArtSizeX;
    float _coverArtSizeY;
    float _stateIconWidth;
    float _textWidth;
    char _shuffleState;
    char _repeatState;
    char _geniusState;
    char _isRadio;
    struct CGPoint _randomOffset;
    struct CGPoint _coverArtPosition;
    struct CGPoint _trackNameTextPosition;
    struct CGPoint _artistNameTextPosition;
    struct CGPoint _albumNameTextPosition;
    struct CGPoint _trackXofXTextPosition;
    struct CGPoint _transportPosition;
    struct CGPoint _stateIconsLowerRightCornerPosition;
    float _coverArtReflectionAmount;
    struct CGSize _transportSize;
    char _flip;
    BRWaitSpinnerControl * _spinner;
}

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setElapsedTime:(double)arg0 andDuration:(double)arg1;
- (void)removeAllPendingActions;
- (NSMutableDictionary *)currentTrackInfo;
- (void)setCurrentTrackInfo:(NSMutableDictionary *)arg0 WithTransition:(char)arg1 UpdateDisplay:(char)arg2 TransitionDirection:(int)arg3 TransitionDuration:(float)arg4 NewTrackKicksInTime:(double)arg5 OldTrackFadeOutTime:(double)arg6 isRadio:(char)arg7;
- (void)setShuffleState:(char)arg0;
- (void)setSpinnerEnabled:(char)arg0;
- (void)updateCoverArt:(id)arg0;
- (void)performFlipAnimation:(float)arg0;
- (void)_updateRandomOffset;
- (CALayer *)_createFrontLayer;
- (void)_flipFrame:(struct CGRect *)arg0 parentFrame:(struct CGSize)arg1;
- (void)_updateTextStrings;
- (int)frontLayerSide;
- (void)setGeniusState:(char)arg0;
- (void)setRepeatMode:(int)arg0;
- (void)dealloc;
- (BRMusicNowPlayingLayer *)init;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void)setElapsedTime:(double)arg0;
- (void)setPlayerState:(int)arg0;
- (void)_startScrolling;

@end
