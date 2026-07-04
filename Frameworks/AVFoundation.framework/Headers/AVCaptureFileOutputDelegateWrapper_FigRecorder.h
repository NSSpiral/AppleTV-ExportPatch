/* Runtime dump - AVCaptureFileOutputDelegateWrapper_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutputDelegateWrapper_FigRecorder : NSObject
{
    <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> * _delegate;
    NSURL * _outputFileURL;
    char _receivedDidStartRecording;
    char _receivedDidStopRecording;
    long _didStopRecordingError;
    NSArray * _metadata;
    NSArray * _connections;
}

@property (readonly) NSURL * outputFileURL;
@property (retain) NSArray * metadata;
@property (readonly) <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> * delegate;
@property (readonly) NSArray * connections;
@property char receivedDidStartRecording;
@property char receivedDidStopRecording;
@property long didStopRecordingError;

+ (NSURL *)wrapperWithURL:(NSString *)arg0 delegate:(<AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> *)arg1 connections:(NSArray *)arg2;

- (AVCaptureFileOutputDelegateWrapper_FigRecorder *)initWithURL:(NSString *)arg0 delegate:(<AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> *)arg1 connections:(NSArray *)arg2;
- (NSURL *)outputFileURL;
- (char)receivedDidStartRecording;
- (void)setReceivedDidStartRecording:(char)arg0;
- (char)receivedDidStopRecording;
- (void)setReceivedDidStopRecording:(char)arg0;
- (long)didStopRecordingError;
- (void)setDidStopRecordingError:(long)arg0;
- (NSArray *)connections;
- (void)dealloc;
- (<AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> *)delegate;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;

@end
