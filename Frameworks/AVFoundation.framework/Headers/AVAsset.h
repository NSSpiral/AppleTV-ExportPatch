/* Runtime dump - AVAsset
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetInternal * _asset;
}

@property (readonly, nonatomic) struct CGSize naturalSizeWithPreferredTransforms;
@property (nonatomic) char MP_canAffectNetworkPlayability;
@property (readonly) NSArray * availableChapterLocales;
@property (readonly, nonatomic) id propertyListForProxy;
@property (readonly, nonatomic) char isProxy;
@property (readonly, nonatomic) struct ? duration;
@property (readonly, nonatomic) float preferredRate;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property (readonly, nonatomic) struct CGSize naturalSize;

+ (NSString *)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;
+ (NSDictionary *)groupedAudioAVMediaSelectionOptionsFromOptions:(NSDictionary *)arg0;
+ (NSDictionary *)filteredAndSubsortedMainProgramSubtitleOptionsFromOptions:(NSDictionary *)arg0 preferSDH:(char)arg1;
+ (NSDictionary *)sortedAuxSubtitleOptionsFromOptions:(NSDictionary *)arg0;
+ (AVAsset *)assetWithURL:(NSString *)arg0 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(NSArray *)arg2 dynamicBehavior:(char)arg3;
+ (AVAsset *)assetWithURL:(NSString *)arg0;
+ (AVAsset *)assetProxyWithPropertyList:(NSArray *)arg0;

- (struct CGSize)naturalSizeWithPreferredTransforms;
- (id)filteredAudioAVMediaSelectionOptionsIncludingSurround:(char)arg0 includingVideoDescriptions:(char)arg1;
- (id)sortedAudioAVMediaSelectionOptionsIncludingSurround:(char)arg0 includingVideoDescriptions:(char)arg1;
- (id)sortedSubtitleAVMediaSelectionOptionsPreferringSDH:(char)arg0;
- (char)MP_canAffectNetworkPlayability;
- (void)MP_setCanAffectNetworkPlayability:(char)arg0;
- (void)mpLoadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (struct OpaqueFigAsset *)_figAsset;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 keysForCollectionKeys:(NSArray *)arg1 completionHandler:(id /* block */)arg2;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (float)preferredRate;
- (float)preferredVolume;
- (float)preferredSoundCheckVolumeNormalization;
- (int)naturalTimeScale;
- (char)providesPreciseDurationAndTiming;
- (NSArray *)alternateTrackGroups;
- (id)trackGroups;
- (NSObject *)_firstTrackGroupWithMediaType:(NSObject *)arg0;
- (NSArray *)mediaSelectionGroups;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (id)tracksWithMediaCharacteristics:(NSArray *)arg0;
- (void)_serverHasDied;
- (char)isExportable;
- (char)isComposable;
- (char)canContainMovieFragments;
- (char)containsMovieFragments;
- (AVWeakReference *)_weakReference;
- (NSString *)_comparisonToken;
- (int)statusOfValueForKey:(NSString *)arg0;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (NSURL *)_absoluteURL;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (unsigned int)referenceRestrictions;
- (NSObject *)audioAlternatesTrackGroup;
- (NSObject *)subtitleAlternatesTrackGroup;
- (NSDictionary *)availableMediaCharacteristicsWithMediaSelectionOptions;
- (NSArray *)mediaSelectionGroupForPropertyList:(NSArray *)arg0 mediaSelectionOption:(id *)arg1;
- (NSDictionary *)_ID3Metadata;
- (void)_tracksDidChange;
- (NSObject *)compatibleTrackForCompositionTrack:(NSObject *)arg0;
- (char)_hasResourceLoaderDelegate;
- (void)_loadChapterInfo;
- (NSObject *)_chapterDataTypeForMediaSubType:(long)arg0;
- (unsigned int)_addChapterMetadataItem:(NSObject *)arg0 timeRange:(struct ?)arg1 toChapters:(struct ?)arg2 fromIndex:(int)arg3;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg0 titleLocale:(NSObject *)arg1 containingItemsWithCommonKeys:(NSArray *)arg2;
- (NSArray *)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg0;
- (int)unusedTrackID;
- (NSArray *)_chapterTracks;
- (char)_containsAtLeastOnePlayableAudioTrack;
- (char)_containsAtLeastOnePlayableVideoTrack;
- (NSURL *)_exportURL;
- (NSDictionary *)trackReferences;
- (NSObject *)trackWithTrackID:(int)arg0;
- (char)_isStreaming;
- (void)dealloc;
- (AVAsset *)init;
- (char)isEqual:(NSObject *)arg0;
- (char)isProxy;
- (unsigned int)hash;
- (struct ?)duration;
- (AVAsset *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (struct CGSize)naturalSize;
- (NSDate *)creationDate;
- (NSString *)lyrics;
- (char)hasProtectedContent;
- (NSArray *)availableChapterLocales;
- (NSLocale *)chapterMetadataGroupsWithTitleLocale:(NSObject *)arg0 containingItemsWithCommonKeys:(NSArray *)arg1;
- (char)isReadable;
- (char)isCompatibleWithSavedPhotosAlbum;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (NSDictionary *)metadata;
- (NSObject *)tracksWithMediaType:(NSObject *)arg0;
- (struct CGAffineTransform)preferredTransform;
- (NSArray *)commonMetadata;
- (char)isPlayable;
- (NSObject *)propertyListForProxy;
- (NSArray *)tracks;
- (void)cancelLoading;
- (id)tracksWithMediaCharacteristic:(id)arg0;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg0;

@end
