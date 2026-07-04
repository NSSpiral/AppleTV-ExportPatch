/* Runtime dump - AVAssetTrack
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetTrackInternal * _track;
}

@property (readonly, nonatomic) AVAsset * asset;
@property (readonly, nonatomic) int trackID;

+ (AVAssetTrack *)mediaTypesForMediaCharacteristics;
+ (NSObject *)keyPathsForValuesAffectingTimeRange;

- (float)preferredVolume;
- (int)naturalTimeScale;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (int)statusOfValueForKey:(NSString *)arg0;
- (NSSet *)_initWithAsset:(AVAsset *)arg0 trackID:(int)arg1;
- (NSSet *)_initWithAsset:(AVAsset *)arg0 trackIndex:(long)arg1;
- (char)hasMediaCharacteristics:(id)arg0;
- (struct ?)minFrameDuration;
- (NSSet *)_initWithAsset:(AVAsset *)arg0 trackID:(int)arg1 trackIndex:(long)arg2;
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
- (NSArray *)segments;
- (id)segmentForTrackTime:(struct ?)arg0;
- (struct ?)samplePresentationTimeForTrackTime:(struct ?)arg0;
- (int)alternateGroupID;
- (char)isExcludedFromAutoselectionInTrackGroup;
- (NSObject *)associatedTracksOfType:(NSObject *)arg0;
- (NSObject *)_firstAssociatedTrackWithAssociationType:(unsigned short)arg0;
- (NSDictionary *)_trackReferences;
- (id)_assetTrackInspector;
- (char)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg0 flagsMask:(unsigned int)arg1;
- (NSObject *)_fallbackTrack;
- (NSArray *)_followingTrackAmongTracks:(NSArray *)arg0;
- (NSObject *)_pairedForcedOnlySubtitlesTrack;
- (NSArray *)availableTrackAssociationTypes;
- (char)_hasMultipleDistinctFormatDescriptions;
- (char)_hasScaledEdits;
- (char)_hasEmptyEdits;
- (char)_hasMultipleEdits;
- (char)_firstFormatDescriptionIsLPCM;
- (void)dealloc;
- (int)layer;
- (AVAssetTrack *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)isEnabled;
- (AVAssetTrack *)copyWithZone:(struct _NSZone *)arg0;
- (NSLocale *)locale;
- (AVAsset *)asset;
- (struct CGSize)dimensions;
- (NSString *)languageCode;
- (struct CGSize)naturalSize;
- (NSArray *)formatDescriptions;
- (struct ?)timeRange;
- (char)hasProtectedContent;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (NSDictionary *)metadata;
- (struct CGAffineTransform)preferredTransform;
- (float)nominalFrameRate;
- (NSArray *)commonMetadata;
- (char)isPlayable;
- (NSString *)mediaType;
- (char)hasMediaCharacteristic:(id)arg0;
- (int)trackID;
- (NSString *)extendedLanguageTag;
- (void)finalize;
- (long long)totalSampleDataLength;

@end
