/* Runtime dump - ATVRadioNPTrackView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol ATVCarouselViewDataSource;
@protocol ATVCarouselViewUIDelegate;

@class ATVCarouselView, ATVCarouselViewUIOpContext, ATVFadeLayer, ATVRadioNPTransportView, BRControl, BREvent, BRImageControl, BRMediaPlayer, BRPosterControl, BRTextControl, BRWaitSpinnerControl;
@interface ATVRadioNPTrackView : BRControl <ATVCarouselViewDataSource, ATVCarouselViewUIDelegate>
{
    BRMediaPlayer * _player;
    ATVCarouselView * _carousel;
    BRPosterControl * _previousPlayingAssetArtwork;
    BRPosterControl * _currentPlayingAssetArtwork;
    BRPosterControl * _loadingAssetArtworkPoster;
    unsigned int _selectedIndex;
    NSArray * _positions;
    ATVFadeLayer * _leftFade;
    ATVRadioNPTransportView * _transportView;
    BRTextControl * _downInstructionsView;
    BRImageControl * _downArrow;
    BRWaitSpinnerControl * _spinner;
    NSTimer * _spinnerTimer;
    NSArray * _historyItems;
    float _posterWidth;
    float _posterHeight;
    float _posterDisplayedWidth;
    float _posterDisplayedHeight;
    NSDate * _axPressAndHoldTimeStamp;
    struct _NSRange _rangeOfFocusablePositions;
}

@property (weak, nonatomic) BRMediaPlayer * player;
@property (retain, nonatomic) ATVCarouselView * carousel;
@property (retain, nonatomic) BRPosterControl * previousPlayingAssetArtwork;
@property (retain, nonatomic) BRPosterControl * currentPlayingAssetArtwork;
@property (retain, nonatomic) BRPosterControl * loadingAssetArtworkPoster;
@property (nonatomic) unsigned int selectedIndex;
@property (retain, nonatomic) NSArray * positions;
@property (nonatomic) struct _NSRange rangeOfFocusablePositions;
@property (retain, nonatomic) ATVFadeLayer * leftFade;
@property (retain, nonatomic) ATVRadioNPTransportView * transportView;
@property (retain, nonatomic) BRTextControl * downInstructionsView;
@property (retain, nonatomic) BRImageControl * downArrow;
@property (retain, nonatomic) BRWaitSpinnerControl * spinner;
@property (retain, nonatomic) NSTimer * spinnerTimer;
@property (copy, nonatomic) NSArray * historyItems;
@property (nonatomic) float posterWidth;
@property (nonatomic) float posterHeight;
@property (nonatomic) float posterDisplayedWidth;
@property (nonatomic) float posterDisplayedHeight;
@property (retain, nonatomic) NSDate * axPressAndHoldTimeStamp;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_showSpinner;
- (NSTimer *)spinnerTimer;
- (void)windowMaxBoundsChanged;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (void)setHistory:(NSMutableArray *)arg0 withEvent:(unsigned int)arg1;
- (void)setCarousel:(ATVCarouselView *)arg0;
- (void)setLeftFade:(ATVFadeLayer *)arg0;
- (ATVFadeLayer *)leftFade;
- (void)setPosterWidth:(float)arg0;
- (void)setPosterHeight:(float)arg0;
- (float)posterHeight;
- (float)posterWidth;
- (void)setPositions:(NSArray *)arg0;
- (void)setRangeOfFocusablePositions:(struct _NSRange)arg0;
- (NSArray *)positions;
- (struct _NSRange)rangeOfFocusablePositions;
- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;
- (void)setTransportView:(ATVRadioNPTransportView *)arg0;
- (ATVRadioNPTransportView *)transportView;
- (void)setDownArrow:(BRImageControl *)arg0;
- (BRImageControl *)downArrow;
- (void)setDownInstructionsView:(BRTextControl *)arg0;
- (BRTextControl *)downInstructionsView;
- (void)setSpinner:(BRWaitSpinnerControl *)arg0;
- (void)_showSpinner:(char)arg0;
- (void)_updateCachedArtworkAndMetrics;
- (void)setPosterDisplayedWidth:(float)arg0;
- (void)setPosterDisplayedHeight:(float)arg0;
- (void)_setSpinnerTimer:(NSObject *)arg0;
- (void)_updateTrackInfo;
- (void)_updateElapsedTime;
- (void)_updateArtworkAndStorePrevious:(char)arg0;
- (BRPosterControl *)previousPlayingAssetArtwork;
- (void)setPreviousPlayingAssetArtwork:(BRPosterControl *)arg0;
- (char)_canSwitchToHistoryView;
- (void)_displayPressDownInstructions:(char)arg0;
- (float)posterDisplayedHeight;
- (struct CGRect)_artworkPosterFrame;
- (BRPosterControl *)currentPlayingAssetArtwork;
- (void)_loadNextArtwork;
- (float)posterDisplayedWidth;
- (void)setAxPressAndHoldTimeStamp:(NSDate *)arg0;
- (float)accessibilityDelayForScreenContent;
- (NSDate *)axPressAndHoldTimeStamp;
- (void)setCurrentPlayingAssetArtwork:(BRPosterControl *)arg0;
- (void)setLoadingAssetArtworkPoster:(BRPosterControl *)arg0;
- (void)_fadeOutAnimationCompleted:(id)arg0 finished:(char)arg1;
- (char)_isCurrentItemStreaming;
- (void)_playbackProgressChanged:(NSNotification *)arg0;
- (void)_setArtworkURL:(NSURL *)arg0;
- (char)accessibilityOutputsRange;
- (char)accessibilityOutputsRangeForChildren;
- (BRPosterControl *)loadingAssetArtworkPoster;
- (void)_itemDidChange:(NSDictionary *)arg0;
- (void)dealloc;
- (ATVRadioNPTrackView *)init;
- (unsigned int)selectedIndex;
- (void)setSelectedIndex:(unsigned int)arg0;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (BRWaitSpinnerControl *)spinner;
- (NSArray *)historyItems;
- (void)setHistoryItems:(NSArray *)arg0;
- (ATVCarouselView *)carousel;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
