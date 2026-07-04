/* Runtime dump - MPStoreAVItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAVItem : MPAVItem
{
    NSString * _aggregateDictionaryItemIdentifier;
    unsigned int _assetQuality;
    char _hasEverPrioritizedPlayerItem;
    char _hasPrioritizedPlayWhileDownloadSession;
    char _hasPrioritizedStreamingDownloadSession;
    char _hasValidAggregateDictionaryItemIdentifier;
    char _hasValidAssetQuality;
    char _isActivePlayerItem;
    MPStorePlayWhileDownloadSession * _playWhileDownloadSession;
    MPStreamingDownloadSession * _streamingDownloadSession;
    unsigned int _options;
    MPMediaPlaybackItemMetadata * _playbackItemMetadata;
}

@property (readonly, nonatomic) unsigned int options;
@property (readonly, nonatomic) MPMediaPlaybackItemMetadata * playbackItemMetadata;

+ (void)applyVolumeNormalizationForQueuedItems:(NSArray *)arg0;
+ (char)isPlaybackItemMetadataValidForAssetCreation:(id)arg0;
+ (char)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg0 returningProtectionType:(unsigned int *)arg1;
+ (unsigned int)_preferredAssetQualityForCurrentNetworkConditions;
+ (NSDictionary *)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(NSDictionary *)arg0 withMinimumAssetQuality:(unsigned int)arg1 assetOptions:(NSDictionary *)arg2 returningProtectionType:(unsigned int *)arg3 assetQuality:(unsigned int *)arg4 usesPurchaseBundle:(char *)arg5;

- (void)setAlternateAudioTrackID:(int)arg0;
- (void)loadAssetAndPlayerItem;
- (NSString *)displayableText;
- (int)_persistedLikedState;
- (void)_handleUpdatedLikedState:(int)arg0 completion:(id /* block */)arg1;
- (long long)storeItemInt64ID;
- (char)useEmbeddedChapterData;
- (NSArray *)chapterTimeMarkers;
- (NSArray *)artworkTimeMarkers;
- (NSArray *)urlTimeMarkers;
- (double)durationFromExternalMetadata;
- (int)customAVEQPreset;
- (char)allowsEQ;
- (void)_currentPlaybackRateDidChange:(float)arg0;
- (char)isSupportedDefaultPlaybackSpeed:(unsigned int)arg0;
- (void)setPlaybackStoppedTime:(double)arg0;
- (void)notePlaybackFinishedByHittingEnd;
- (double)playbackCheckpointCurrentTime;
- (void)setPlaybackCheckpointCurrentTime:(double)arg0;
- (void)setPlaybackFinishedTime:(double)arg0;
- (NSString *)albumArtist;
- (unsigned int)albumTrackNumber;
- (unsigned int)albumTrackCount;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(char)arg0;
- (char)canSeedGenius;
- (unsigned int)discCount;
- (char)isCloudItem;
- (char)isValidPlayerSubstituteForItem:(NSObject *)arg0;
- (char)isAssetURLValid;
- (char)isExplicitTrack;
- (char)hasAlternatesForTypes:(unsigned int)arg0;
- (char)isStreamable;
- (NSString *)mainTitle;
- (void)prepareForRate:(float)arg0 completionHandler:(id /* block */)arg1;
- (char)supportsRewindAndFastForward15Seconds;
- (id)titlesForTime:(double)arg0;
- (NSString *)aggregateDictionaryItemIdentifier;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg0;
- (void)reevaluateType;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (long long)albumStoreID;
- (NSString *)copyrightText;
- (char)isLikedStateEnabled;
- (char)supportsLikedState;
- (long long)storeSubscriptionAdamID;
- (void)setLoudnessInfoVolumeNormalization:(float)arg0;
- (char)allowsAirPlayFromCloud;
- (id)artworkCatalogForPlaybackTime:(double)arg0;
- (char)usesSubscriptionLease;
- (void)_mediaPlaybackItemMetadataDidChangeNotification:(NSNotification *)arg0;
- (void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(NSNotification *)arg0;
- (NSObject *)_newTimeMarkersForChapterType:(int)arg0;
- (MPMediaPlaybackItemMetadata *)playbackItemMetadata;
- (char)_getAssetURL:(id *)arg0 playWhileDownloadSession:(id *)arg1 assetQuality:(unsigned int *)arg2 error:(id *)arg3 usingStoreDownload:(id)arg4 assetOptions:(NSDictionary *)arg5 shouldStartDownload:(char)arg6;
- (void)_prioritizeDownloadSessionsIfNeeded;
- (void)_handlePlaybackFinishedTime:(double)arg0 finishedByHittingEnd:(char)arg1;
- (void)_applyLoudnessInfo;
- (void)_updateBookmarkTimeIfNecessary:(double)arg0 isCheckpoint:(char)arg1;
- (id)_chapterTitleForTime:(double)arg0;
- (void)handlePlaybackFinishedTime:(double)arg0 finishedByHittingEnd:(char)arg1;
- (MPStoreAVItem *)initWithPlaybackItemMetadata:(MPMediaPlaybackItemMetadata *)arg0 options:(unsigned int)arg1;
- (char)isStreamingLowQualityAsset;
- (MPStoreDownload *)storeDownload;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)type;
- (unsigned int)options;
- (void).cxx_destruct;
- (void)setRating:(float)arg0;
- (unsigned long long)persistentID;
- (NSString *)artist;
- (MIPArtist *)composer;
- (MIPGenre *)genre;
- (unsigned int)discNumber;
- (float)userRating;
- (MPMediaItem *)mediaItem;
- (struct NSObject *)album;
- (char)allowsExternalPlayback;

@end
