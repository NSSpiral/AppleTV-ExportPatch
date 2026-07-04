/* Runtime dump - UITextFieldBackgroundView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextFieldBackgroundView : UIView
{
    char _active;
    char _enabled;
    float _progress;
    UIColor * _fillColor;
}

@property (retain, nonatomic) UIColor * fillColor;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (void)setProgress:(float)arg0;
- (void)setFillColor:(UIColor *)arg0;
- (void)setActive:(char)arg0;
- (void)_updateImages;
- (void)setEnabled:(char)arg0 animated:(char)arg1;
- (UITextFieldBackgroundView *)initWithFrame:(struct CGRect)arg0 active:(struct CGSize)arg1;
- (UIColor *)fillColor;

@end
