/* Runtime dump - AVCaptureAudioDataOutput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioDataOutput_FigRecorder : AVCaptureOutput_FigRecorder
{
    AVCaptureAudioDataOutputInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) <AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder> * sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;

+ (void)initialize;

- (char)isTheOnlyDataOutput;
- (NSArray *)supportedAssetWriterOutputFileTypes;
- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (void)setSampleBufferDelegate:(<AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder> *)arg0 queue:(NSObject *)arg1;
- (<AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder> *)sampleBufferDelegate;
- (NSObject<OS_dispatch_queue> *)sampleBufferCallbackQueue;
- (NSObject *)recommendedAudioSettingsForAssetWriterWithOutputFileType:(NSString *)arg0;
- (NSArray *)connectionMediaTypes;
- (void)handleEnabledChangedForConnection:(NSURLConnection *)arg0;
- (void)didStopForSession:(NSObject *)arg0 error:(NSError *)arg1;
- (void)didStartForSession:(NSObject *)arg0;
- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;
- (void)dealloc;
- (AVCaptureAudioDataOutput_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (void)setSession:(NSObject *)arg0;

@end
