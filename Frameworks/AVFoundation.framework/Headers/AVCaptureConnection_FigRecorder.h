/* Runtime dump - AVCaptureConnection_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureConnection_FigRecorder : NSObject
{
    AVCaptureConnectionInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) NSArray * inputPorts;
@property (readonly, nonatomic) AVCaptureOutput_FigRecorder * output;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer_FigRecorder * videoPreviewLayer;
@property (nonatomic) char enabled;
@property (readonly, nonatomic) char active;
@property (readonly, nonatomic) NSArray * audioChannels;
@property (readonly, nonatomic) char supportsVideoMirroring;
@property (nonatomic) char videoMirrored;
@property (nonatomic) char automaticallyAdjustsVideoMirroring;
@property (readonly, nonatomic) char supportsVideoOrientation;
@property (nonatomic) int videoOrientation;
@property (readonly, nonatomic) char supportsVideoMinFrameDuration;
@property (nonatomic) struct ? videoMinFrameDuration;
@property (readonly, nonatomic) char supportsVideoMaxFrameDuration;
@property (nonatomic) struct ? videoMaxFrameDuration;
@property (readonly, nonatomic) float videoMaxScaleAndCropFactor;
@property (nonatomic) float videoScaleAndCropFactor;
@property (readonly, nonatomic) char supportsVideoStabilization;
@property (readonly, nonatomic) char videoStabilizationEnabled;
@property (nonatomic) char enablesVideoStabilizationWhenAvailable;

+ (AVCaptureConnection_FigRecorder *)connectionWithInputPorts:(NSArray *)arg0 output:(AVCaptureOutput_FigRecorder *)arg1;
+ (NSObject *)connectionWithInputPort:(NSObject *)arg0 videoPreviewLayer:(AVCaptureVideoPreviewLayer_FigRecorder *)arg1;
+ (void)initialize;

- (NSArray *)inputPorts;
- (char)isVideoMirrored;
- (char)sourcesFromFrontFacingCamera;
- (int)videoOrientation;
- (char)isVideoMinFrameDurationSet;
- (struct ?)_videoMinFrameDuration;
- (char)isVideoMaxFrameDurationSet;
- (struct ?)_videoMaxFrameDuration;
- (float)getAvgAudioLevelForChannel:(NSObject *)arg0;
- (float)getPeakAudioLevelForChannel:(NSObject *)arg0;
- (AVCaptureDevice *)sourceDevice;
- (NSArray *)audioChannels;
- (char)automaticallyAdjustsVideoMirroring;
- (struct ?)videoMinFrameDuration;
- (struct ?)videoMaxFrameDuration;
- (float)videoMaxScaleAndCropFactor;
- (float)videoScaleAndCropFactor;
- (int)videoRetainedBufferCountHint;
- (int)preferredVideoStabilizationMode;
- (int)activeVideoStabilizationMode;
- (AVCaptureConnection_FigRecorder *)initWithInputPorts:(NSArray *)arg0 output:(AVCaptureOutput_FigRecorder *)arg1;
- (AVCaptureConnection_FigRecorder *)initWithInputPort:(NSObject *)arg0 videoPreviewLayer:(AVCaptureVideoPreviewLayer_FigRecorder *)arg1;
- (AVCaptureOutput_FigRecorder *)output;
- (AVCaptureVideoPreviewLayer_FigRecorder *)videoPreviewLayer;
- (void)updateAudioChannelsArray;
- (char)isVideoStabilizationSupported;
- (void)inputPortFormatDescriptionChanged:(NSNotification *)arg0;
- (void)updateAudioLevelsArray;
- (char)isVideoMirroringSupported;
- (char)isVideoOrientationSupported;
- (void)_setVideoMinFrameDuration:(struct ?)arg0;
- (char)isVideoRetainedBufferCountHintSupported;
- (void)setVideoMirrored:(char)arg0;
- (void)_setVideoMirrored:(char)arg0;
- (void)setAutomaticallyAdjustsVideoMirroring:(char)arg0;
- (void)setVideoOrientation:(int)arg0;
- (char)isVideoMinFrameDurationSupported;
- (void)setVideoMinFrameDuration:(struct ?)arg0;
- (char)isVideoMaxFrameDurationSupported;
- (void)setVideoMaxFrameDuration:(struct ?)arg0;
- (void)setVideoScaleAndCropFactor:(float)arg0;
- (char)isVideoStabilizationEnabled;
- (char)enablesVideoStabilizationWhenAvailable;
- (void)setEnablesVideoStabilizationWhenAvailable:(char)arg0;
- (void)setPreferredVideoStabilizationMode:(int)arg0;
- (void)setVideoRetainedBufferCountHint:(int)arg0;
- (void)initCommonStorage;
- (void)dealloc;
- (char)isKindOfClass:(Class)arg0;
- (NSString *)description;
- (char)isActive;
- (void)invalidate;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)setActive:(char)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSURLSession *)session;
- (char)isLive;
- (NSString *)mediaType;

@end
