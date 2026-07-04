/* Runtime dump - UIPinchGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPinchGestureRecognizer : UIGestureRecognizer
{
    float _initialTouchDistance;
    float _initialTouchScale;
    double _lastTouchTime;
    float _velocity;
    float _previousVelocity;
    float _scaleThreshold;
    struct CGAffineTransform _transform;
    struct CGPoint _anchorSceneReferencePoint;
    id _touches;
    float _hysteresis;
    id _transformAnalyzer;
    id _endsOnSingleTouch;
}

@property (nonatomic) float scale;
@property (readonly, nonatomic) float velocity;
@property (nonatomic) float scaleThreshold;
@property (readonly, nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) float hysteresis;

- (void)dealloc;
- (UIPinchGestureRecognizer *)initWithCoder:(NSCoder *)arg0;
- (UIPinchGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (float)_hysteresis;
- (void)_setHysteresis:(float)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (float)scale;
- (struct CGPoint)anchorPoint;
- (void)setScale:(float)arg0;
- (float)velocity;
- (void)_resetGestureRecognizer;
- (char)_endsOnSingleTouch;
- (void)_setEndsOnSingleTouch:(char)arg0;
- (float)scaleThreshold;
- (void)setScaleThreshold:(float)arg0;

@end
