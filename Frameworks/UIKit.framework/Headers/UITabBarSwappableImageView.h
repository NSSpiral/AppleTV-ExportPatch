/* Runtime dump - UITabBarSwappableImageView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarSwappableImageView : UIImageView
{
    id _value;
    id _alternate;
    float _scale;
    char _showAlternate;
    char _flipped;
    int _currentAnimation;
    UITabBar * _tabBar;
    int _buttonTag;
}

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)showAlternateImage:(char)arg0;
- (void)setCurrentImage;
- (UITabBarSwappableImageView *)initWithImage:(UIImage *)arg0 alternateImage:(UIImage *)arg1;
- (void)animateImage:(float)arg0 withTabBar:(UITabBar *)arg1 withTag:(int)arg2;
- (void)setAlternateImage:(UIImage *)arg0;

@end
