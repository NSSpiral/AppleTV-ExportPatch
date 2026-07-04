/* Runtime dump - UITextFieldBorderView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextFieldBorderView : UIView
{
    UIImage * _image;
}

- (UITextFieldBorderView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)layoutSubviews;
- (char)useBlockyMagnificationInClassic;
- (void)_updateViewPropertiesForBackgroundImage;

@end
