/* Runtime dump - AVCaptureMetadataOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutputInternal : NSObject
{
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSArray * metadataObjectTypes;
    struct CGRect rectOfInterest;
    AVWeakReference * weakReference;
    struct OpaqueFigSimpleMutex * remoteQueueMutex;
    struct remoteQueueReceiverOpaque * remoteReceiverQueue;
    NSObject<OS_dispatch_queue> * objectQueue;
}

- (void)dealloc;
- (AVCaptureMetadataOutputInternal *)init;

@end
