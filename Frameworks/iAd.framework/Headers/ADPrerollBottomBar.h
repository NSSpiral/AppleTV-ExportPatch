/* Runtime dump - ADPrerollBottomBar
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollBottomBar : UIView
{
    <ADPrerollBottomBarDelegate> * _delegate;
    char _layoutForExpandedSize;
    char _isFullscreen;
    char _skipButtonCountingDown;
    ADPrerollButton * _actionButton;
    UILabel * _skipLabel;
    UILabel * _shortSkipLabel;
    ADPrerollButton * _skipButton;
    NSTimer * _skipAccumulationTimer;
    UIImage * _playImage;
    UIImage * _pauseImage;
    ADPrerollButton * _playPauseButton;
    ADVolumeSlider * _volumeSlider;
    double _skipDuration;
    double _lastViewingStartTime;
    double _accumulatedViewingTime;
}

@property (weak, nonatomic) <ADPrerollBottomBarDelegate> * delegate;
@property (nonatomic) char layoutForExpandedSize;
@property (nonatomic) char isFullscreen;
@property (retain, nonatomic) ADPrerollButton * actionButton;
@property (retain, nonatomic) UILabel * skipLabel;
@property (retain, nonatomic) UILabel * shortSkipLabel;
@property (retain, nonatomic) ADPrerollButton * skipButton;
@property (nonatomic) char skipButtonCountingDown;
@property (nonatomic) double skipDuration;
@property (nonatomic) double lastViewingStartTime;
@property (nonatomic) double accumulatedViewingTime;
@property (retain, nonatomic) NSTimer * skipAccumulationTimer;
@property (retain, nonatomic) UIImage * playImage;
@property (retain, nonatomic) UIImage * pauseImage;
@property (retain, nonatomic) ADPrerollButton * playPauseButton;
@property (retain, nonatomic) ADVolumeSlider * volumeSlider;

- (char)isFullscreen;
- (ADVolumeSlider *)volumeSlider;
- (ADPrerollBottomBar *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<ADPrerollBottomBarDelegate> *)arg0;
- (void)layoutSubviews;
- (<ADPrerollBottomBarDelegate> *)delegate;
- (void)displayAsPaused:(char)arg0;
- (void)setIsFullscreen:(char)arg0;
- (void)setLayoutForExpandedSize:(char)arg0;
- (char)layoutForExpandedSize;
- (void)setVolumeSlider:(ADVolumeSlider *)arg0;
- (void)setActionButton:(ADPrerollButton *)arg0;
- (ADPrerollButton *)actionButton;
- (void)_actionButtonTapped:(id)arg0;
- (void)setPlayImage:(UIImage *)arg0;
- (void)setPauseImage:(UIImage *)arg0;
- (void)setPlayPauseButton:(ADPrerollButton *)arg0;
- (ADPrerollButton *)playPauseButton;
- (UIImage *)pauseImage;
- (void)setSkipLabel:(UILabel *)arg0;
- (UILabel *)skipLabel;
- (void)setShortSkipLabel:(UILabel *)arg0;
- (UILabel *)shortSkipLabel;
- (void)setSkipButton:(ADPrerollButton *)arg0;
- (ADPrerollButton *)skipButton;
- (void)_skipButtonTapped:(id)arg0;
- (double)accumulatedViewingTime;
- (double)skipDuration;
- (void)_pauseButtonTapped:(id)arg0;
- (UIImage *)playImage;
- (void)_pauseCountdown;
- (void)_resumeCountdown;
- (char)skipButtonCountingDown;
- (void)setSkipDuration:(double)arg0;
- (void)_updateSkipLabel;
- (void)setSkipButtonCountingDown:(char)arg0;
- (void)setLastViewingStartTime:(double)arg0;
- (void)_accumulateViewingTime;
- (void)setSkipAccumulationTimer:(NSTimer *)arg0;
- (double)lastViewingStartTime;
- (void)setAccumulatedViewingTime:(double)arg0;
- (void)beginCountdownWithDuration:(double)arg0;
- (NSTimer *)skipAccumulationTimer;
- (void)_playButtonTapped:(id)arg0;

@end
