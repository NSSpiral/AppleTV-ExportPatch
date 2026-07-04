/* Runtime dump - VKRasterTrafficTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTrafficTileSource : VKTileSetBackedTileSource

- (VKRasterTrafficTileSource *)initWithTileSet:(GEOActiveTileSet *)arg0 resourceManifestConfiguration:(NSDictionary *)arg1 locale:(NSObject *)arg2;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (unsigned long long)mapLayerForZoomLevelRange;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (char)expires;

@end
