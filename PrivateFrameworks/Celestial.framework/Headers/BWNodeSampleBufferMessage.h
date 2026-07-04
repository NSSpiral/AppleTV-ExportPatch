/* Runtime dump - BWNodeSampleBufferMessage
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeSampleBufferMessage : BWNodeMessage
{
    struct opaqueCMSampleBuffer * _sampleBuffer;
    FigCaptureStillImageSettings * _stillImageSettings;
    FigCaptureRecordingSettings * _recordingSettings;
}

@property (readonly) struct opaqueCMSampleBuffer * sampleBuffer;
@property (readonly) FigCaptureStillImageSettings * stillImageSettings;
@property (readonly) FigCaptureRecordingSettings * recordingSettings;

+ (NSObject *)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
+ (NSObject *)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1;
+ (NSObject *)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 recordingSettings:(FigCaptureRecordingSettings *)arg1;

- (void)dealloc;
- (FigCaptureStillImageSettings *)stillImageSettings;
- (struct opaqueCMSampleBuffer *)sampleBuffer;
- (NSObject *)_initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1 recordingSettings:(FigCaptureRecordingSettings *)arg2;
- (FigCaptureRecordingSettings *)recordingSettings;

@end
