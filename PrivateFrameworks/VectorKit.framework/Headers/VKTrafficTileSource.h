/* Runtime dump - VKTrafficTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficTileSource : VKTileSetBackedTileSource <VKTileSourceClient>
{
    VKTileKeyList * _building;
    VKTileKeyMap * _pendingTraffic;
    VKTileSource * _roadTileSource;
    VKTrafficDynamicTileSource * _dynamicTileSource;
    VKTileCache * _recentTrafficTiles;
}

@property (retain, nonatomic) VKTileSource * roadTileSource;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setContentScale:(float)arg0;
- (void)setStyleManager:(VKStyleManager *)arg0;
- (int)maximumZoomLevel;
- (void)setSharedResources:(VKSharedResources *)arg0;
- (void)setRoadTileSource:(VKTileSource *)arg0;
- (VKTrafficTileSource *)initWithSkeletonTileSet:(NSSet *)arg0 dynamicTileSet:(NSSet *)arg1 resourceManifestConfiguration:(NSDictionary *)arg2 locale:(NSObject *)arg3;
- (void)clearCaches;
- (VKTileSource *)roadTileSource;
- (void)willStartLoadingTiles;
- (void)didStopLoadingTilesWithError:(NSError *)arg0;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (void)populateVisibleTileSets:(id)arg0 withTiles:(NSSet *)arg1;
- (void)tileSource:(VKTileSource *)arg0 invalidateTilesWithState:(unsigned int)arg1;
- (void)invalidateTilesFromTileSource:(VKTileSource *)arg0;
- (void)fetchTileForKey:(struct VKTileKey *)arg0;
- (NSString *)tileForKey:(struct VKTileKey *)arg0;
- (char)canFetchTileForKey:(struct VKTileKey *)arg0;
- (char)tileSourceMayUseNetwork:(VKTileSource *)arg0;
- (void)tileSource:(VKTileSource *)arg0 didFetchTile:(VKTile *)arg1 forKey:(struct VKTileKey *)arg2;
- (void)tileSource:(VKTileSource *)arg0 didFailToDecodeTileForKey:(struct VKTileKey *)arg1;
- (void)tileSource:(VKTileSource *)arg0 didFailToLoadTileForKey:(struct VKTileKey *)arg1 error:(struct VKTileKey)arg2;
- (void)tileSource:(VKTileSource *)arg0 invalidateKey:(struct VKTileKey *)arg1;
- (void)tileSource:(VKTileSource *)arg0 invalidateKeys:(VKTileKeyList *)arg1;
- (char)tileSource:(VKTileSource *)arg0 keyIsNeeded:(struct VKTileKey *)arg1;
- (void)tileSource:(VKTileSource *)arg0 dirtyTilesWithinRect:(struct ? *)arg1 level:(struct ?)arg2;
- (void)dirtyTilesFromTileSource:(VKTileSource *)arg0;
- (void)fetchedTile:(id)arg0 forKey:(struct VKTileKey *)arg1;
- (void)failedToDecodeSourceKey:(struct VKTileKey *)arg0;
- (void)didFailToLoadTileKey:(struct _GEOTileKey *)arg0 error:(struct _GEOTileKey)arg1;
- (void)decodeData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (void)_generatedTraffic:(id)arg0;
- (char)canFetchTrafficTileForKey:(struct VKTileKey *)arg0;
- (void)sawTileForKey:(struct VKTileKey *)arg0;

@end
