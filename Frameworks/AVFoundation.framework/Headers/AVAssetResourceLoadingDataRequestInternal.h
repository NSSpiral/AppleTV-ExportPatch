/* Runtime dump - AVAssetResourceLoadingDataRequestInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingDataRequestInternal : NSObject
{
    long long requestedOffset;
    int requestedLength;
    long long currentOffset;
    NSObject<OS_dispatch_queue> * dataResponseQueue;
    char canSupplyIncrementalDataImmediately;
    AVWeakReference * weakReferenceToLoadingRequest;
}

@end
