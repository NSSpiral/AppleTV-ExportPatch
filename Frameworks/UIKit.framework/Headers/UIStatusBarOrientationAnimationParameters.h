/* Runtime dump - UIStatusBarOrientationAnimationParameters
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters
{
    int _orientationAnimation;
}

@property (nonatomic) int orientationAnimation;

- (UIStatusBarOrientationAnimationParameters *)initWithDefaultParameters;
- (void)setOrientationAnimation:(int)arg0;
- (int)orientationAnimation;
- (char)shouldAnimate;

@end
