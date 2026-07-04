/* Runtime dump - UITableViewWrapperView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewWrapperView : UIScrollView
{
    NSMutableArray * _stuckToBackViews;
}

@property (readonly, nonatomic) NSArray * stuckToBackViews;

- (UITableViewWrapperView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setBounds:(struct CGRect)arg0;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)willRemoveSubview:(_UIVisualEffectSubview *)arg0;
- (char)_forwardsToParentScroller;
- (void)handleSwipeBeginning:(id)arg0;
- (void)_stickViewToBack:(id)arg0;
- (void)_unstickView:(NSObject *)arg0;
- (NSArray *)stuckToBackViews;

@end
