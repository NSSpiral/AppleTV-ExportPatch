/* Runtime dump - UIKeyboardCandidatePageControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidatePageControl : UIView
{
    UIKeyboardCandidateBarSegmentControl * _pageControl;
    char _usingVerticalArrows;
}

+ (UIColor *)imageWithColor:(UIColor *)arg0 size:(struct CGSize)arg1;

- (UIKeyboardCandidatePageControl *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_setRenderConfig:(NSObject *)arg0;
- (void)setUseVerticalArrows:(char)arg0;
- (void)_changePage:(id)arg0;
- (void)updatePageControlWithStatus:(char)arg0 rightControlButtonEnabled:(char)arg1;

@end
