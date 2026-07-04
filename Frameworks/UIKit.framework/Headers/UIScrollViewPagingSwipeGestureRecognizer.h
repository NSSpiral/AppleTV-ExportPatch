/* Runtime dump - UIScrollViewPagingSwipeGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction * _swipeFailureDelay;
    struct CGPoint _startLocation;
    struct CGPoint _lastLocation;
    double _lastTime;
    int _directionalFailureCount;
}

- (void)dealloc;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)enoughTimeElapsed:(id)arg0;
- (void)_processNewLocation:(struct CGPoint)arg0;

@end
