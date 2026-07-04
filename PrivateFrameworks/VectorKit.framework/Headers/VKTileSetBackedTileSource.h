/* Runtime dump - VKTileSetBackedTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileSetBackedTileSource : VKTileSource
{
    GEOActiveTileSet * _tileSet;
    struct _GEOTileKey _downloadTemplate;
    unsigned int _minimumDownloadZoomLevel;
    unsigned int _maximumDownloadZoomLevel;
    VKTimer * _expirationTimer;
    VKTilePool * _expiredTilePool;
    struct _NSRange _zoomLevelRange;
    _VKTileSetBackedTileSourceTimerTarget * _timerTarget;
}

@property (retain, nonatomic) GEOActiveTileSet * tileSet;

- (void)dealloc;
- (void).cxx_construct;
- (int)tileSize;
- (void)setStyleManager:(VKStyleManager *)arg0;
- (int)minimumZoomLevel;
- (int)maximumZoomLevel;
- (VKTileSetBackedTileSource *)initWithTileSet:(GEOActiveTileSet *)arg0 resourceManifestConfiguration:(NSDictionary *)arg1 locale:(NSObject *)arg2;
- (void)setTileSet:(GEOActiveTileSet *)arg0;
- (void)setClient:(<VKTileSourceClient> *)arg0;
- (void)clearCaches;
- (int)defaultMinimumZoomLevel;
- (unsigned long long)mapLayerForZoomLevelRange;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (void)populateVisibleTileSets:(id)arg0 withTiles:(NSSet *)arg1;
- (unsigned int)minimumDownloadZoomLevel;
- (NSString *)tileForKey:(struct VKTileKey *)arg0;
- (struct VKTileKey)sourceKeyForRenderKey:(struct VKTileKey *)arg0;
- (unsigned int)maximumDownloadZoomLevel;
- (id)tileLoader;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg0 y:(unsigned int)arg1 z:(unsigned int)arg2;
- (void)fetchedTile:(id)arg0 forKey:(struct VKTileKey *)arg1;
- (GEOActiveTileSet *)tileSet;
- (int)defaultMaximumZoomLevel;
- (char)expires;
- (double)_nextTileExpirationDate;
- (void)_scheduleTileExpirationTimer:(double)arg0 forceUpdate:(char)arg1;
- (double)_expirationInterval;
- (void)_expireTiles;

@end
