/* Runtime dump - MPTapGestureRecognizer
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTapGestureRecognizer : UIGestureRecognizer
{
    unsigned int _lastTapCount;
    struct CGPoint _tapLocation;
    UITouch * _trackingTouch;
    NSTimer * _tapHandleTimer;
}

@property unsigned int tapCount;

- (void)_delayedHandleTaps:(id)arg0;
- (void)_resetTapTimer;
- (void)_setTapTimerWithDuration:(double)arg0;
- (void)dealloc;
- (MPTapGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setTapCount:(unsigned int)arg0;
- (void)reset;
- (unsigned int)tapCount;
- (void).cxx_destruct;

@end
