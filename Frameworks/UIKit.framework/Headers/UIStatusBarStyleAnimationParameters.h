/* Runtime dump - UIStatusBarStyleAnimationParameters
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarStyleAnimationParameters : UIStatusBarAnimationParameters
{
    int _styleAnimation;
}

@property (nonatomic) int styleAnimation;

- (UIStatusBarStyleAnimationParameters *)initWithDefaultParameters;
- (void)setStyleAnimation:(int)arg0;
- (char)shouldAnimate;
- (int)styleAnimation;

@end
