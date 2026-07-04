/* Runtime dump - ATVRelatedPlaybackView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVRelatedPlaybackPlayerGlow, BRBlueGlowSelectionLozengeLayer, BRBlueGlowSelectionLozengeLayerBacking, BRControl, BRCursorControl, BREvent, BRListView, BRScrollControl;
@interface ATVRelatedPlaybackView : BRControl
{
    BRControl * _playerView;
    BRControl * _relatedPlayerView;
    BRListView * _optionsView;
    <ATVRelatedPlaybackViewDelegate> * _delegate;
    int _state;
    ATVRelatedPlaybackPlayerGlow * _playerGlow;
    BRScrollControl * _optionsScrollView;
    BRCursorControl * _cursor;
    BRBlueGlowSelectionLozengeLayer * _optionsViewCursor;
    BRBlueGlowSelectionLozengeLayerBacking * _optionsViewBackingCursor;
    double _transitionAnimationDuration;
}

@property (nonatomic) double transitionAnimationDuration;
@property (retain, nonatomic) BRControl * playerView;
@property (retain, nonatomic) BRControl * relatedPlayerView;
@property (retain, nonatomic) BRListView * optionsView;
@property (readonly, nonatomic) char visible;
@property (readonly, nonatomic) char playerFocused;
@property (weak, nonatomic) <ATVRelatedPlaybackViewDelegate> * delegate;
@property (nonatomic) int state;
@property (retain, nonatomic) ATVRelatedPlaybackPlayerGlow * playerGlow;
@property (retain, nonatomic) BRScrollControl * optionsScrollView;
@property (retain, nonatomic) BRCursorControl * cursor;
@property (retain, nonatomic) BRBlueGlowSelectionLozengeLayer * optionsViewCursor;
@property (retain, nonatomic) BRBlueGlowSelectionLozengeLayerBacking * optionsViewBackingCursor;

- (char)brEventAction:(BREvent *)arg0;
- (void)_focusChanged:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (BRListView *)optionsView;
- (void)setRelatedPlayerView:(BRControl *)arg0;
- (void)setOptionsView:(BRListView *)arg0;
- (BRControl *)relatedPlayerView;
- (void)setPlayerView:(BRControl *)arg0;
- (void)transitionBackWithAnimation:(char)arg0;
- (char)isPlayerFocused;
- (BRScrollControl *)optionsScrollView;
- (void)setOptionsScrollView:(BRScrollControl *)arg0;
- (BRBlueGlowSelectionLozengeLayer *)optionsViewCursor;
- (void)setOptionsViewCursor:(BRBlueGlowSelectionLozengeLayer *)arg0;
- (BRBlueGlowSelectionLozengeLayerBacking *)optionsViewBackingCursor;
- (void)setOptionsViewBackingCursor:(BRBlueGlowSelectionLozengeLayerBacking *)arg0;
- (char)_isVisibleForState:(int)arg0;
- (ATVRelatedPlaybackPlayerGlow *)playerGlow;
- (void)_setPresentationAnimationsTowardsPresentation:(char)arg0;
- (NSObject *)actingOptionsView;
- (double)transitionAnimationDuration;
- (void)setTransitionAnimationDuration:(double)arg0;
- (void)setPlayerGlow:(ATVRelatedPlaybackPlayerGlow *)arg0;
- (BRControl *)playerView;
- (void)dealloc;
- (void)setDelegate:(<ATVRelatedPlaybackViewDelegate> *)arg0;
- (ATVRelatedPlaybackView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<ATVRelatedPlaybackViewDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (char)isVisible;
- (BRCursorControl *)cursor;
- (void)setCursor:(BRCursorControl *)arg0;
- (void).cxx_destruct;

@end
