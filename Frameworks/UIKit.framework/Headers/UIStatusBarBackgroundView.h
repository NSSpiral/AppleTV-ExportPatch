/* Runtime dump - UIStatusBarBackgroundView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBackgroundView : UIView
{
    UIStatusBarStyleAttributes * _style;
    UIStatusBarCorners * _topCorners;
    UIImageView * _glowView;
    char _glowEnabled;
    char _suppressGlow;
}

- (void)dealloc;
- (UIStatusBarStyleAttributes *)style;
- (UIImage *)_baseImage;
- (char)_topCornersAreRounded;
- (void)_setGlowAnimationEnabled:(char)arg0 waitForNextCycle:(char)arg1;
- (void)_startGlowAnimationWaitForNextCycle:(char)arg0;
- (void)_stopGlowAnimation;
- (char)_styleCanGlow;
- (UIImage *)_glowImage;
- (NSString *)_backgroundImageName;
- (UIStatusBarBackgroundView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1 backgroundColor:(UIColor *)arg2;
- (void)setGlowAnimationEnabled:(char)arg0;
- (void)setSuppressesGlow:(char)arg0;

@end
