/* Runtime dump - UIScrollViewPinchGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer
{
    UIScrollView * _scrollView;
    SEL _scrollViewAction;
    id _hasParentScrollView;
}

@property (nonatomic) UIScrollView * scrollView;

- (void)setDelegate:(<UIGestureRecognizerDelegate> *)arg0;
- (UIScrollViewPinchGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (float)_hysteresis;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setScrollView:(UIScrollView *)arg0;
- (void)removeTarget:(NSObject *)arg0 action:(SEL)arg1;
- (UIScrollView *)scrollView;

@end
