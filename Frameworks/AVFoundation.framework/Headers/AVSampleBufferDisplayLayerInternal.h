/* Runtime dump - AVSampleBufferDisplayLayerInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSampleBufferDisplayLayerInternal : NSObject
{
    CALayer * contentLayer;
    struct OpaqueFigVideoQueue * videoQueue;
    char outputObscured;
    int status;
    NSError * error;
    NSString * videoGravity;
    struct CGSize presentationSize;
    struct CGRect bounds;
    char isRequestingMediaData;
    AVMediaDataRequester * mediaDataRequester;
    char aboveHighWaterLevel;
    NSObject<OS_dispatch_queue> * serialQueue;
    AVWeakReference * weakReferenceToSelf;
    AVWeakReference * weakReferenceToSynchronizer;
    char addedToSynchronizer;
    char controlTimebaseSetByUserIsInUse;
    struct OpaqueCMTimebase * controlTimebaseSetByUser;
    struct OpaqueCMTimebase * readOnlyVideoQueueTimebase;
    struct OpaqueCMTimebase * readOnlyRenderingTimebase;
}

@end
