/* Runtime dump - CAMTimerIndicatorView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimerIndicatorView : UIView
{
    char __performingStyleAnimation;
    int _style;
    UIView * __dimmingView;
    UILabel * __countdownLabel;
    int __startingTicks;
    int __remainingTicks;
    int __labelOrientation;
    CAMAnimationDelegate * __animationDelegate;
    int __deferredLabelOrientation;
}

@property (nonatomic) int style;
@property (readonly, nonatomic) UIView * _dimmingView;
@property (readonly, nonatomic) UILabel * _countdownLabel;
@property (readonly, nonatomic) int _startingTicks;
@property (readonly, nonatomic) int _remainingTicks;
@property (nonatomic) int _labelOrientation;
@property (readonly, nonatomic) CAMAnimationDelegate * _animationDelegate;
@property (nonatomic) char _performingStyleAnimation;
@property (nonatomic) int _deferredLabelOrientation;

- (void)decrement;
- (CAMTimerIndicatorView *)initWithFrame:(struct CGRect)arg0;
- (CAMTimerIndicatorView *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (void)setFont:(UIFont *)arg0;
- (int)style;
- (void)setStyle:(int)arg0;
- (void)setStyle:(int)arg0 animated:(char)arg1;
- (UIFont *)font;
- (UIView *)_dimmingView;
- (void).cxx_destruct;
- (void)cam_rotateWithDeviceOrientation:(int)arg0 animated:(char)arg1;
- (void)stopCountdown;
- (void)resetWithNumberOfTicks:(int)arg0;
- (void)startCountdownWithAnimationDelegate:(CAMAnimationDelegate *)arg0;
- (NSObject *)_fontForStyle:(int)arg0;
- (void)_updateCountdownLabelWithTicksRemaining;
- (void)_commonCAMTimerIndicatorViewInitialization;
- (void)_layoutCountdownLabelForStyle:(int)arg0;
- (struct CGRect)_landscapeSwapBoundsCoordinates:(id)arg0;
- (char)_isPerformingStyleAnimation;
- (void)_layoutCountdownLabelForSmallStyle;
- (void)_layoutCountdownLabelForLargeStyle;
- (void)_updateFromChangeToStyle:(int)arg0 animated:(char)arg1;
- (void)_setPerformingStyleAnimation:(char)arg0;
- (void)_transitionDimmingViewFromStyle:(int)arg0;
- (int)_deferredLabelOrientation;
- (void)_handleOrientationChange:(int)arg0;
- (void)_setDeferredOrientation:(int)arg0;
- (void)_addDecrementAnimationForTick:(int)arg0;
- (void)_addDimmingAnimationForTick:(int)arg0;
- (id)_decrementAnimationForTick:(int)arg0;
- (id)_dimmingAnimationForTick:(int)arg0;
- (NSObject *)_finalDimmingAnimation;
- (void)_setLabelOrientation:(int)arg0;
- (UILabel *)_countdownLabel;
- (int)_startingTicks;
- (int)_remainingTicks;
- (int)_labelOrientation;
- (CAMAnimationDelegate *)_animationDelegate;

@end
