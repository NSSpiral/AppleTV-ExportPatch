/* Runtime dump - VKPolylineOverlayRenderRegion
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlayRenderRegion : NSObject
{
    NSSet * _tiles;
    struct ? _visibleRect;
    struct vector<VKRect, std::__1::allocator<VKRect> > _rectsForSnapping;
    struct vector<VKTileKey, std::__1::allocator<VKTileKey> > _snappedTileKeys;
}

@property (readonly, nonatomic) NSSet * tiles;
@property (readonly, nonatomic) struct ? visibleRect;

- (void)dealloc;
- (struct ?)visibleRect;
- (void).cxx_construct;
- (void).cxx_destruct;
- (VKPolylineOverlayRenderRegion *)initForKeysInView:(NSObject *)arg0 tiles:(NSSet *)arg1 allowsSnapping:(char)arg2;
- (char)isEquivalentToNewRegion:(NSObject *)arg0;
- (struct vector<VKRect, std::__1::allocator<VKRect> > *)rectsForSnapping;
- (NSSet *)tiles;

@end
