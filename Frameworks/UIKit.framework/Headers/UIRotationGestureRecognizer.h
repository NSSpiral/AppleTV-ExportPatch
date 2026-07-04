/* Runtime dump - UIRotationGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRotationGestureRecognizer : UIGestureRecognizer
{
    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    int _currentRotationCount;
    double _lastTouchTime;
    float _velocity;
    float _previousVelocity;
    struct CGPoint _anchorSceneReferencePoint;
    id _transformAnalyzer;
    id _touches;
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

@property (nonatomic) float rotation;
@property (readonly, nonatomic) float velocity;

- (void)dealloc;
- (UIRotationGestureRecognizer *)initWithCoder:(NSCoder *)arg0;
- (UIRotationGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (struct CGPoint)anchorPoint;
- (float)velocity;
- (void)setRotation:(float)arg0;
- (float)rotation;
- (void)_resetGestureRecognizer;
- (void)_updateTransformAnalyzerWeights;
- (void)_setPreRecognitionWeight:(float)arg0;
- (float)_preRecognitionWeight;
- (void)_setPostRecognitionWeight:(float)arg0;
- (float)_postRecognitionWeight;

@end
