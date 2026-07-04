/* Runtime dump - VKGlobeAnnotationTrackingCameraController
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
{
    struct GlobeView * _globeView;
    struct Anchor * _anchor;
    struct ? _currentAnimationStartCoordinate;
    struct ? _currentAnimationPresentationStartCoordinate;
    struct ? _currentAnimationEndCoordinate;
}

@property (nonatomic) struct GlobeView * globeView;

- (void)dealloc;
- (VKGlobeAnnotationTrackingCameraController *)init;
- (void).cxx_construct;
- (void)_goToAnnotationAnimated:(char)arg0 duration:(double)arg1 isInitial:(char)arg2;
- (void)_rotateToHeadingAnimated:(char)arg0 duration:(double)arg1;
- (void)setGlobeView:(struct GlobeView *)arg0;
- (struct GlobeView *)globeView;

@end
