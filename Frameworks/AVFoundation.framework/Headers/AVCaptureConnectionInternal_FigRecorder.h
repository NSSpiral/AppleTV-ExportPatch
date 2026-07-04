/* Runtime dump - AVCaptureConnectionInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureConnectionInternal_FigRecorder : NSObject
{
    NSMutableArray * inputPorts;
    AVCaptureOutput_FigRecorder * output;
    AVCaptureVideoPreviewLayer_FigRecorder * videoPreviewLayer;
    char active;
    char enabled;
    int outputChangeSeedOnDisable;
    AVCaptureInputPort_FigRecorder * audioInputPort;
    NSMutableArray * audioChannels;
    NSArray * audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort_FigRecorder * videoInputPort;
    char videoMirroringSupported;
    char automaticallyAdjustsVideoMirroring;
    char videoMirrored;
    char videoOrientationSupported;
    int videoOrientation;
    struct ? videoMinFrameDuration;
    struct ? videoMaxFrameDuration;
    float videoMaxScaleAndCropFactor;
    float videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    char enablesVideoStabilizationWhenAvailable;
    char videoStabilizationEnabled;
    char preferredVideoStabilizationMode;
}

@end
