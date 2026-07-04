/* Runtime dump - VKScreenCameraController
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScreenCameraController : VKCameraController <VKCameraControllerDelegate>
{
    VKAnimation * _zoomAnimation;
    VKAnimation * _pitchAnimation;
    VKAnimation * _rotationAnimation;
    VKAnimation * _regionAnimation;
    VKAnnotationTrackingCameraController * _annotationTrackingCameraController;
    struct VKEdgeInsets _edgeInsets;
    double _beganDoublePanPitch;
    char _isPitchIncreasing;
    double _lastRotation;
    char _rotationLowZoomSnappingEnabled;
    char _shouldRotationRubberband;
    struct CGPoint _panStartScreenPoint;
    struct CGPoint _panLastScreenPoint;
    int _annotationTrackingZoomStyle;
    int _annotationTrackingHeadingAnimationDisplayRate;
    char _staysCenteredDuringPinch;
    char _staysCenteredDuringRotation;
    char _isPitchable;
}

@property (nonatomic) char staysCenteredDuringPinch;
@property (nonatomic) char staysCenteredDuringRotation;
@property (nonatomic) struct VKEdgeInsets edgeInsets;
@property (nonatomic) char isPitchable;
@property (nonatomic) int annotationTrackingZoomStyle;
@property (nonatomic) int annotationTrackingHeadingAnimationDisplayRate;
@property (readonly, nonatomic) char animatingToTrackAnnotation;
@property (readonly, nonatomic) <VKTrackableAnnotation> * trackingAnnotation;
@property (readonly, nonatomic) char trackingHeading;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (VKScreenCameraController *)init;
- (struct VKEdgeInsets)edgeInsets;
- (char)isAnimating;
- (void).cxx_construct;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg0;
- (void)setStaysCenteredDuringPinch:(char)arg0;
- (char)staysCenteredDuringPinch;
- (void)setStaysCenteredDuringRotation:(char)arg0;
- (char)staysCenteredDuringRotation;
- (void)setIsPitchable:(char)arg0;
- (char)isPitchable;
- (int)annotationTrackingZoomStyle;
- (void)setAnnotationTrackingZoomStyle:(int)arg0;
- (int)annotationTrackingHeadingAnimationDisplayRate;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:(int)arg0;
- (<VKTrackableAnnotation> *)trackingAnnotation;
- (char)isTrackingHeading;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(NSObject *)arg0 trackHeading:(char)arg1 animated:(char)arg2;
- (void)runAnimation:(VKAnimation *)arg0;
- (char)isAnimatingToTrackAnnotation;
- (void)stopSnappingAnimations;
- (void)stopRegionAnimation;
- (void)cameraControllerDidChangeCameraState:(VKCameraController *)arg0;
- (void)cameraController:(VKCameraController *)arg0 willChangeRegionAnimated:(char)arg1;
- (void)cameraController:(VKCameraController *)arg0 didChangeRegionAnimated:(char)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(VKCameraController *)arg0;
- (void)cameraController:(VKCameraController *)arg0 didBecomePitched:(char)arg1;
- (void)cameraController:(VKCameraController *)arg0 canEnter3DModeDidChange:(char)arg1;
- (NSObject *)cameraController:(VKCameraController *)arg0 presentationForAnnotation:(NSObject *)arg1;
- (void)cameraController:(VKCameraController *)arg0 canZoomInDidChange:(char)arg1;
- (void)cameraController:(VKCameraController *)arg0 canZoomOutDidChange:(char)arg1;
- (void)cameraController:(VKCameraController *)arg0 requestsDisplayRate:(int)arg1;
- (double)rubberBandOffsetForOffset:(double)arg0 maxOffset:(double)arg1 minOffset:(double)arg2 range:(double)arg3;

@end
