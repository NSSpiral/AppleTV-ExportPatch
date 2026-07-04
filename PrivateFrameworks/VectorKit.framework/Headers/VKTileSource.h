/* Runtime dump - VKTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileSource : NSObject
{
    <VKTileSourceClient> * _client;
    VKTilePool * _tilePool;
    VKTileKeyMap * _pendingLoads;
    VKTileKeyList * _decoding;
    VKTileKeyList * _failedTiles;
    VKStyleManager * _styleManager;
    float _contentScale;
    VKSharedResources * _sharedResources;
    int loadingTiles;
    NSError * _recentError;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSLocale * _locale;
    NSString * _tileLoaderClientIdentifier;
    char _preloadOnly;
    char _requireWiFi;
}

@property (nonatomic) <VKTileSourceClient> * client;
@property (retain, nonatomic) VKStyleManager * styleManager;
@property (retain, nonatomic) VKSharedResources * sharedResources;
@property (nonatomic) float contentScale;
@property (nonatomic) char preloadOnly;
@property (nonatomic) char requireWiFi;
@property (readonly, nonatomic) int tileSize;
@property (readonly, nonatomic) int minimumZoomLevel;
@property (readonly, nonatomic) int maximumZoomLevel;
@property (readonly, nonatomic) char minimumZoomLevelBoundsCamera;
@property (readonly, nonatomic) char maximumZoomLevelBoundsCamera;
@property (readonly, nonatomic) struct Device * device;
@property (readonly, nonatomic) int zEquivalenceClass;
@property (readonly, nonatomic) unsigned int minimumDownloadZoomLevel;
@property (readonly, nonatomic) unsigned int maximumDownloadZoomLevel;

- (void)dealloc;
- (VKTileSource *)init;
- (int)tileSize;
- (void)setContentScale:(float)arg0;
- (float)contentScale;
- (struct Device *)device;
- (VKStyleManager *)styleManager;
- (void)setStyleManager:(VKStyleManager *)arg0;
- (NSString *)detailedDescription;
- (int)minimumZoomLevel;
- (int)maximumZoomLevel;
- (VKSharedResources *)sharedResources;
- (VKTileSource *)initWithResourceManifestConfiguration:(GEOResourceManifestDownload *)arg0 locale:(NSLocale *)arg1;
- (void)setSharedResources:(VKSharedResources *)arg0;
- (void)setPreloadOnly:(char)arg0;
- (void)setRequireWiFi:(char)arg0;
- (void)setClient:(<VKTileSourceClient> *)arg0;
- (void)clearCaches;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (void)populateVisibleTileSets:(id)arg0 withTiles:(NSSet *)arg1;
- (<VKTileSourceClient> *)client;
- (char)cancelFetchForKey:(struct VKTileKey *)arg0;
- (unsigned int)minimumDownloadZoomLevel;
- (void)fetchTileForKey:(struct VKTileKey *)arg0;
- (void)forceDownload;
- (NSString *)tileForKey:(struct VKTileKey *)arg0;
- (char)canFetchTileForKey:(struct VKTileKey *)arg0;
- (struct VKTileKey)sourceKeyForRenderKey:(struct VKTileKey *)arg0;
- (struct _GEOTileKey)downloadKeyForSourceKey:(struct VKTileKey *)arg0;
- (unsigned int)maximumDownloadZoomLevel;
- (int)zEquivalenceClass;
- (id)tileLoader;
- (void)tileAvailabilityChanged:(NSNotification *)arg0;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg0 y:(unsigned int)arg1 z:(unsigned int)arg2;
- (void)fetchedTile:(id)arg0 forKey:(struct VKTileKey *)arg1;
- (struct VKTileKey)nativeKeyForRenderKey:(struct VKTileKey *)arg0;
- (NSString *)tileForSourceKey:(struct VKTileKey *)arg0 renderKey:(struct VKTileKey)arg1;
- (void)failedToDecodeSourceKey:(struct VKTileKey *)arg0;
- (void)_fetchedTile:(id)arg0;
- (void)performDownload:(struct _GEOTileKey *)arg0;
- (void)fetchTileForKey:(struct VKTileKey *)arg0 sourceKey:(struct VKTileKey)arg1;
- (void)cancelDownload:(struct _GEOTileKey *)arg0;
- (char)cancelFetchForKey:(struct VKTileKey *)arg0 sourceKey:(struct VKTileKey)arg1;
- (char)mayUseNetwork;
- (void)willGoToNetwork;
- (void)didFinishWithNetwork;
- (void)didFailToLoadTileKey:(struct _GEOTileKey *)arg0 error:(struct _GEOTileKey)arg1;
- (void)didFetchData:(NSData *)arg0 forKey:(struct _GEOTileKey *)arg1;
- (NSString *)_extraInfoForPendingSourceKey:(struct VKTileKey *)arg0;
- (char)_shouldUseDecodedTile:(id)arg0 extraInfo:(NSDictionary *)arg1;
- (void)didLoadTile:(id)arg0 forKey:(struct VKTileKey *)arg1;
- (struct VKTileKey)sourceKeyForDownloadKey:(struct _GEOTileKey *)arg0;
- (char)_shouldDecodeTile:(struct VKTileKey *)arg0;
- (void)decodeData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (void)_failedToLoadSourceKey:(struct VKTileKey *)arg0 downloadKey:(struct VKTileKey)arg1 error:(struct _GEOTileKey *)arg2;
- (void)foreachTileInPool:(NSObject *)arg0;
- (char)preloadOnly;
- (char)requireWiFi;

@end
