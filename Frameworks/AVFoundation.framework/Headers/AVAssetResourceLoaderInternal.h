/* Runtime dump - AVAssetResourceLoaderInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoaderInternal : NSObject
{
    AVWeakReference * weakReference;
    AVWeakReference * weakReferenceToAsset;
    NSObject<OS_dispatch_queue> * stateQueue;
    AVWeakReference * weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> * delegateQueue;
    int loadingCancelled;
    NSMutableDictionary * pendingRequests;
    NSObject<OS_dispatch_queue> * contentInformationCachingQueue;
    NSMutableDictionary * contentInformationCache;
}

@end
