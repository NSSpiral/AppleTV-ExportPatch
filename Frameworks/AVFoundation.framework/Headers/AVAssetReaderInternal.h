/* Runtime dump - AVAssetReaderInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderInternal : NSObject
{
    AVWeakReference * weakReference;
    AVWeakKeyValueObserverProxy * KVOProxy;
    AVAsset * asset;
    struct OpaqueFigAssetReader * figAssetReader;
    struct ? timeRange;
    NSMutableArray * outputs;
    int status;
    NSError * error;
    NSObject<OS_dispatch_queue> * statusReadWriteQueue;
}

@end
