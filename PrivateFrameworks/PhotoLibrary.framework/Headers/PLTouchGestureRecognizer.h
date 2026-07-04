/* Runtime dump - PLTouchGestureRecognizer
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTouchGestureRecognizer : UIGestureRecognizer
{
    UITouch * _touch;
    struct CGPoint _previousLocation;
}

- (struct CGPoint)translationInView:(NSObject *)arg0;
- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (void)setTranslation:(struct CGPoint)arg0 inView:(struct CGSize)arg1;

@end
