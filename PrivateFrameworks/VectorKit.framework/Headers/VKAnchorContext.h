/* Runtime dump - VKAnchorContext
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnchorContext : NSObject
{
    struct shared_ptr<vk::AnchorContext> _anchorContext;
    struct shared_ptr<vk::AnchorFactory> _anchorFactory;
}

- (VKAnchorContext *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<vk::AnchorContext>)anchorContext;
- (void)setMercatorTerrainHeightCache:(NSObject *)arg0;
- (VKAnchorContext *)initMercator;
- (char)isMercator;
- (id)newAnchorAtCoordinate:(struct ?)arg0 followsTerrain:(char)arg1;
- (VKAnchorContext *)initWithAnchorContext:(struct AnchorContext *)arg0;
- (struct shared_ptr<vk::AnchorFactory>)anchorFactory;
- (VKAnchorContext *)initGeocentricWithCache:(NSObject *)arg0;

@end
