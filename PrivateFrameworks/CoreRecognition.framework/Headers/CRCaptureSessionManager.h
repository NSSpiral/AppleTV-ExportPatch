/* Runtime dump - CRCaptureSessionManager
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCaptureSessionManager : NSObject
{
    int _cameraPosition;
    NSString * _cameraMode;
    int _whiteBalanceMode;
    int _focusMode;
    int _exposureMode;
    int _torchMode;
    <AVCaptureVideoDataOutputSampleBufferDelegate> * _captureSessionDelegate;
    AVCaptureSession * _captureSession;
    AVCaptureVideoPreviewLayer * _previewLayer;
    struct __CVBuffer * _correctedCreditCardBuffer;
    AVCaptureDeviceInput * _deviceInput;
    AVCaptureVideoDataOutput * _captureVideoDataOutput;
    id _inputPortFormatObserver;
    struct CGSize _cameraResolution;
}

@property (nonatomic) int cameraPosition;
@property (copy, nonatomic) NSString * cameraMode;
@property (nonatomic) int whiteBalanceMode;
@property (nonatomic) int focusMode;
@property (nonatomic) int exposureMode;
@property (nonatomic) int torchMode;
@property (weak, nonatomic) <AVCaptureVideoDataOutputSampleBufferDelegate> * captureSessionDelegate;
@property (retain, nonatomic) AVCaptureSession * captureSession;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer * previewLayer;
@property (nonatomic) struct CGSize cameraResolution;
@property struct __CVBuffer * correctedCreditCardBuffer;
@property (retain, nonatomic) AVCaptureDeviceInput * deviceInput;
@property (retain, nonatomic) AVCaptureVideoDataOutput * captureVideoDataOutput;
@property (retain) id inputPortFormatObserver;

- (int)torchMode;
- (void)setTorchMode:(int)arg0;
- (int)focusMode;
- (void)setFocusMode:(int)arg0;
- (char)isAdjustingFocus;
- (int)exposureMode;
- (void)setExposureMode:(int)arg0;
- (int)whiteBalanceMode;
- (void)setWhiteBalanceMode:(int)arg0;
- (void)startRunning;
- (void)stopRunning;
- (char)isRunning;
- (void).cxx_destruct;
- (void)setCameraMode:(NSString *)arg0;
- (NSString *)cameraMode;
- (AVCaptureVideoPreviewLayer *)previewLayer;
- (void)setPreviewOrientation:(int)arg0;
- (void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg0;
- (void)setCameraPosition:(int)arg0;
- (void)setCaptureSessionDelegate:(<AVCaptureVideoDataOutputSampleBufferDelegate> *)arg0;
- (int)cameraPosition;
- (void)setupCameraSession;
- (void)teardownCameraSession;
- (char)toggleCamera;
- (char)switchToCamera:(int)arg0;
- (struct CGPoint)convertCameraPoint:(struct CGPoint)arg0 toLayer:(CALayer *)arg1;
- (void)refocusOnPoint:(struct CGPoint)arg0;
- (void)resetFocus;
- (struct CGSize)cameraResolution;
- (struct __CVBuffer *)correctedCreditCardBuffer;
- (struct CGRect)convertCameraRect:(NSObject *)arg0 fromLayer:(SEL)arg1;
- (struct CGPoint)convertCameraPoint:(struct CGPoint)arg0 toLayer:(CALayer *)arg1 flipped:(char)arg2;
- (void)refocusOnPoint:(struct CGPoint)arg0 exposure:(char)arg1;
- (NSObject *)inputPortFormatObserver;
- (void)setInputPortFormatObserver:(NSObject *)arg0;
- (AVCaptureSession *)captureSession;
- (void)setCameraResolution:(struct CGSize)arg0;
- (void)changeCameraConfiguration;
- (AVCaptureDeviceInput *)deviceInput;
- (void)cacheCameraResolution:(id)arg0;
- (void)setCaptureSession:(AVCaptureSession *)arg0;
- (NSObject *)captureDeviceWithPosition:(int)arg0;
- (void)setDeviceInput:(AVCaptureDeviceInput *)arg0;
- (void)setCaptureVideoDataOutput:(AVCaptureVideoDataOutput *)arg0;
- (AVCaptureVideoDataOutput *)captureVideoDataOutput;
- (<AVCaptureVideoDataOutputSampleBufferDelegate> *)captureSessionDelegate;
- (char)isRearCamera;
- (unsigned int)cameraCount;
- (id)frontFacingCamera;
- (id)backFacingCamera;
- (void)_refocusOnPoint:(struct CGPoint)arg0 focusMode:(int)arg1 exposure:(char)arg2;
- (struct CGPoint)convertCameraPoint:(struct CGPoint)arg0 fromLayer:(CALayer *)arg1;
- (void)setCorrectedCreditCardBuffer:(struct __CVBuffer *)arg0;

@end
