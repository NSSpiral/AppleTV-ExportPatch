/* Runtime dump - VKRasterOverlayTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlayTileSource : VKTileSource
{
    NSMutableArray * _overlays;
    NSObject<OS_dispatch_group> * _renderGroup;
    NSObject<OS_dispatch_queue> * _homeQ;
}

@property (readonly, nonatomic) NSArray * overlays;

- (void)dealloc;
- (VKRasterOverlayTileSource *)init;
- (void)invalidate;
- (int)tileSize;
- (NSArray *)overlays;
- (void)removeOverlay:(NSObject *)arg0;
- (void)addOverlay:(NSObject *)arg0;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (void)insertOverlay:(NSObject *)arg0 aboveOverlay:(NSObject *)arg1;
- (void)insertOverlay:(NSObject *)arg0 belowOverlay:(NSObject *)arg1;
- (char)cancelFetchForKey:(struct VKTileKey *)arg0;
- (unsigned int)minimumDownloadZoomLevel;
- (char)canFetchTileForKey:(struct VKTileKey *)arg0;
- (unsigned int)maximumDownloadZoomLevel;
- (void)fetchTileForKey:(struct VKTileKey *)arg0 sourceKey:(struct VKTileKey)arg1;
- (void)_queueDraw:(struct VKTileKey *)arg0;
- (void)_flush;
- (void)insertOverlay:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)invalidateRect:(struct ? *)arg0 level:(struct ?)arg1;
- (void)exchangeOverlayAtIndex:(unsigned int)arg0 withOverlayAtIndex:(unsigned int)arg1;

@end
