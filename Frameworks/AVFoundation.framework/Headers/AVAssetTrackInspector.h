/* Runtime dump - AVAssetTrackInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading>
{
    AVWeakReference * _weakReference;
    long _synthesizeMediaCharacteristicsOnce;
    NSArray * _cachedMediaCharacteristics;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) unsigned long figMediaType;
@property (readonly, nonatomic) struct OpaqueFigTrackReader * figTrackReader;
@property (readonly, nonatomic) struct OpaqueFigAssetTrack * figAssetTrack;
@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) NSArray * formatDescriptions;
@property (readonly, nonatomic) char playable;
@property (readonly, nonatomic) char enabled;
@property (readonly, nonatomic) char selfContained;
@property (readonly, nonatomic) long long totalSampleDataLength;
@property (readonly, nonatomic) struct ? timeRange;
@property (readonly, nonatomic) struct ? mediaPresentationTimeRange;
@property (readonly, nonatomic) struct ? mediaDecodeTimeRange;
@property (readonly, nonatomic) char requiresFrameReordering;
@property (readonly, nonatomic) int naturalTimeScale;
@property (readonly, nonatomic) float estimatedDataRate;
@property (readonly, nonatomic) NSString * languageCode;
@property (readonly, nonatomic) NSArray * mediaCharacteristics;
@property (readonly, nonatomic) NSString * extendedLanguageTag;
@property (readonly, nonatomic) NSLocale * locale;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property (readonly, nonatomic) int layer;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) NSDictionary * loudnessInfo;
@property (readonly, nonatomic) float nominalFrameRate;
@property (readonly, nonatomic) struct ? minSampleDuration;
@property (readonly, copy, nonatomic) NSArray * segments;
@property (readonly, nonatomic) NSArray * commonMetadata;
@property (readonly, nonatomic) NSArray * availableMetadataFormats;
@property (readonly, nonatomic) int alternateGroupID;
@property (readonly, nonatomic) char excludedFromAutoselectionInTrackGroup;
@property (readonly, nonatomic) struct CGSize dimensions;
@property (readonly, nonatomic) NSDictionary * trackReferences;
@property (readonly, nonatomic) char hasProtectedContent;
@property (readonly, nonatomic) long playabilityValidationResult;

+ (AVAssetTrackInspector *)assetTrackInspectorWithAsset:(NSSet *)arg0 trackID:(int)arg1 trackIndex:(long)arg2;

- (float)preferredVolume;
- (int)naturalTimeScale;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (AVWeakReference *)_weakReference;
- (NSSet *)_initWithAsset:(NSSet *)arg0 trackID:(int)arg1;
- (NSSet *)_initWithAsset:(NSSet *)arg0 trackIndex:(long)arg1;
- (NSSet *)_initWithAsset:(NSSet *)arg0 trackID:(int)arg1 trackIndex:(long)arg2;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (long)playabilityValidationResult;
- (char)isSelfContained;
- (NSArray *)mediaCharacteristics;
- (struct ?)mediaPresentationTimeRange;
- (struct ?)mediaDecodeTimeRange;
- (char)requiresFrameReordering;
- (float)estimatedDataRate;
- (NSDictionary *)loudnessInfo;
- (struct ?)minSampleDuration;
- (NSArray *)segments;
- (id)segmentForTrackTime:(struct ?)arg0;
- (struct ?)samplePresentationTimeForTrackTime:(struct ?)arg0;
- (int)alternateGroupID;
- (char)isExcludedFromAutoselectionInTrackGroup;
- (NSDictionary *)_trackReferences;
- (unsigned long)_figMediaType;
- (void)dealloc;
- (int)layer;
- (AVAssetTrackInspector *)init;
- (char)isEnabled;
- (AVAssetTrackInspector *)copyWithZone:(struct _NSZone *)arg0;
- (NSLocale *)locale;
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
- (long long)totalSampleDataLength;

@end
