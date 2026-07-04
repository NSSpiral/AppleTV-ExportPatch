/* Runtime dump - UIGobblerGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGobblerGestureRecognizer : UIGestureRecognizer
{
    UIView * _excludedView;
}

- (void)dealloc;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (UIGobblerGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1 excludedView:(UIView *)arg2;
- (char)canBePreventedByGestureRecognizer:(NSObject *)arg0;
- (char)canPreventGestureRecognizer:(NSObject *)arg0;

@end
