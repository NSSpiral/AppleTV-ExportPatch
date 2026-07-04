/* Runtime dump - AVCaptureMovieFileOutput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMovieFileOutput_FigRecorder : AVCaptureFileOutput_FigRecorder
{
    AVCaptureMovieFileOutputInternal_FigRecorder * _internal;
}

@property (nonatomic) struct ? movieFragmentInterval;
@property (copy, nonatomic) NSArray * metadata;

+ (NSArray *)recorderCommonMetadataForAVMetadataItemArray:(NSArray *)arg0;
+ (void)initialize;
+ (char)consolidateMovieFragmentsInFile:(NSString *)arg0 error:(id *)arg1;
+ (char)updateMovieMetadataInFile:(NSString *)arg0 withMetadata:(NSArray *)arg1 error:(id *)arg2;

- (long)_stopRecording;
- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (NSArray *)connectionMediaTypes;
- (void)handleEnabledChangedForConnection:(NSURLConnection *)arg0;
- (void)didStopForSession:(NSObject *)arg0 error:(NSError *)arg1;
- (NSURL *)outputFileURL;
- (char)isRecording;
- (void)startRecordingToOutputFileURL:(NSURL *)arg0 recordingDelegate:(NSObject *)arg1;
- (char)isRecordingPaused;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (struct ?)movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct ?)arg0;
- (long)_startRecording:(id)arg0;
- (NSError *)_avErrorUserInfoDictionaryForError:(long)arg0 wrapper:(NSObject *)arg1;
- (NSURLConnection *)outputSettingsForConnection:(NSURLConnection *)arg0;
- (void)setSendsLastVideoPreviewFrame:(char)arg0;
- (char)sendsLastVideoPreviewFrame;
- (char)getRecorderBoolForKey:(NSString *)arg0 withDefault:(char)arg1;
- (void)_handleStartRecordingError:(long)arg0 info:(NSDictionary *)arg1;
- (void)dealloc;
- (AVCaptureMovieFileOutput_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (void)stopRecording;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;

@end
