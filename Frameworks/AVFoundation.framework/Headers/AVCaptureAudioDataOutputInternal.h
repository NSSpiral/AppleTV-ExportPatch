/* Runtime dump - AVCaptureAudioDataOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioDataOutputInternal : NSObject
{
    AVWeakReference * weakReference;
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSObject<OS_dispatch_queue> * bufferQueue;
    struct OpaqueFigSimpleMutex * remoteQueueMutex;
    struct remoteQueueReceiverOpaque * remoteReceiverQueue;
}

- (void)dealloc;
- (AVCaptureAudioDataOutputInternal *)init;

@end
