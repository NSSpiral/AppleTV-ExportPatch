/* Runtime dump - MPMediaLibraryPlaybackItemMetadata
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    char _hasValidMediaItemValuesForProperties;
    MPMediaItem * _mediaItem;
    NSDictionary * _mediaItemValuesForProperties;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (retain, nonatomic) MPMediaItem * mediaItem;

+ (MPMediaLibraryPlaybackItemMetadata *)_highQualityCachedAssetDestinationDirectory;
+ (MPMediaLibraryPlaybackItemMetadata *)_lowQualityCachedAssetDestinationDirectory;

- (char)isExplicitTrack;
- (NSString *)copyrightText;
- (long long)storeSubscriptionAdamID;
- (NSString *)buyParameters;
- (id)artworkCatalogForPlaybackTime:(double)arg0;
- (int)endpointType;
- (MPMediaLibraryPlaybackItemMetadata *)initWithMediaItem:(MPMediaItem *)arg0;
- (void)_mediaLibraryDidChangeNotification:(NSNotification *)arg0;
- (NSDictionary *)_mediaItemValuesForProperties;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(char)arg0 returningAssetQuality:(unsigned int *)arg1 protectionType:(unsigned int *)arg2 usesPurchaseBundle:(char *)arg3;
- (unsigned long long)storeSagaID;
- (long long)storeAdamID;
- (NSURL *)protectedContentSupportStorageURL;
- (long long)mediaLibraryPersistentID;
- (void)_invalidateMediaItemProperties;
- (void)setCachedLocalPlaybackAssetFilePath:(NSString *)arg0 protectionType:(unsigned int)arg1 assetQuality:(unsigned int)arg2 withCompletionHandler:(id /* block */)arg3;
- (NSString *)albumArtistName;
- (long long)albumStoreAdamID;
- (NSString *)albumTitle;
- (char)allowsInitiatingPlayWhileDownload;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned int *)arg0 protectionType:(unsigned int *)arg1 usesPurchaseBundle:(char *)arg2;
- (NSString *)contentTitle;
- (double)expectedDuration;
- (NSNumber *)iTunesStoreContentID;
- (NSNumber *)iTunesStoreContentDSID;
- (NSURL *)localNetworkContentURL;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)arg0;
- (char)shouldReportPlayEventsToStore;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned int)arg0 assetFlavor:(NSString *)arg1 protectionType:(unsigned int)arg2 pathExtension:(NSString *)arg3;
- (float)volumeNormalization;
- (void)dealloc;
- (MPMediaLibraryPlaybackItemMetadata *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_destruct;
- (NSString *)artistName;
- (void)setMediaItem:(MPMediaItem *)arg0;
- (MPMediaItem *)mediaItem;
- (NSString *)composerName;
- (unsigned long long)storeAccountID;
- (unsigned int)contentType;

@end
