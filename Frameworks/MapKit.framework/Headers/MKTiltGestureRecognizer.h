/* Runtime dump - MKTiltGestureRecognizer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTiltGestureRecognizer : UIPanGestureRecognizer
{
    UITouch * _touch1;
    UITouch * _touch2;
    struct CGPoint _initialTouch1Point;
    struct CGPoint _initialTouch2Point;
    float _initialDistance;
}

- (float)_distanceFromPoint:(struct CGPoint)arg0 toPoint:(struct CGPoint)arg1;
- (MKTiltGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (NSObject *)_activeTouchesForEvent:(NSObject *)arg0;
- (void).cxx_destruct;

@end
