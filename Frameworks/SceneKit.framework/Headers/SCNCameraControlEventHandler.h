/* Runtime dump - SCNCameraControlEventHandler
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCameraControlEventHandler : SCNEventHandler
{
    id _dReserved;
    SCNNode * _freeViewCameraNode;
    struct CGPoint _initialPoint;
    id _initialMatrix;
    float _initialZoom;
    float _savedZfar;
    float _savedZnear;
    float _originalFovX;
    float _originalFovY;
    float _originalOrthoScale;
    float _zoomFactor;
    id _clickOrigin;
    int _lastGestureFingerCount;
    char _isDraggingWithOneFinger;
    float _roll;
    id _initialMatrixForRoll;
    UIGestureRecognizer * _pressGesture;
    UIGestureRecognizer * _tapGesture;
    UIGestureRecognizer * _pinchGesture;
    UIGestureRecognizer * _panGesture;
    UIGestureRecognizer * _rotateGesture;
    int _stickyAxis;
    struct C3DSphere _viewedObjectSphere;
    id _hasCheckedIfViewingAnObject;
    id _isViewingAnObject;
    id _isViewedObjectSphereComputed;
    id _automaticCameraTarget;
    id _inertia;
    id _alternateMode;
    id _upDirIsSet;
    id _gimbalLockMode;
    id _inertiaRunning;
    int _mode;
    struct SCNVector3 _gimbalLockVector;
    id _upDir;
    struct SCNVector3 _cameraTarget;
    float _friction;
    struct CGPoint _totalDragWithInertia;
    struct CGPoint _inertiaVelocity;
    double _lastSimulationTime;
}

@property char gimbalLockMode;
@property struct SCNVector3 gimbalLockVector;
@property char enableInertia;
@property float friction;
@property char automaticCameraTarget;
@property struct SCNVector3 cameraTarget;
@property int stickyAxis;

- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (void)setEnableInertia:(char)arg0;
- (char)wantsRedraw;
- (void)updateCameraTargetIfNeeded;
- (char)_freeCameraActivated;
- (void)_prepareFreeViewCamera;
- (void)_installFreeViewCameraIfNeeded;
- (struct C3DSphere)viewedObjectSphere;
- (void)_switchToFreeViewCamera;
- (void)zoomBy:(float)arg0 animate:(char)arg1;
- (float)_translationCoef;
- (void)_resetFreeViewCamera;
- (void)_stopInertiaIfNeeded;
- (void)_rotateWithDrag:(struct CGPoint)arg0 mode:(int)arg1 stickyAxis:(int)arg2;
- (void)_onInertiaTimer;
- (char)computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg0 sphere:(struct C3DSphere *)arg1;
- (id)frontVector;
- (struct SCNVector3)cameraTarget;
- (struct SCNVector3)gimbalLockVector;
- (void)_handlePinch:(id)arg0;
- (void)_handlePan:(id)arg0;
- (void)_handlePress:(id)arg0;
- (void)_handleRotation:(id)arg0;
- (void)_handleDoubleTap:(id)arg0;
- (void)beginGesture:(NSObject *)arg0;
- (void)pinchWithGestureRecognizer:(ADTapGestureRecognizer *)arg0;
- (void)panWithGestureRecognizer:(ADTapGestureRecognizer *)arg0;
- (void)rotateWithGestureRecognizer:(ADTapGestureRecognizer *)arg0;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg0;
- (void)_beginTranslateAtLocation:(struct CGPoint)arg0;
- (void)setZoomFactor:(float)arg0;
- (void)endDraggingWithVelocity:(struct CGPoint)arg0;
- (void)_translateTo:(struct CGPoint)arg0;
- (char)enableInertia;
- (char)gimbalLockMode;
- (void)setGimbalLockMode:(char)arg0;
- (void)setGimbalLockVector:(struct SCNVector3)arg0;
- (char)automaticCameraTarget;
- (void)setAutomaticCameraTarget:(char)arg0;
- (void)setCameraTarget:(struct SCNVector3)arg0;
- (int)stickyAxis;
- (void)setStickyAxis:(int)arg0;
- (char)isViewingAnObject;
- (void)rotateOf:(float)arg0;
- (void)zoomBy:(float)arg0;
- (float)zoomFactor;
- (void)translateByX:(float)arg0 Y:(float)arg1 Z:(float)arg2;
- (void)rotateWithVector:(int)arg0 mode:(int)arg1;
- (void)dealloc;
- (SCNCameraControlEventHandler *)init;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(ADTapGestureRecognizer *)arg1;
- (NSMutableArray *)gestureRecognizers;
- (void)setFriction:(float)arg0;
- (float)friction;
- (void)viewWillDraw;

@end
