/* Runtime dump - AVCaptureSessionInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSessionInternal : NSObject
{
    AVWeakReference * weakReference;
    NSString * sessionPreset;
    AVCaptureDevice * adjustingDeviceActiveFormat;
    int beginConfigRefCount;
    FigCaptureSessionConfiguration * sessionConfig;
    struct OpaqueFigCaptureSession * figCaptureSession;
    char figCaptureSessionRunning;
    NSMutableArray * inputs;
    NSMutableArray * outputs;
    NSHashTable * videoPreviewLayers;
    NSMutableArray * connections;
    NSMutableArray * committedAVCaptureSessionConfigurations;
    AVCaptureSessionConfiguration * liveAVCaptureSessionConfiguration;
    NSError * stopError;
    char running;
    char interrupted;
    char usesApplicationAudioSession;
    char automaticallyConfiguresApplicationAudioSession;
    AVRunLoopCondition * runLoopCondition;
    char waitingForFigCaptureSessionToStart;
    char waitingForFigCaptureSessionToStop;
    char waitingForFigCaptureSessionConfigurationToBecomeLive;
    char waitingForFigCaptureSessionToStopDueToEmptyConfig;
    struct OpaqueCMClock * masterClock;
    char notifiesOnMainThread;
    char adjustingVideoDeviceHDREnabled;
    char sessionPresetChanging;
}

@end
