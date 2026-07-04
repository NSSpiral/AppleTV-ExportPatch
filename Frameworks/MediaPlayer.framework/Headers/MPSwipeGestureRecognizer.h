/* Runtime dump - MPSwipeGestureRecognizer
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSwipeGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startLocation;
    double _startTime;
    UITouch * _trackingTouch;
    int _swipeDirection;
}

@property (readonly, nonatomic) int swipeDirection;

- (int)swipeDirection;
- (void)dealloc;
- (MPSwipeGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (void).cxx_destruct;

@end
