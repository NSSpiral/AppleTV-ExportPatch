/* Runtime dump - UIScrollViewPanGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer
{
    UIScrollView * _scrollView;
    SEL _scrollViewAction;
    struct CGPoint _reconsideredLockingLocation;
    id _lastLockingAxis;
    id _lockingAxis;
    id _hasChildScrollView;
    id _hasParentScrollView;
    id _caughtDeceleratingScrollView;
    id _directionalLockEnabled;
    id _transfersTrackingFromParentScrollView;
}

@property (nonatomic) UIScrollView * scrollView;
@property (nonatomic) char directionalLockEnabled;
@property (readonly, nonatomic) char caughtDeceleratingScrollView;

- (void)setDelegate:(<UIGestureRecognizerDelegate> *)arg0;
- (struct CGPoint)translationInView:(NSObject *)arg0;
- (struct CGPoint)velocityInView:(NSObject *)arg0;
- (UIScrollViewPanGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (float)_hysteresis;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setDirectionalLockEnabled:(char)arg0;
- (char)isDirectionalLockEnabled;
- (void)setScrollView:(UIScrollView *)arg0;
- (void)removeTarget:(NSObject *)arg0 action:(SEL)arg1;
- (char)_caughtDeceleratingScrollView;
- (void)_scrollViewDidEndZooming;
- (char)canBePreventedByGestureRecognizer:(NSObject *)arg0;
- (UIScrollView *)scrollView;
- (void)_resetGestureRecognizer;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg0;
- (void)_centroidMovedTo:(struct CGPoint)arg0 atTime:(double)arg1;
- (char)_shouldTryToBeginWithEvent:(NSObject *)arg0;
- (char)_canTransferTrackingFromParentPagingScrollView;
- (char)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (char)_shouldContinueToWaitToTransferTrackingFromParentScrollView;

@end
