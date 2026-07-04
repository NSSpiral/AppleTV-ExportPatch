/* Runtime dump - AVCaptureVideoDataOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutput : AVCaptureOutput
{
    AVCaptureVideoDataOutputInternal * _internal;
}

@property (readonly, nonatomic) <AVCaptureVideoDataOutputSampleBufferDelegate> * sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary * videoSettings;
@property (readonly, nonatomic) NSArray * availableVideoCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray * availableVideoCodecTypes;
@property (nonatomic) struct ? minFrameDuration;
@property (nonatomic) char alwaysDiscardsLateVideoFrames;

+ (NSArray *)supportedVideoSettingsKeys;
+ (AVCaptureVideoDataOutput *)alloc;
+ (void)initialize;

- (NSArray *)supportedAssetWriterOutputFileTypes;
- (void)setSampleBufferDelegate:(<AVCaptureVideoDataOutputSampleBufferDelegate> *)arg0 queue:(NSObject *)arg1;
- (<AVCaptureVideoDataOutputSampleBufferDelegate> *)sampleBufferDelegate;
- (NSObject<OS_dispatch_queue> *)sampleBufferCallbackQueue;
- (NSArray *)connectionMediaTypes;
- (struct ?)minFrameDuration;
- (char)appliesMirroringWithPhysicalFlipForConnection:(NSURLConnection *)arg0;
- (char)appliesOrientationWithPhysicalRotationForConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)addConnection:(NSURLConnection *)arg0 error:(id *)arg1;
- (NSDictionary *)videoSettings;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg0;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg0;
- (void)_handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (char)alwaysDiscardsLateVideoFrames;
- (char)usesPreviewSizedBuffers;
- (void)setVideoSettings:(NSDictionary *)arg0;
- (char)hasRequiredOutputFormatForConnection:(NSURLConnection *)arg0;
- (struct CGSize)outputSizeForSourceFormat:(NSString *)arg0;
- (int)requiredOutputFormatForConnection:(NSURLConnection *)arg0;
- (NSString *)outputScalingModeForSourceFormat:(NSString *)arg0;
- (NSDictionary *)vettedVideoSettingsForSettingsDictionary:(NSDictionary *)arg0;
- (NSArray *)availableVideoCVPixelFormatTypes;
- (NSArray *)availableVideoCodecTypes;
- (void)_setMinFrameDuration:(struct ?)arg0;
- (NSObject *)recommendedVideoSettingsForAssetWriterWithOutputFileType:(NSString *)arg0;
- (void)setMinFrameDuration:(struct ?)arg0;
- (void)setAlwaysDiscardsLateVideoFrames:(char)arg0;
- (int)outputFormat;
- (void)dealloc;
- (AVCaptureVideoDataOutput *)init;

@end
