/* Runtime dump - UIPrinterSetupPINScrollView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupPINScrollView : UIScrollView
{
    UIView * _contentView;
    float _visibleHeight;
}

@property (retain, nonatomic) UIView * contentView;
@property (nonatomic) float visibleHeight;

- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect)arg0 animated:(struct CGSize)arg1;
- (UIView *)contentView;
- (void)setContentView:(UIView *)arg0;
- (char)_scrollsToMakeFirstResponderVisible;
- (UIPrinterSetupPINScrollView *)initWithContentView:(UIView *)arg0;
- (void)keyboardDidChangeFrame:(NSObject *)arg0;
- (float)visibleHeight;
- (void)setVisibleHeight:(float)arg0;

@end
