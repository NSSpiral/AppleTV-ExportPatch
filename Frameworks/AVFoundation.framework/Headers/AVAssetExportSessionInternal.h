/* Runtime dump - AVAssetExportSessionInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetExportSessionInternal : NSObject
{
    AVWeakReference * weakReference;
    NSObject<OS_dispatch_queue> * readWriteQueue;
    struct OpaqueFigRemaker * remaker;
    int status;
    NSError * error;
    float progress;
    AVAsset * asset;
    AVAssetTrack * firstVideoTrack;
    NSString * preset;
    NSString * preset16x9;
    NSURL * outputURL;
    NSString * outputFileType;
    NSString * actualOutputFileType;
    NSString * audioTimePitchAlgorithm;
    AVAudioMix * audioMix;
    AVVideoComposition * videoComposition;
    void * figVideoCompositor;
    AVCustomVideoCompositorSession * customVideoCompositorSession;
    NSArray * metadata;
    AVMetadataItemFilter * metadataItemFilter;
    struct ? timeRange;
    struct ? minVideoFrameDuration;
    char canUseFastFrameRateConversion;
    NSString * videoFrameRateConversionAlgorithm;
    char waitingForFastFrameRateResponse;
    NSObject<OS_dispatch_semaphore> * canUseFastFrameRateConversionSemaphore;
    long long maxFileSize;
    id handler;
    char optimizeForNetworkUse;
    char useMultiPass;
    NSURL * directoryForTemporaryFiles;
    char outputFileCreatedByRemaker;
    long compatibleFileTypesDispatchOncePredicate;
    NSArray * compatibleFileTypes;
    NSObject<OS_dispatch_queue> * remakerNotificationSerializationQueue;
}

@end
