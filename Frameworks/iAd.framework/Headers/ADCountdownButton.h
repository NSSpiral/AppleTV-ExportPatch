/* Runtime dump - ADCountdownButton
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCountdownButton : UIControl
{
    char _dimmed;
    UIImage * _iconImage;
    UIImage * _dimmedIconImage;
    UIImageView * _backgroundView;
    UIImageView * _iconView;
    UIView * _outlineView;
    CAShapeLayer * _outlineProgressLayer;
}

@property (nonatomic) char dimmed;
@property (retain, nonatomic) UIImage * iconImage;
@property (retain, nonatomic) UIImage * dimmedIconImage;
@property (retain, nonatomic) UIImageView * backgroundView;
@property (retain, nonatomic) UIImageView * iconView;
@property (retain, nonatomic) UIView * outlineView;
@property (retain, nonatomic) CAShapeLayer * outlineProgressLayer;

+ (UIImage *)_closeBoxImage;
+ (UIImage *)_inactiveCloseBoxImage;

- (void)dealloc;
- (ADCountdownButton *)init;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (void)setEnabled:(char)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(char)arg0;
- (void)setBackgroundView:(UIImageView *)arg0;
- (UIImageView *)backgroundView;
- (UIImage *)iconImage;
- (unsigned long long)accessibilityTraits;
- (char)isAccessibilityElement;
- (UIImageView *)iconView;
- (void)setIconView:(UIImageView *)arg0;
- (void)startEnablingButtonWithCountdownDuration:(double)arg0 completionHandler:(id /* block */)arg1;
- (void)setIconImage:(UIImage *)arg0;
- (void)setDimmedIconImage:(UIImage *)arg0;
- (void)setOutlineView:(UIView *)arg0;
- (UIView *)outlineView;
- (void)setOutlineProgressLayer:(CAShapeLayer *)arg0;
- (CAShapeLayer *)outlineProgressLayer;
- (void)setCountdownProgress:(double)arg0;
- (void)setDimmed:(char)arg0 animated:(char)arg1;
- (UIImage *)dimmedIconImage;
- (double)countdownProgress;
- (void)setDimmed:(char)arg0;
- (char)dimmed;

@end
