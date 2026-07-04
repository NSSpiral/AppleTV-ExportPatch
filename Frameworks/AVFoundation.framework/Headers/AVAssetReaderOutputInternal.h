/* Runtime dump - AVAssetReaderOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderOutputInternal : NSObject
{
    AVWeakReference * weakReference;
    char alwaysCopiesSampleData;
    char supportsRandomAccess;
    NSArray * currentTimeRanges;
    AVWeakReference * weakReferenceToAssetReader;
    struct OpaqueFigAssetReader * figAssetReader;
    int extractionID;
    AVRunLoopCondition * sampleBufferAvailabilityCondition;
    char currentConfigurationIsFinal;
    char extractionCompleteForCurrentConfiguration;
    int finished;
}

@end
