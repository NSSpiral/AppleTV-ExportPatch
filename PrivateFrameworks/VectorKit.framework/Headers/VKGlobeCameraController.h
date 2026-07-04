/* Runtime dump - VKGlobeCameraController
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeCameraController : VKScreenCameraController <VKInteractiveCameraController>
{
    struct GlobeView * _globeView;
    struct CameraManager _cameraManager;
    double _currentDoublePanPitch;
    char _isPitching;
    char _isRotating;
    char _wasPitched;
    char _couldEnter3DMode;
}

@property (nonatomic) struct GlobeView * globeView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? centerCoordinate;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) double presentationYaw;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) GEOMapRegion * mapRegion;
@property (readonly, nonatomic) GEOMapRegion * mapRegionOfInterest;

- (void)dealloc;
- (VKGlobeCameraController *)init;
- (void).cxx_construct;
- (int)tileSize;
- (void).cxx_destruct;
- (double)pitch;
- (double)yaw;
- (char)currentZoomLevelAllowsRotation;
- (void)setGesturing:(char)arg0;
- (void)startTrackingAnnotation:(NSObject *)arg0 trackHeading:(char)arg1 animated:(char)arg2;
- (char)canEnter3DMode;
- (char)isPitched;
- (double)presentationYaw;
- (double)altitude;
- (GEOMapRegion *)mapRegion;
- (GEOMapRegion *)mapRegionOfInterest;
- (void)setCenterCoordinate:(struct ?)arg0 animated:(char)arg1;
- (struct ?)centerCoordinate;
- (void)setCenterCoordinate:(struct ?)arg0 altitude:(double)arg1 yaw:(double)arg2 pitch:(double)arg3 duration:(double)arg4 timingCurve:(id)arg5 completion:(/* block */ id)arg6;
- (void)setYaw:(double)arg0 animated:(char)arg1;
- (void)setMapRegion:(GEOMapRegion *)arg0 pitch:(double)arg1 yaw:(double)arg2 animated:(char)arg3 completion:(id /* block */)arg4;
- (void)animateToMapRegion:(GEOMapRegion *)arg0 pitch:(double)arg1 yaw:(double)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (double)durationToAnimateToMapRegion:(GEOMapRegion *)arg0;
- (void)pauseFlyoverTourAnimation;
- (void)resumeFlyoverTourAnimation;
- (void)enter3DMode;
- (void)exit3DMode;
- (char)isFullyPitched;
- (void)panWithOffset:(struct CGPoint)arg0 relativeToScreenPoint:(struct CGPoint)arg1 animated:(char)arg2 duration:(double)arg3 completionHandler:(id /* block */)arg4;
- (VKViewportInfo *)viewportInfo;
- (char)restoreViewportFromInfo:(VKViewportInfo *)arg0;
- (void)zoom:(double)arg0 withFocusPoint:(struct CGPoint)arg1 completionHandler:(id /* block */)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg0;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg0 oldFactor:(double)arg1 newFactor:(double)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg0;
- (void)startPanningAtPoint:(struct CGPoint)arg0 panAtStartPoint:(char)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg0;
- (void)stopPanningAtPoint:(struct CGPoint)arg0;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg0;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg0 newValue:(double)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg0;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg0;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg0 translation:(double)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg0;
- (struct CGPoint)_centerScreenPoint;
- (char)snapMapIfNecessary:(struct VKPoint *)arg0 animated:(struct VKPoint)arg1;
- (struct CGPoint)_scaledScreenPointForPoint:(struct CGPoint)arg0;
- (void)tapZoom:(struct CGPoint)arg0 levels:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)rotate:(double)arg0 atScreenPoint:(struct CGPoint)arg1;
- (void)pitch:(struct CGPoint)arg0 translation:(double)arg1;
- (int)maximumNormalizedZoomLevel;
- (int)minimumNormalizedZoomLevel;
- (void)setGlobeView:(struct GlobeView *)arg0;
- (void)stopGlobeAnimations;
- (void)moveTo:(struct ?)arg0 zoom:(double)arg1 rotation:(double)arg2 tilt:(double)arg3 duration:(double)arg4 timingCurve:(id)arg5 completion:(/* block */ id)arg6;
- (double)zoomForMapRegion:(NSObject *)arg0;
- (void)showSearchResultAnimationAtCoordinate:(struct ?)arg0 withZoom:(double)arg1;
- (void)flyoverTourAnimation:(NSObject *)arg0 animateToStart:(char)arg1 labelChanged:(id)arg2 stateChange:(/* block */ id)arg3;
- (void)stopFlyoverTourAnimation;
- (void)stopSearchResultAnimation;
- (void)updateCameraManager;
- (void)updateGlobeFromCamera;
- (struct Vector2i)_cursorFromScreenPoint:(struct CGPoint)arg0;
- (void)_update3DState;
- (void)tiltTo:(double)arg0 animated:(char)arg1 exaggerate:(char)arg2;
- (void)moveTo:(struct ?)arg0 height:(double)arg1 useHeight:(char)arg2 zoom:(double)arg3 rotation:(double)arg4 tilt:(double)arg5 duration:(double)arg6 timingCurve:(id)arg7 completion:(/* block */ id)arg8;
- (char)isFlyoverTourStarted;
- (void)_rotateAroundTargetWithDuration:(double)arg0 rotations:(double)arg1 completion:(id /* block */)arg2;
- (struct GlobeView *)globeView;
- (void)rotateTo:(double)arg0 animated:(char)arg1;

@end
