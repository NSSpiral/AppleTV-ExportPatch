/* Runtime dump - AVCaptureVideoPreviewLayerInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayerInternal : NSObject
{
    NSString * sinkID;
    AVCaptureSession * session;
    AVCaptureConnection * connection;
    struct OpaqueFigCaptureSession * figCaptureSession;
    CALayer * sublayer;
    struct CGSize sensorSize;
    NSString * sensorToPreviewVTScalingMode;
    struct CGSize previewSize;
    float previewRotationDegrees;
    NSString * gravity;
    char disableActions;
    AVWeakReference * weakReference;
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
