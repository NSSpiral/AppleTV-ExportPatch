/* Runtime dump - UICheckeredPatternView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICheckeredPatternView : UIView
{
    UIColor * m_patternColor;
    UIColor * m_checkerColor;
    float m_scale;
}

- (UICheckeredPatternView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)didMoveToWindow;
- (char)_canDrawContent;
- (void)updatePatternColor;
- (UIColor *)checkerColor;
- (void)setCheckerColor:(UIColor *)arg0;

@end
