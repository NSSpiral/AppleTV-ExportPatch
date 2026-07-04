/* Runtime dump - MPDetailSlider
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate>
{
    UILabel * _currentTimeInverseLabel;
    UILabel * _currentTimeLabel;
    MPDetailScrubController * _scrubController;
    char _allowsScrubbing;
    char _autoscrubActive;
    NSTimer * _autoscrubTimer;
    char _canCommit;
    double _currentTime;
    UIView * _downloadingTrackOverlay;
    UIImageView * _glowDetailScrubImageView;
    char _isTracking;
    float _maxTrackWidth;
    struct CGPoint _previousLocationInView;
    int _style;
    UIImageView * _thumbImageView;
    float _trackInset;
    <MPDetailSliderDelegate> * _delegate;
    float _detailScrubbingVerticalRange;
    int _timeLabelStyle;
    float _minTimeLabelWidth;
    double _duration;
    double _availableDuration;
}

@property (weak, nonatomic) <MPDetailSliderDelegate> * delegate;
@property (nonatomic) char allowsScrubbing;
@property (nonatomic) char allowsDetailScrubbing;
@property (nonatomic) float detailScrubbingVerticalRange;
@property (nonatomic) double duration;
@property (nonatomic) double availableDuration;
@property (readonly, nonatomic) char detailScrubbingAvailableForCurrentDuration;
@property (nonatomic) int timeLabelStyle;
@property (nonatomic) float minTimeLabelWidth;
@property (readonly, nonatomic) NSString * localizedScrubSpeedText;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)labelClass;

- (void)setAllowsDetailScrubbing:(char)arg0;
- (char)allowsDetailScrubbing;
- (char)allowsScrubbing;
- (void)setAllowsScrubbing:(char)arg0;
- (NSString *)localizedScrubSpeedText;
- (char)detailScrubbingAvailableForCurrentDuration;
- (void)setAvailableDuration:(double)arg0;
- (void)setTimeLabelStyle:(int)arg0;
- (void)cancelTracking;
- (void)setValue:(float)arg0 duration:(double)arg1;
- (void)_setupControlsForStyle;
- (MPDetailSlider *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1 maxTrackWidth:(float)arg2;
- (NSObject *)timeLabelFontForStyle:(int)arg0;
- (NSObject *)timeLabelTextColorForStyle:(int)arg0;
- (NSString *)_stringForCurrentTime:(double)arg0;
- (NSString *)_stringForInverseCurrentTime:(double)arg0;
- (void)_updateTrackInset;
- (void)_setValueWhileTracking:(float)arg0 duration:(double)arg1;
- (void)_updateForAvailableDuraton;
- (void)_updateTimeDisplayForTime:(double)arg0;
- (void)_commitValue;
- (struct CGRect)thumbHitRect;
- (void)_autoscrubTick:(id)arg0;
- (void)_resetScrubInfo;
- (void)_updateTimeDisplayForTime:(double)arg0 force:(char)arg1;
- (UIColor *)_modernThumbImageWithColor:(UIColor *)arg0 height:(float)arg1 includeShadow:(char)arg2;
- (UIColor *)_colorSliceImageWithColor:(UIColor *)arg0 height:(float)arg1;
- (NSString *)_stringForTime:(double)arg0;
- (void)detailScrubController:(BRController *)arg0 didChangeValue:(float)arg1;
- (void)detailScrubController:(BRController *)arg0 didChangeScrubSpeed:(int)arg1;
- (void)setMinTimeLabelWidth:(float)arg0;
- (float)detailScrubbingVerticalRange;
- (void)setDetailScrubbingVerticalRange:(float)arg0;
- (double)availableDuration;
- (int)timeLabelStyle;
- (float)minTimeLabelWidth;
- (MPDetailSlider *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<MPDetailSliderDelegate> *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg0;
- (<MPDetailSliderDelegate> *)delegate;
- (double)duration;
- (void)setDuration:(double)arg0;
- (char)isTracking;
- (void)tintColorDidChange;
- (MPDetailSlider *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (NSObject *)viewForBaselineLayout;
- (struct CGRect)trackRectForBounds:(id)arg0;
- (struct CGRect)thumbRectForBounds:(id)arg0 trackRect:(SEL)arg1 value:(struct CGRect)arg2;
- (NSObject *)createThumbView;
- (UIImage *)currentThumbImage;
- (void)setValue:(float)arg0 animated:(char)arg1;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (void).cxx_destruct;

@end
