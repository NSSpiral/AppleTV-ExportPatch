/* Runtime dump - CAMPanoramaView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMPanoramaView : UIView <UIAccelerometerDelegate>
{
    <PLCameraPanoramaViewDelegate> * _delegate;
    float _previewScale;
    char _isCapturing;
    char _isProcessing;
    int _direction;
    float _currentSpeed;
    UIImageView * _previewBackgroundImageView;
    UIView * _previewContainer;
    UIView * _previewMaskingContainer;
    CALayer * _previewLayer;
    UIImageView * _previewGhostImageView;
    CAMPanoramaLabel * _instructionalText;
    UIView * _instructionalTextBackground;
    CAMPanoramaArrowView * _arrowView;
    CAMPanoramaLevelView * _levelView;
    struct CGPoint _arrowViewBeginCenter;
    struct CGRect _initialArrowFrame;
    struct CGRect _currentArrowFrame;
    struct CGRect _initialMaskFrame;
    struct CGRect _currentMaskFrame;
    char _isAnimatingTextIn;
    char _isAnimatingTextOut;
    char _showingFastText;
    char _isAnimatingDirection;
    char _showingMoveText;
    struct CGRect _visiblePreviewRect;
    char _ignorePreviewUpdates;
    CADisplayLink * _displayLink;
    int _frameCounter;
    CMMotionManager * _motionManager;
    NSOperationQueue * _accelerometerQueue;
    float _initialAcceleration;
    float _currentAcceleration;
    int _deviceOrientation;
    int _deferredDeviceOrientation;
}

@property (nonatomic) <PLCameraPanoramaViewDelegate> * delegate;
@property (readonly, nonatomic) CALayer * panoramaPreviewLayer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<PLCameraPanoramaViewDelegate> *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (<PLCameraPanoramaViewDelegate> *)delegate;
- (void).cxx_destruct;
- (void)setDeviceOrientation:(int)arg0;
- (void)updateToContentSize:(NSObject *)arg0;
- (float)_ghostWidth;
- (void)_updateInstructionalText:(NSString *)arg0;
- (void)_updateInstructionalTextBackground;
- (void)setMaskingContainerFrame:(struct CGRect)arg0 direction:(struct CGSize)arg1;
- (void)_createMotionManagerAndDisplayLink;
- (void)_arrowWasTapped:(id)arg0;
- (void)setCaptureDirection:(int)arg0;
- (void)updateUI;
- (void)hideArrowTextAfterDelay;
- (void)showFastMovementText;
- (void)hideFastMovementTextAfterDelay;
- (void)_hideText;
- (void)_cancelDelayedShowMoveText;
- (void)_showMoveUpText;
- (void)_showMoveDownText;
- (void)showMoveUpText;
- (void)showMoveDownText;
- (void)showMoveUpTextAfterDelay;
- (void)showMoveDownTextAfterDelay;
- (void)hideInstructionalText;
- (CAMPanoramaView *)initWithFrame:(struct CGRect)arg0 centerYOffset:(struct CGSize)arg1 panoramaPreviewScale:(float)arg2;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (struct CGRect)visiblePreviewRect;
- (void)showSavingHUD:(char)arg0;
- (void)panoramaWillStart;
- (void)updateWithParameters:(NSDictionary *)arg0;
- (CALayer *)panoramaPreviewLayer;

@end
