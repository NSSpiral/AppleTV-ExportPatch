/* Runtime dump - AVAssetDownloadSessionInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetDownloadSessionInternal : NSObject
{
    AVWeakReference * weakReference;
    struct OpaqueFigPlayer * player;
    struct OpaqueFigPlaybackItem * playbackItem;
    struct OpaqueFigAsset * asset;
    NSObject<OS_dispatch_queue> * readWriteQueue;
    int status;
    NSError * error;
    int priority;
    NSURL * URL;
    NSURL * destinationURL;
    unsigned long long downloadToken;
    NSNumber * cachePrimingDownloadTokenNum;
}

@end
