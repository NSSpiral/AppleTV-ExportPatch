/* Runtime dump - AVCaptureVideoDataOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutputInternal : NSObject
{
    AVWeakReference * weakReference;
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSDictionary * videoSettings;
    struct ? deprecatedMinFrameDuration;
    char alwaysDiscardsLateVideoFrames;
    NSObject<OS_dispatch_queue> * bufferQueue;
    struct OpaqueFigSimpleMutex * remoteQueueMutex;
    struct remoteQueueReceiverOpaque * remoteReceiverQueue;
}

- (void)dealloc;
- (AVCaptureVideoDataOutputInternal *)init;

@end
