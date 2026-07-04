/* Runtime dump - AVFigAssetTrackInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetTrackInspector : AVAssetTrackInspector
{
    struct OpaqueFigAsset * _figAsset;
    struct OpaqueFigFormatReader * _figFormatReader;
    struct OpaqueFigAssetTrack * _figAssetTrack;
    struct OpaqueFigTrackReader * _figTrackReader;
    struct OpaqueFigSimpleMutex * _loadingMutex;
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    NSMutableArray * _loadingBatches;
    AVWeakReference * _weakReferenceToAsset;
}

- (float)preferredVolume;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg0;
- (int)naturalTimeScale;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (NSSet *)_initWithAsset:(NSSet *)arg0 trackID:(int)arg1 trackIndex:(long)arg2;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (long)playabilityValidationResult;
- (char)isSelfContained;
- (struct ?)mediaPresentationTimeRange;
- (struct ?)mediaDecodeTimeRange;
- (char)requiresFrameReordering;
- (float)estimatedDataRate;
- (NSDictionary *)loudnessInfo;
- (struct ?)minSampleDuration;
- (NSArray *)segments;
- (id)segmentForTrackTime:(struct ?)arg0;
- (int)alternateGroupID;
- (char)isExcludedFromAutoselectionInTrackGroup;
- (NSDictionary *)_trackReferences;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg0;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (NSMutableArray *)_loadingBatches;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg0;
- (unsigned long)_figMediaType;
- (void)_addFigNotifications;
- (void)_removeFigNotifications;
- (int)_loadStatusForFigAssetTrackProperty:(NSObject *)arg0 returningError:(int *)arg1;
- (void)dealloc;
- (int)layer;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isEnabled;
- (NSSet *)asset;
- (struct CGSize)dimensions;
- (NSString *)languageCode;
- (struct CGSize)naturalSize;
- (NSArray *)formatDescriptions;
- (struct ?)timeRange;
- (char)hasProtectedContent;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (struct CGAffineTransform)preferredTransform;
- (float)nominalFrameRate;
- (NSArray *)commonMetadata;
- (char)isPlayable;
- (NSString *)mediaType;
- (int)trackID;
- (NSString *)extendedLanguageTag;
- (void)finalize;
- (long long)totalSampleDataLength;

@end
