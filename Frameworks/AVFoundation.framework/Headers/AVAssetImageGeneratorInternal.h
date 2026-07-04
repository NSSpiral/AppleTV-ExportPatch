/* Runtime dump - AVAssetImageGeneratorInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetImageGeneratorInternal : NSObject
{
    AVWeakReference * weakReference;
    struct OpaqueFigAssetImageGenerator * generator;
    AVAsset * asset;
    char appliesPreferredTrackTransform;
    struct CGSize maximumSize;
    NSString * apertureMode;
    struct ? requestedTimeToleranceBefore;
    struct ? requestedTimeToleranceAfter;
    NSMutableArray * requests;
    NSObject<OS_dispatch_queue> * requestsQueue;
    int nextRequestID;
    AVVideoComposition * videoComposition;
    AVCustomVideoCompositorSession * customVideoCompositorSession;
    NSObject<OS_dispatch_queue> * imageRequestQueue;
    int cancelledRequestIDThreshold;
}

@end
