/* Runtime dump - UISwappableImageView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwappableImageView : UIImageView
{
    id _value;
    id _alternate;
    float _scale;
    char _showAlternate;
    char _flipped;
    char _updateImage;
    char _bezel;
    int _bezelStyle;
    int _currentAnimation;
    UIToolbar * _buttonBar;
    int _buttonTag;
    _UISwappableImageViewAnimationProxy * _proxy;
    int _barButtonItemStyle;
    char _didDisableWindowAutorotation;
    id _didFinishTarget;
    SEL _didFinishSelector;
}

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)_willMoveToWindow:(NSObject *)arg0;
- (void)updateImageIfNeededWithTintColor:(float)arg0;
- (void)updateImageIfNeeded;
- (void)setBezelStyleForBarStyle:(int)arg0 tintColor:(UIColor *)arg1;
- (void)setBezelStyleForBarStyle:(int)arg0 tintColor:(UIColor *)arg1 iconTintColor:(UIColor *)arg2 iconTintColorDidChange:(char)arg3;
- (UISwappableImageView *)initWithImage:(UIImage *)arg0 alternateImage:(UIImage *)arg1 barStyle:(int)arg2 barButtonItemStyle:(int)arg3 tintColor:(UIColor *)arg4 bezel:(char)arg5;
- (void)showAlternateImage:(char)arg0;
- (void)setFlipped:(char)arg0;
- (void)animateImage:(float)arg0 withButtonBar:(UIToolbar *)arg1 withTag:(int)arg2 target:(NSObject *)arg3 didFinishSelector:(SEL)arg4;

@end
