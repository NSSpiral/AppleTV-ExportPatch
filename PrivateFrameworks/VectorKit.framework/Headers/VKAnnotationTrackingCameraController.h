/* Runtime dump - VKAnnotationTrackingCameraController
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnnotationTrackingCameraController : VKCameraController
{
    <VKTrackableAnnotation> * _annotation;
    <VKTrackableAnnotationPresentation> * _annotationPresentation;
    VKAnimation * _currentAnimation;
    struct VKPoint _currentAnimationStartPoint;
    struct VKPoint _currentAnimationStartCameraPosition;
    struct VKPoint _currentAnimationEndPoint;
    struct VKPoint _currentAnimationEndCameraPosition;
    double _pendingChangeDuration;
    VKAnimation * _currentHeadingAnimation;
    double _pendingHeadingChangeDuration;
    float _headingAnimationCompletedAngle;
    int _headingAnimationDisplayRate;
    struct VKEdgeInsets _edgeInsets;
    int _zoomStyle;
    struct ? _flags;
}

@property (nonatomic) struct VKEdgeInsets edgeInsets;
@property (nonatomic) int zoomStyle;
@property (nonatomic) int headingAnimationDisplayRate;
@property (readonly, nonatomic) <VKTrackableAnnotation> * annotation;
@property (readonly, nonatomic) char trackingHeading;

- (void)dealloc;
- (VKAnnotationTrackingCameraController *)init;
- (struct VKEdgeInsets)edgeInsets;
- (char)isAnimating;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_construct;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg0;
- (<VKTrackableAnnotation> *)annotation;
- (void)setGesturing:(char)arg0;
- (char)isTrackingHeading;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(NSObject *)arg0 trackHeading:(char)arg1 animated:(char)arg2;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)setZoomStyle:(int)arg0;
- (void)setHeadingAnimationDisplayRate:(int)arg0;
- (void)_goToAnnotationAnimated:(char)arg0 duration:(double)arg1 isInitial:(char)arg2;
- (void)_rotateToHeadingAnimated:(char)arg0 duration:(double)arg1;
- (void)updateFramerate;
- (int)zoomStyle;
- (int)headingAnimationDisplayRate;

@end
