/* Runtime dump - AVCaptureOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureOutputInternal : NSObject
{
    NSObject<OS_dispatch_queue> * figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession * figCaptureSession;
    AVCaptureSession * session;
    NSString * sinkID;
    NSMutableArray * connections;
    int changeSeed;
    struct CGAffineTransform metadataTransform;
    float rollAdjustment;
    char physicallyMirrorsVideo;
}

- (void)dealloc;
- (AVCaptureOutputInternal *)init;

@end
