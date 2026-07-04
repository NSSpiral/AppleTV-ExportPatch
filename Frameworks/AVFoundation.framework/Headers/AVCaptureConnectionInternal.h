/* Runtime dump - AVCaptureConnectionInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureConnectionInternal : NSObject
{
    NSMutableArray * inputPorts;
    AVCaptureDevice * sourceDevice;
    AVWeakReference * outputWeakReference;
    AVWeakReference * videoPreviewLayerWeakReference;
    char hasActiveObservers;
    char active;
    char enabled;
    int changeSeed;
    AVCaptureInputPort * audioInputPort;
    NSMutableArray * audioChannels;
    NSArray * audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort * videoInputPort;
    AVCaptureInputPort * metadataInputPort;
    AVCaptureInputPort * metadataItemInputPort;
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
    int preferredVideoStabilizationMode;
    char videoStabilizationEnabled;
    int activeVideoStabilizationMode;
    char hasVideoMinFrameDurationObserver;
}

@end
