/* Runtime dump - UIStatusBarHideAnimationParameters
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters
{
    int _hideAnimation;
    float _additionalSlideHeight;
}

@property (nonatomic) int hideAnimation;
@property (nonatomic) float additionalSlideHeight;

- (UIStatusBarHideAnimationParameters *)initWithDefaultParameters;
- (void)setHideAnimation:(int)arg0;
- (int)hideAnimation;
- (char)shouldAnimate;
- (float)additionalSlideHeight;
- (void)setAdditionalSlideHeight:(float)arg0;

@end
