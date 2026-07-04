/* Runtime dump - UIKeyboardDicationBackground
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardDicationBackground : UIView
{
    NSArray * _shadows;
    UIKeyboardDicationBackgroundGradientView * _gradient;
}

@property (retain, nonatomic) UIKeyboardDicationBackgroundGradientView * gradient;

- (UIKeyboardDicationBackground *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setGradient:(UIKeyboardDicationBackgroundGradientView *)arg0;
- (UIKeyboardDicationBackgroundGradientView *)gradient;
- (NSArray *)shadows;

@end
