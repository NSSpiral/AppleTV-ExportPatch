/* Runtime dump - UIKeyboardBackdropCornerView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardBackdropCornerView : UIView
{
    int _corners;
    float _radius;
}

- (void)drawInRect:(struct CGRect)arg0;
- (UIImage *)_generateBackdropMaskImage;
- (UIKeyboardBackdropCornerView *)initWithFrame:(struct CGRect)arg0 withCorners:(struct CGSize)arg1;
- (void)updateFrame:(struct CGRect)arg0 withCorners:(struct CGSize)arg1;

@end
