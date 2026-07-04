/* Runtime dump - UIKeyboardCandidateGridHeader
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridHeader : UIView
{
    UILabel * _inlineTextLabel;
    float _inlineTextRightMargin;
    UIButton * _toggleButton;
    UIKBBackdropView * _backdropView;
}

@property (copy, nonatomic) NSString * inlineText;
@property (nonatomic) float inlineTextRightMargin;
@property (retain, nonatomic) UIButton * toggleButton;
@property (retain, nonatomic) UILabel * inlineTextLabel;
@property (retain, nonatomic) UIKBBackdropView * backdropView;

- (UIKeyboardCandidateGridHeader *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setInlineText:(NSString *)arg0;
- (NSString *)inlineText;
- (void)setBackdropView:(UIKBBackdropView *)arg0;
- (UIKBBackdropView *)backdropView;
- (void)setInlineTextLabel:(UILabel *)arg0;
- (void)setToggleButton:(UIButton *)arg0;
- (UILabel *)inlineTextLabel;
- (float)inlineTextRightMargin;
- (UIButton *)toggleButton;
- (void)setInlineTextRightMargin:(float)arg0;

@end
