/* Runtime dump - DiagnosticHUDLayer
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface DiagnosticHUDLayer : CALayer
{
    AVCaptureVideoPreviewLayer * _previewLayer;
    CRColor * _freshPointColor;
    CRColor * _stalePointColor;
    NSMutableArray * _pointLayers;
    CAShapeLayer * _cameraAreaLayer;
    CAShapeLayer * _focusIndicatorLayer;
    CAShapeLayer * _focusPointLayer;
    CAShapeLayer * _frameIndicator;
}

@property (retain) AVCaptureVideoPreviewLayer * previewLayer;
@property (retain) CRColor * freshPointColor;
@property (retain) CRColor * stalePointColor;
@property (retain) NSMutableArray * pointLayers;
@property (retain) CAShapeLayer * cameraAreaLayer;
@property (retain) CAShapeLayer * focusIndicatorLayer;
@property (retain) CAShapeLayer * focusPointLayer;
@property (retain) CAShapeLayer * frameIndicator;

+ (CALayer *)layer;

- (DiagnosticHUDLayer *)init;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (AVCaptureVideoPreviewLayer *)previewLayer;
- (void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg0;
- (void)setVisibleCameraArea:(id)arg0;
- (void)refreshFrameIndicator;
- (void)setBoxPoints:(id)arg0;
- (void)setAdjustingFocus:(char)arg0 pointOfInterestSupported:(char)arg1 focusPoint:(struct CGPoint)arg2;
- (void)setFreshPointColor:(CRColor *)arg0;
- (void)setStalePointColor:(CRColor *)arg0;
- (void)setCameraAreaLayer:(CAShapeLayer *)arg0;
- (CAShapeLayer *)cameraAreaLayer;
- (void)setPointLayers:(NSMutableArray *)arg0;
- (NSMutableArray *)pointLayers;
- (void)setFocusIndicatorLayer:(CAShapeLayer *)arg0;
- (CAShapeLayer *)focusIndicatorLayer;
- (void)setFocusPointLayer:(CAShapeLayer *)arg0;
- (CAShapeLayer *)focusPointLayer;
- (void)setFrameIndicator:(CAShapeLayer *)arg0;
- (CAShapeLayer *)frameIndicator;
- (CRColor *)freshPointColor;
- (CRColor *)stalePointColor;

@end
