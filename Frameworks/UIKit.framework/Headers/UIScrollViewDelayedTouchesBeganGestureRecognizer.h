/* Runtime dump - UIScrollViewDelayedTouchesBeganGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction * _touchDelay;
    struct CGPoint _startSceneReferenceLocation;
}

- (void)dealloc;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)sendDelayedTouches;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)sendTouchesShouldBeginForDelayedTouches:(NSArray *)arg0;
- (void)sendTouchesShouldBeginForTouches:(NSArray *)arg0 withEvent:(Event *)arg1;

@end
