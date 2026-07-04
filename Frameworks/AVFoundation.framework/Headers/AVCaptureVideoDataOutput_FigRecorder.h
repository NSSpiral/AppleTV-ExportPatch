/* Runtime dump - AVCaptureVideoDataOutput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutput_FigRecorder : AVCaptureOutput_FigRecorder
{
    AVCaptureVideoDataOutputInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) <AVCaptureVideoDataOutputSampleBufferDelegate_FigRecorder> * sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary * videoSettings;
@property (readonly, nonatomic) NSArray * availableVideoCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray * availableVideoCodecTypes;
@property (nonatomic) struct ? minFrameDuration;
@property (nonatomic) char alwaysDiscardsLateVideoFrames;

+ (NSArray *)supportedVideoSettingsKeys;
+ (void)initialize;

- (char)isTheOnlyDataOutput;
- (NSArray *)supportedAssetWriterOutputFileTypes;
- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (void)setSampleBufferDelegate:(<AVCaptureVideoDataOutputSampleBufferDelegate_FigRecorder> *)arg0 queue:(NSObject *)arg1;
- (<AVCaptureVideoDataOutputSampleBufferDelegate_FigRecorder> *)sampleBufferDelegate;
- (NSObject<OS_dispatch_queue> *)sampleBufferCallbackQueue;
- (NSArray *)connectionMediaTypes;
- (void)handleEnabledChangedForConnection:(NSURLConnection *)arg0;
- (void)didStopForSession:(NSObject *)arg0 error:(NSError *)arg1;
- (void)didStartForSession:(NSObject *)arg0;
- (struct ?)minFrameDuration;
- (struct CGSize)outputSizeForCaptureOptions:(NSDictionary *)arg0;
- (char)appliesMirroringWithPhysicalFlipForConnection:(NSURLConnection *)arg0;
- (char)appliesOrientationWithPhysicalRotationForConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)addConnection:(NSURLConnection *)arg0 error:(id *)arg1;
- (NSDictionary *)videoSettings;
- (char)alwaysDiscardsLateVideoFrames;
- (void)setVideoSettings:(NSDictionary *)arg0;
- (NSDictionary *)vettedVideoSettingsForSettingsDictionary:(NSDictionary *)arg0;
- (NSArray *)availableVideoCVPixelFormatTypes;
- (NSArray *)availableVideoCodecTypes;
- (void)_setMinFrameDuration:(struct ?)arg0;
- (NSObject *)recommendedVideoSettingsForAssetWriterWithOutputFileType:(NSString *)arg0;
- (void)setMinFrameDuration:(struct ?)arg0;
- (void)setAlwaysDiscardsLateVideoFrames:(char)arg0;
- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;
- (void)dealloc;
- (AVCaptureVideoDataOutput_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (void)setSession:(NSObject *)arg0;

@end
