/* Runtime dump - BWFigCaptureSession
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureSession : NSObject <BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWGraphStatusDelegate, BWSourceNodeErrorDelegate>
{
    struct OpaqueFigCaptureSession * _captureSession;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)fileWriter:(NSObject *)arg0 startedRecordingForSettingsID:(unsigned long long)arg1;
- (void)fileWriter:(NSObject *)arg0 pausedRecordingForSettingsID:(unsigned long long)arg1;
- (void)fileWriter:(NSObject *)arg0 resumedRecordingForSettingsID:(unsigned long long)arg1;
- (void)fileWriter:(NSObject *)arg0 stoppedRecordingForSettingsID:(unsigned long long)arg1 withError:(long)arg2 thumbnailSurface:(struct __IOSurface *)arg3;
- (void)node:(BWNode *)arg0 format:(NSString *)arg1 didBecomeLiveForOutput:(NSObject *)arg2;
- (void)stillImageCoordinator:(NSObject *)arg0 willCapturePhotoForSettingsID:(unsigned long long)arg1 sisActive:(char)arg2;
- (void)stillImageCoordinator:(NSObject *)arg0 didCapturePhotoForSettingsID:(unsigned long long)arg1;
- (void)stillImageCoordinator:(NSObject *)arg0 willPrepareStillImageBracketWithSettings:(NSDictionary *)arg1 clientInitiated:(char)arg2;
- (void)remoteQueueSinkNode:(NSObject *)arg0 queueBecameReady:(struct remoteQueueSenderOpaque *)arg1;
- (void)node:(BWNode *)arg0 format:(NSString *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)node:(BWNode *)arg0 willRenderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(NSObject *)arg2;
- (void)imageQueueSinkNode:(NSObject *)arg0 didEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)graph:(BWGraph *)arg0 didFinishStartingWithError:(long)arg1;
- (void)sourceNode:(NSObject *)arg0 didEncounterError:(long)arg1;
- (BWFigCaptureSession *)initWithFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;

@end
