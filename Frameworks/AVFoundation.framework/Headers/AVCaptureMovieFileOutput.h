/* Runtime dump - AVCaptureMovieFileOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput
{
    AVCaptureMovieFileOutputInternal * _internal;
}

@property (nonatomic) struct ? movieFragmentInterval;
@property (copy, nonatomic) NSArray * metadata;

+ (long long)nextMovieFileSettingsID;
+ (NSArray *)recorderCommonMetadataForAVMetadataItemArray:(NSArray *)arg0;
+ (AVCaptureMovieFileOutput *)alloc;
+ (void)initialize;
+ (char)consolidateMovieFragmentsInFile:(NSString *)arg0 error:(id *)arg1;
+ (char)updateMovieMetadataInFile:(NSString *)arg0 withMetadata:(NSArray *)arg1 error:(id *)arg2;

- (long)_stopRecording;
- (NSArray *)connectionMediaTypes;
- (NSURL *)outputFileURL;
- (char)isRecording;
- (void)startRecordingToOutputFileURL:(NSURL *)arg0 recordingDelegate:(NSObject *)arg1;
- (char)isRecordingPaused;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (struct ?)movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct ?)arg0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)_startRecording:(id)arg0;
- (NSError *)_avErrorUserInfoDictionaryForError:(long)arg0 wrapper:(NSObject *)arg1;
- (void)_removeRecordingDelegateWrapper:(NSObject *)arg0;
- (void)handleDidStopRecordingNotificationForWrapper:(NSObject *)arg0 withPayload:(NSData *)arg1 demoof:(char)arg2 addMetadata:(char)arg3;
- (NSURLConnection *)outputSettingsForConnection:(NSURLConnection *)arg0;
- (void)setSendsLastVideoPreviewFrame:(char)arg0;
- (char)sendsLastVideoPreviewFrame;
- (void)dealloc;
- (AVCaptureMovieFileOutput *)init;
- (void)stopRecording;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;

@end
