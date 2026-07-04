/* Runtime dump - AVCaptureAudioDataOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioDataOutput : AVCaptureOutput
{
    AVCaptureAudioDataOutputInternal * _internal;
}

@property (readonly, nonatomic) <AVCaptureAudioDataOutputSampleBufferDelegate> * sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;

+ (AVCaptureAudioDataOutput *)alloc;
+ (void)initialize;

- (NSArray *)supportedAssetWriterOutputFileTypes;
- (void)setSampleBufferDelegate:(<AVCaptureAudioDataOutputSampleBufferDelegate> *)arg0 queue:(NSObject *)arg1;
- (<AVCaptureAudioDataOutputSampleBufferDelegate> *)sampleBufferDelegate;
- (NSObject<OS_dispatch_queue> *)sampleBufferCallbackQueue;
- (NSObject *)recommendedAudioSettingsForAssetWriterWithOutputFileType:(NSString *)arg0;
- (NSArray *)connectionMediaTypes;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg0;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg0;
- (void)_handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (void)dealloc;
- (AVCaptureAudioDataOutput *)init;

@end
