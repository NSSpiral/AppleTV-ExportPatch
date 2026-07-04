/* Runtime dump - FigCameraViewfinderSessionLocal
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCaptureSessionPreviewTapDelegate, FigCameraViewfinderStreamDelegate>
{
    FigCameraViewfinderLocal * _viewfinder;
    FigStateMachine * _stateMachine;
    char _ended;
    FigCaptureSessionProxy * _captureSessionProxy;
    long long _identifier;
    FigCameraViewfinderStream * _previewStream;
    NSObject<OS_dispatch_queue> * _previewStreamQueue;
    char _previewStreamClosed;
    long _previewStreamClosedErrorStatus;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long long)identifier;
- (void)_setupStateMachine;
- (void)openPreviewStreamWithOptions:(NSDictionary *)arg0;
- (void)closePreviewStream;
- (void)captureSessionPreviewTapDidClose:(id)arg0;
- (void)captureSessionPreviewTapDidOpen:(id)arg0;
- (void)captureSession:(struct OpaqueFigCaptureSession *)arg0 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (FigCameraViewfinderSessionLocal *)_initWithOwningViewfinder:(id)arg0 captureSessionProxy:(FigCaptureSessionProxy *)arg1 delegateStorage:(FigDelegateStorage *)arg2;
- (void)_captureSessionDidCapturePhotoWithStatus:(long)arg0 thumbnailData:(NSData *)arg1 timestamp:(struct ?)arg2;
- (void)_captureSessionDidStop;
- (void)_closePreviewStream;
- (void)cameraViewfinderStreamDidOpen:(id)arg0;
- (void)cameraViewfinderStream:(NSObject *)arg0 didCloseWithStatus:(long)arg1;
- (FigCameraViewfinderLocal *)viewfinder;

@end
