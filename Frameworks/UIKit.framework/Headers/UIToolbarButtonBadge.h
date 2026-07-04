/* Runtime dump - UIToolbarButtonBadge
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbarButtonBadge : UIView
{
    UIView * _value;
    UIView * _background;
    UIView * _alternate;
}

- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setValue:(UIView *)arg0;
- (UIToolbarButtonBadge *)initWithValue:(UIView *)arg0 blinks:(char)arg1;
- (void)setBlinks:(char)arg0;

@end
