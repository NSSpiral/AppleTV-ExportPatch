/* Runtime dump - VKAttributesTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAttributesTileSource : VKVectorTileSource

- (int)tileSize;
- (VKAttributesTileSource *)initWithTileSet:(GEOActiveTileSet *)arg0 resourceManifestConfiguration:(NSDictionary *)arg1 locale:(NSObject *)arg2;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (unsigned int)minimumDownloadZoomLevel;
- (unsigned int)maximumDownloadZoomLevel;
- (int)zEquivalenceClass;

@end
