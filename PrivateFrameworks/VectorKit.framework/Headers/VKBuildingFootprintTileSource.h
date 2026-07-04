/* Runtime dump - VKBuildingFootprintTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingFootprintTileSource : VKVectorTileSource
{
    int _minimumZoomLevel;
    char _makeFacades;
    char _prepareExtrusion;
}

@property (nonatomic) char makeFacades;

- (int)minimumZoomLevel;
- (VKBuildingFootprintTileSource *)initWithTileSet:(GEOActiveTileSet *)arg0 resourceManifestConfiguration:(NSDictionary *)arg1 locale:(NSObject *)arg2;
- (void)setMinimumZoomLevel:(unsigned int)arg0;
- (void)setMakeFacades:(char)arg0;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (unsigned long long)mapLayerForZoomLevelRange;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (char)makeFacades;

@end
