/* Runtime dump - AVCaptureConnection
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureConnection : NSObject
{
    AVCaptureConnectionInternal * _internal;
}

@property (readonly, nonatomic) NSArray * inputPorts;
@property (readonly, nonatomic) AVCaptureOutput * output;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer * videoPreviewLayer;
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
@property (nonatomic) int preferredVideoStabilizationMode;
@property (readonly, nonatomic) int activeVideoStabilizationMode;
@property (readonly, nonatomic) char supportsVideoStabilization;
@property (readonly, nonatomic) char videoStabilizationEnabled;
@property (nonatomic) char enablesVideoStabilizationWhenAvailable;

+ (AVCaptureConnection *)connectionWithInputPorts:(NSArray *)arg0 output:(AVCaptureOutput *)arg1;
+ (NSObject *)connectionWithInputPort:(NSObject *)arg0 videoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1;
+ (AVCaptureConnection *)alloc;
+ (void)initialize;

- (NSArray *)inputPorts;
- (int)changeSeed;
- (char)isVideoMirrored;
- (char)sourcesFromFrontFacingCamera;
- (int)videoOrientation;
- (char)isVideoMinFrameDurationSet;
- (struct ?)_videoMinFrameDuration;
- (char)isVideoMaxFrameDurationSet;
- (struct ?)_videoMaxFrameDuration;
- (void)bumpChangeSeed;
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
- (AVCaptureConnection *)initWithInputPorts:(NSArray *)arg0 output:(AVCaptureOutput *)arg1;
- (AVCaptureConnection *)initWithInputPort:(NSObject *)arg0 videoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1;
- (AVCaptureOutput *)output;
- (AVCaptureVideoPreviewLayer *)videoPreviewLayer;
- (void)updateAudioChannelsArray;
- (char)isVideoStabilizationSupported;
- (void)setupInternalStorage;
- (void)teardownObservers;
- (void)inputPortFormatDescriptionChanged:(NSNotification *)arg0;
- (void)_updatePropertiesForFormat:(NSString *)arg0;
- (void)updateAudioLevelsArray;
- (char)isVideoMirroringSupported;
- (char)isVideoOrientationSupported;
- (void)_setVideoMinFrameDuration:(struct ?)arg0;
- (int)_resolveActiveVideoStabilizationMode:(int)arg0 format:(NSString *)arg1;
- (void)_updateActiveVideoStabilizationMode:(int)arg0 bumpChangeSeed:(char)arg1;
- (char)isVideoRetainedBufferCountHintSupported;
- (void)_updateMaxScaleAndCropFactorForFormat:(NSString *)arg0;
- (void)setupObservers;
- (void)_setActive:(char)arg0;
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
- (NSSet *)figCaptureConnectionConfigurationForSessionPreset:(NSSet *)arg0;
- (void)dealloc;
- (NSString *)description;
- (char)isActive;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSURLSession *)session;
- (char)isLive;
- (NSString *)mediaType;

@end
