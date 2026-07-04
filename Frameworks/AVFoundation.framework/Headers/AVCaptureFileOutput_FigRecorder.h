/* Runtime dump - AVCaptureFileOutput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutput_FigRecorder : AVCaptureOutput_FigRecorder
{
    AVCaptureFileOutputInternal_FigRecorder * _fileOutputInternal;
}

@property (readonly, nonatomic) NSURL * outputFileURL;
@property (readonly, nonatomic) char recording;
@property (readonly, nonatomic) struct ? recordedDuration;
@property (readonly, nonatomic) long long recordedFileSize;
@property (nonatomic) struct ? maxRecordedDuration;
@property (nonatomic) long long maxRecordedFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

+ (void)initialize;

- (NSURL *)outputFileURL;
- (struct ?)maxRecordedDuration;
- (long long)maxRecordedFileSize;
- (long long)minFreeDiskSpaceLimit;
- (char)pausesRecordingOnInterruption;
- (char)isRecording;
- (void)startRecordingToOutputFileURL:(NSURL *)arg0 recordingDelegate:(NSObject *)arg1;
- (char)isRecordingPaused;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)setPausesRecordingOnInterruption:(char)arg0;
- (struct ?)recordedDuration;
- (long long)recordedFileSize;
- (void)setMaxRecordedDuration:(struct ?)arg0;
- (void)setMaxRecordedFileSize:(long long)arg0;
- (void)setMinFreeDiskSpaceLimit:(long long)arg0;
- (void)dealloc;
- (AVCaptureFileOutput_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (void)stopRecording;

@end
