/* Runtime dump - VKRealisticTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRealisticTileSource : VKTileSetBackedTileSource

- (char)minimumZoomLevelBoundsCamera;
- (int)defaultMinimumZoomLevel;
- (unsigned long long)mapLayerForZoomLevelRange;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (int)defaultMaximumZoomLevel;

@end
