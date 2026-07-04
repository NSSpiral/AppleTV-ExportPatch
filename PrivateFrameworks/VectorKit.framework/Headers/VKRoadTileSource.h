/* Runtime dump - VKRoadTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadTileSource : VKVectorTileSource

- (void)releaseTraffic;
- (char)minimumZoomLevelBoundsCamera;
- (unsigned long long)mapLayerForZoomLevelRange;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;

@end
