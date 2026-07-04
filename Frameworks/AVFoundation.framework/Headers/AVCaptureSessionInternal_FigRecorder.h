/* Runtime dump - AVCaptureSessionInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSessionInternal_FigRecorder : NSObject
{
    AVWeakReference * weakReference;
    NSString * sessionPreset;
    char adjustingDeviceActiveFormat;
    int sessionPresetChangeSeed;
    int resolvedSessionPresetChangeSeed;
    int videoDeviceChangeSeed;
    int resolvedVideoDeviceChangeSeed;
    int beginConfigRefCount;
    NSMutableDictionary * captureOptions;
    NSMutableDictionary * figRecorderOptions;
    AVCaptureFigAudioDevice_FigRecorder * audioDevice;
    AVCaptureFigVideoDevice_FigRecorder * videoDevice;
    struct OpaqueFigRecorder * recorder;
    NSMutableArray * inputs;
    NSMutableArray * outputs;
    NSMutableArray * connections;
    NSMutableArray * liveConnections;
    AVCaptureVideoPreviewLayer_FigRecorder * videoPreviewLayer;
    NSError * stopError;
    char running;
    char interrupted;
    char recording;
    char usesApplicationAudioSession;
    char automaticallyConfiguresApplicationAudioSession;
    AVRunLoopCondition * runLoopCondition;
    char waitingForRecorderDidStartPreviewing;
    char waitingForRecorderDidStartRecording;
    char waitingForRecorderDidStopSource;
    char waitingForRecorderDidStopPreviewing;
    char waitingForRecorderDidStopRecording;
    struct OpaqueCMClock * masterClock;
}

- (void)dealloc;
- (AVCaptureSessionInternal_FigRecorder *)init;

@end
