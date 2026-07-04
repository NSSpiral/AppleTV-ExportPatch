/* Runtime dump - UIKeyboardCandidateBarShadow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateBarShadow : UIView
{
    char _inverted;
}

@property (nonatomic) char inverted;

- (UIKeyboardCandidateBarShadow *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (char)isInverted;
- (void)setInverted:(char)arg0;

@end
