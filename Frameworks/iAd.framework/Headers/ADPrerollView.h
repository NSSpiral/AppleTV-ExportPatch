/* Runtime dump - ADPrerollView
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollView : UIView <UIGestureRecognizerDelegate, ADPrerollTopBarDelegate, ADPrerollBottomBarDelegate>
{
    <ADPrerollViewDelegate> * _delegate;
    char _barsVisible;
    char _skipButtonCountingDown;
    ADPrerollTopBar * _topBar;
    ADPrerollBottomBar * _bottomBar;
    UIImageView * _swooshView;
    NSTimer * _passiveWatchingTimer;
    double _accumulatedViewingTime;
}

@property (weak, nonatomic) <ADPrerollViewDelegate> * delegate;
@property (nonatomic) char barsVisible;
@property (retain, nonatomic) ADPrerollTopBar * topBar;
@property (retain, nonatomic) ADPrerollBottomBar * bottomBar;
@property (nonatomic) char skipButtonCountingDown;
@property (retain, nonatomic) UIImageView * swooshView;
@property (retain, nonatomic) NSTimer * passiveWatchingTimer;
@property (nonatomic) double accumulatedViewingTime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)layerClass;

- (ADPrerollView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<ADPrerollViewDelegate> *)arg0;
- (void)layoutSubviews;
- (<ADPrerollViewDelegate> *)delegate;
- (char)gestureRecognizer:(UIGestureRecognizer *)arg0 shouldReceiveTouch:(UITouch *)arg1;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (char)accessibilityPerformEscape;
- (void)fadeToBlackWithCompletion:(id /* block */)arg0;
- (void)attachToAVPlayer:(id)arg0 showiAdBrandingSwoosh:(char)arg1;
- (void)beginCountdown:(double)arg0;
- (void)setElapsedTime:(double)arg0 totalTime:(double)arg1;
- (void)displayAsPaused:(char)arg0;
- (void)topBarScaleToFill:(ADPrerollTopBar *)arg0;
- (void)topBarScaleToFit:(ADPrerollTopBar *)arg0;
- (void)topBarDoneButtonTapped:(ADPrerollTopBar *)arg0;
- (char)_layoutForExpandedSize;
- (double)accumulatedViewingTime;
- (char)skipButtonCountingDown;
- (void)setSkipButtonCountingDown:(char)arg0;
- (void)setAccumulatedViewingTime:(double)arg0;
- (void)bottomBarActionButtonTapped:(ADPrerollBottomBar *)arg0;
- (void)bottomBarSkipButtonTapped:(ADPrerollBottomBar *)arg0;
- (void)bottomBarPauseButtonTapped:(ADPrerollBottomBar *)arg0;
- (void)bottomBarPlayButtonTapped:(ADPrerollBottomBar *)arg0;
- (void)setTopBar:(ADPrerollTopBar *)arg0;
- (ADPrerollTopBar *)topBar;
- (void)setBottomBar:(ADPrerollBottomBar *)arg0;
- (void)setSwooshView:(UIImageView *)arg0;
- (UIImageView *)swooshView;
- (void)_singleTapGestureRecognized:(id)arg0;
- (void)setBarsVisible:(char)arg0;
- (NSTimer *)passiveWatchingTimer;
- (void)_firePassiveWatchingTimer:(NSObject *)arg0;
- (void)setPassiveWatchingTimer:(NSTimer *)arg0;
- (char)barsVisible;
- (void)_restartPassiveWatchingTimer;
- (void)shutdown;
- (ADPrerollBottomBar *)bottomBar;

@end
