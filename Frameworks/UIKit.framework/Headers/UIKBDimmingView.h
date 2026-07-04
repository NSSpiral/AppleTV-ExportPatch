/* Runtime dump - UIKBDimmingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBDimmingView : UIView
{
    UIKBTree * _keyplane;
}

- (UIKBDimmingView *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (void)refreshStyleForKeyplane:(id)arg0;

@end
