/* Runtime dump - VKTrafficDynamicTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficDynamicTileSource : VKTileSetBackedTileSource
{
    VKTileCache * _recentTrafficDynamicTiles;
}

- (void)dealloc;
- (VKTrafficDynamicTileSource *)initWithTileSet:(GEOActiveTileSet *)arg0 resourceManifestConfiguration:(NSDictionary *)arg1 locale:(NSObject *)arg2;
- (void)clearCaches;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (int)defaultMinimumZoomLevel;
- (unsigned long long)mapLayerForZoomLevelRange;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (void)fetchTileForKey:(struct VKTileKey *)arg0;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg0 y:(unsigned int)arg1 z:(unsigned int)arg2;
- (void)didLoadTile:(id)arg0 forKey:(struct VKTileKey *)arg1;
- (int)defaultMaximumZoomLevel;
- (NSString *)sourceKeysForRenderKey:(struct VKTileKey *)arg0;

@end
