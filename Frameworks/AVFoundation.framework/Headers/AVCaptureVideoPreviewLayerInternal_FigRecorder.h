/* Runtime dump - AVCaptureVideoPreviewLayerInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayerInternal_FigRecorder : NSObject
{
    AVCaptureSession_FigRecorder * session;
    AVCaptureConnection_FigRecorder * connection;
    CALayer * sublayer;
    struct CGSize sensorSize;
    NSString * sensorToPreviewVTScalingMode;
    struct CGSize previewSize;
    float previewRotationDegrees;
    NSString * gravity;
    char disableActions;
    int orientation;
    char automaticallyAdjustsMirroring;
    char mirrored;
    char isPresentationLayer;
    char visible;
    char isPaused;
    char chromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform captureDeviceTransform;
    float rollAdjustment;
}

@end
