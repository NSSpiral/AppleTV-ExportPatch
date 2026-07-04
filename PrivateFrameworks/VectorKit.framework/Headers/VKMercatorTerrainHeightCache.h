/* Runtime dump - VKMercatorTerrainHeightCache
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMercatorTerrainHeightCache : NSObject
{
    <VKMercatorTerrainHeightProvider> * _heightProvider;
    struct map<vk::Anchor *, float, std::__1::less<vk::Anchor *>, std::__1::allocator<std::__1::pair<vk::Anchor *const, float> > > _anchorToHeight;
}

@property (nonatomic) <VKMercatorTerrainHeightProvider> * heightProvider;

- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setHeightProvider:(<VKMercatorTerrainHeightProvider> *)arg0;
- (void)invalidateRect:(struct ? *)arg0;
- (double)heightForAnchor:(struct Anchor *)arg0;
- (void)removeCachedValueForAnchor:(struct Anchor *)arg0;
- (<VKMercatorTerrainHeightProvider> *)heightProvider;

@end
