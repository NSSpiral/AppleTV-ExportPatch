/* Runtime dump - UIKeyboardCandidateToggleButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateToggleButton : UIButton
{
    NSString * _arrowDirection;
    UIKBThemedView * _themedView;
}

@property (copy, nonatomic) NSString * arrowDirection;
@property (retain, nonatomic) UIKBThemedView * themedView;

+ (NSString *)arrowImageName;

- (UIKeyboardCandidateToggleButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_setRenderConfig:(NSObject *)arg0;
- (void)setThemedView:(UIKBThemedView *)arg0;
- (UIKBThemedView *)themedView;
- (NSString *)arrowDirection;
- (void)setArrowDirection:(NSString *)arg0;
- (void)setArrowColor:(UIColor *)arg0 forState:(unsigned int)arg1;
- (struct CGRect)labelFrameFromFrame:(NSObject *)arg0;
- (void)updateArrow;
- (NSObject *)arrowColorForState:(unsigned int)arg0;

@end
