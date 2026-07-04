/* Runtime dump - TPRevealingRingView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPRevealingRingView : UIView
{
    char _revealed;
    TPBackgroundRoundedRectView * _outerView;
    TPPathView * _outerGammaView;
    TPPathView * _innerGammaView;
    TPPathView * _innerView;
    UIColor * _colorOutsideRing;
    UIColor * _colorInsideRing;
    struct UIEdgeInsets _paddingOutsideRing;
    float _defaultRingStrokeWidth;
    float _gammaBoost;
    float _revealAnimationDuration;
    float _unrevealAnimationDuration;
    float _minimumRevealingScale;
    float _cornerRadius;
    int _animationStyle;
    char _isCircularRing;
    char _innerGammaAlpha;
    char _gammaBoostOuterRing;
    char _gammaBoostInside;
    float _alphaInsideRing;
    float _alphaOutsideRing;
}

@property (readonly, nonatomic) struct CGSize ringSize;
@property (readonly, nonatomic) struct UIEdgeInsets paddingOutsideRing;
@property (nonatomic) float cornerRadius;
@property (nonatomic) float defaultRingStrokeWidth;
@property (retain, nonatomic) UIColor * colorOutsideRing;
@property (retain, nonatomic) UIColor * colorInsideRing;
@property (nonatomic) float gammaBoost;
@property (nonatomic) float revealAnimationDuration;
@property (nonatomic) float unrevealAnimationDuration;
@property (nonatomic) float alphaOutsideRing;
@property (nonatomic) float alphaInsideRing;
@property (nonatomic) char gammaBoostOuterRing;
@property (nonatomic) char gammaBoostInside;
@property (nonatomic) int animationStyle;
@property (nonatomic) float minimumRevealingScale;

- (TPRevealingRingView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg0;
- (struct CGSize)intrinsicContentSize;
- (int)animationStyle;
- (void)setAnimationStyle:(int)arg0;
- (void)setGammaBoostInside:(char)arg0;
- (void)setGammaBoostOuterRing:(char)arg0;
- (void)setRingGammaBoost:(float)arg0;
- (struct CGSize)ringSize;
- (struct UIEdgeInsets)paddingOutsideRing;
- (TPRevealingRingView *)initWithFrame:(struct CGRect)arg0 paddingOutsideRing:(struct CGSize)arg1;
- (void)setColorInsideRing:(UIColor *)arg0;
- (void)setColorOutsideRing:(UIColor *)arg0;
- (void)setGammaBoost:(float)arg0;
- (void)setUsesColorDodgeBlending:(char)arg0;
- (void)setUsesColorBurnBlending:(char)arg0;
- (float)alphaInsideRing;
- (void)setAlphaInsideRing:(float)arg0;
- (void)setAlphaOutsideRing:(float)arg0;
- (void)setRevealed:(char)arg0 animated:(char)arg1;
- (UIColor *)colorOutsideRing;
- (NSObject *)_bezierPathForRect:(struct CGRect)arg0 cornerRadius:(struct CGSize)arg1;
- (void)setDefaultRingStrokeWidth:(float)arg0;
- (void)setRevealAnimationDuration:(float)arg0;
- (void)setUnrevealAnimationDuration:(float)arg0;
- (void)setMinimumRevealingScale:(float)arg0;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets)arg0;
- (void)_adjustGammaBoostIfNecessary;
- (void)_evaluateCircularness;
- (void)setRevealed:(char)arg0 animated:(char)arg1 delay:(double)arg2;
- (void)_animateForReveal:(char)arg0 withDuration:(float)arg1 delay:(double)arg2;
- (void)_setOuterGammaScale:(float)arg0;
- (void)_setInnerGammaScale:(float)arg0;
- (void)_setInnerCircleScale:(float)arg0;
- (void)_calculateOuter:(struct CGRect *)arg0 inner:(struct CGSize)arg1 newXOffset:(NSSet *)arg2 newYOffset:(struct CGRect *)arg3 withScale:(struct CGSize)arg4;
- (char)_shouldDrawAsCircle:(struct CGSize)arg0 cornerRadius:(float)arg1;
- (char)_isSquare:(struct CGSize)arg0;
- (float)alphaOutsideRing;
- (float)defaultRingStrokeWidth;
- (float)gammaBoost;
- (float)revealAnimationDuration;
- (float)unrevealAnimationDuration;
- (float)minimumRevealingScale;
- (UIColor *)colorInsideRing;
- (char)gammaBoostOuterRing;
- (char)gammaBoostInside;

@end
