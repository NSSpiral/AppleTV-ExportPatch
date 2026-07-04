/* Runtime dump - VKOverlayTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayTileSource : VKTileSource
{
    VKTileSource * _tileSourceToMatch;
    NSMutableArray * _overlays;
}

@property (readonly, nonatomic) NSArray * overlays;

- (void)dealloc;
- (int)tileSize;
- (int)minimumZoomLevel;
- (int)maximumZoomLevel;
- (NSArray *)overlays;
- (void)removeOverlay:(NSObject *)arg0;
- (void)addOverlay:(NSObject *)arg0;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (void)matchTilesFromSource:(NSObject *)arg0;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (unsigned int)minimumDownloadZoomLevel;
- (void)fetchTileForKey:(struct VKTileKey *)arg0;
- (NSString *)tileForKey:(struct VKTileKey *)arg0;
- (char)canFetchTileForKey:(struct VKTileKey *)arg0;
- (struct VKTileKey)sourceKeyForRenderKey:(struct VKTileKey *)arg0;
- (unsigned int)maximumDownloadZoomLevel;
- (int)zEquivalenceClass;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg0 y:(unsigned int)arg1 z:(unsigned int)arg2;
- (struct VKTileKey)nativeKeyForRenderKey:(struct VKTileKey *)arg0;
- (struct VKTileKey)sourceKeyForDownloadKey:(struct _GEOTileKey *)arg0;
- (void)_overlayBoundingMapRegionChanged:(NSNotification *)arg0;

@end
