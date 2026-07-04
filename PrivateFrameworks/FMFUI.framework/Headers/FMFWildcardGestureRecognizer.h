/* Runtime dump - FMFWildcardGestureRecognizer
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFWildcardGestureRecognizer : UIGestureRecognizer
{
    id _touchesBeganCallback;
    id _touchesEndedCallback;
}

@property (copy, nonatomic) id touchesBeganCallback;
@property (copy, nonatomic) id touchesEndedCallback;

- (FMFWildcardGestureRecognizer *)init;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)ignoreTouch:(UIDelayedAction *)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)reset;
- (char)canPreventGestureRecognizer:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)setTouchesBeganCallback:(id /* block */)arg0;
- (void)setTouchesEndedCallback:(id /* block */)arg0;
- (id /* block */)touchesBeganCallback;
- (id /* block */)touchesEndedCallback;

@end
