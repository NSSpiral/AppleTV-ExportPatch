/* Runtime dump - AVCaptureInputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInputInternal : NSObject
{
    AVCaptureSession * session;
    NSObject<OS_dispatch_queue> * figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession * figCaptureSession;
}

- (void)dealloc;
- (AVCaptureInputInternal *)init;

@end
