/* Runtime dump - MKMapGestureController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate>
{
    MKBasicMapView * _mapView;
    <MKMapGestureControllerDelegate> * _delegate;
    MKVariableDelayTapRecognizer * _doubleTapGestureRecognizer;
    UITapGestureRecognizer * _twoFingerTapGestureRecognizer;
    UILongPressGestureRecognizer * _twoFingerLongPressGestureRecognizer;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    UIPanGestureRecognizer * _panGestureRecognizer;
    double _lastScale;
    _UIDynamicValueAnimation * _pinchDecelerationAnimation;
    _UIDynamicAnimationGroup * _panDecelerationAnimationGroup;
    int _gestureCount;
    char _panWithMomentum;
    _MKUserInteractionGestureRecognizer * _touchGestureRecognizer;
    UIRotationGestureRecognizer * _rotationGestureRecognizer;
    _UIDynamicValueAnimation * _rotationDecelerationAnimation;
    MKTiltGestureRecognizer * _tiltGestureRecognizer;
    _UIDynamicValueAnimation * _tiltDecelerationAnimation;
    char _didStartLongPress;
}

@property (readonly, nonatomic) MKBasicMapView * mapView;
@property (weak, nonatomic) <MKMapGestureControllerDelegate> * delegate;
@property (nonatomic) char zoomEnabled;
@property (nonatomic) char scrollEnabled;
@property (nonatomic) char rotationEnabled;
@property (nonatomic) char tiltEnabled;
@property (nonatomic) char panWithMomentum;
@property (readonly, nonatomic) UITapGestureRecognizer * doubleTapGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer * twoFingerTapGestureRecognizer;
@property (readonly, nonatomic) UILongPressGestureRecognizer * twoFingerLongPressGestureRecognizer;
@property (readonly, nonatomic) UIPinchGestureRecognizer * pinchGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer * panGestureRecognizer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MKBasicMapView *)mapView;
- (UITapGestureRecognizer *)doubleTapGestureRecognizer;
- (char)panWithMomentum;
- (void)setPanWithMomentum:(char)arg0;
- (void)stopDynamicAnimations;
- (MKMapGestureController *)initWithMapView:(MKBasicMapView *)arg0 gestureTargetView:(NSObject *)arg1 doubleTapTargetView:(NSObject *)arg2;
- (UITapGestureRecognizer *)twoFingerTapGestureRecognizer;
- (void)stopUserInteractionFromExternalGesture;
- (void)startUserInteractionFromExternalGesture;
- (void)clearGestureRecognizersInFlight;
- (void)setRotationEnabled:(char)arg0;
- (void)setTiltEnabled:(char)arg0;
- (double)variableDelayTapRecognizer:(MKVariableDelayTapRecognizer *)arg0 shouldWaitForNextTapForDuration:(double)arg1 afterTouch:(UITouch *)arg2;
- (void)handleDoubleTap:(id)arg0;
- (void)handleTwoFingerTap:(id)arg0;
- (void)handleTwoFingerLongPress:(id)arg0;
- (void)handleTouch:(id)arg0;
- (void)handleRotation:(id)arg0;
- (void)handleTilt:(id)arg0;
- (void)beginGesturing;
- (void)endGesturing;
- (void)_clearGesture:(NSObject *)arg0;
- (struct CGPoint)_snapPointToDevicePixels:(struct CGPoint)arg0;
- (void)gestureRecognizerTouchesBegan:(_MKUserInteractionGestureRecognizer *)arg0;
- (void)gestureRecognizerTouchesEnded:(_MKUserInteractionGestureRecognizer *)arg0;
- (void)gestureRecognizerTouchesCanceled:(_MKUserInteractionGestureRecognizer *)arg0;
- (MKMapGestureController *)initWithMapView:(MKBasicMapView *)arg0 gestureTargetView:(NSObject *)arg1;
- (char)isRotationEnabled;
- (char)isTiltEnabled;
- (UILongPressGestureRecognizer *)twoFingerLongPressGestureRecognizer;
- (void)dealloc;
- (void)setDelegate:(<MKMapGestureControllerDelegate> *)arg0;
- (<MKMapGestureControllerDelegate> *)delegate;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)gestureRecognizer:(UIGestureRecognizer *)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (char)gestureRecognizer:(UIGestureRecognizer *)arg0 shouldReceiveTouch:(UITouch *)arg1;
- (void)setScrollEnabled:(char)arg0;
- (char)isScrollEnabled;
- (void)handlePan:(id)arg0;
- (void)handlePinch:(id)arg0;
- (void)setZoomEnabled:(char)arg0;
- (char)isZoomEnabled;
- (UIPanGestureRecognizer *)panGestureRecognizer;
- (UIPinchGestureRecognizer *)pinchGestureRecognizer;
- (void).cxx_destruct;

@end
