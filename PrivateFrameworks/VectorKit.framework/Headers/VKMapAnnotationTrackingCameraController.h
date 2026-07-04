/* Runtime dump - VKMapAnnotationTrackingCameraController
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController

- (void)_goToAnnotationAnimated:(char)arg0 duration:(double)arg1 isInitial:(char)arg2;
- (void)_rotateToHeadingAnimated:(char)arg0 duration:(double)arg1;
- (double)_minTrackingCameraDistance;
- (double)_zoomLevelForCameraPosition:(struct VKPoint)arg0;

@end
