/* Runtime dump - VKRoadTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadTile : VKVectorTile
{
    VKTrafficTile * _trafficTile;
    struct unique_ptr<vk::RoadLayer, std::__1::default_delete<vk::RoadLayer> > _roadLayer;
    struct unique_ptr<vk::PatternedLayer, std::__1::default_delete<vk::PatternedLayer> > _patternedRibbonLayer;
}

@property (retain, nonatomic) VKTrafficTile * trafficTile;
@property (readonly, nonatomic) struct RoadLayer * roadLayer;
@property (readonly, nonatomic) struct PatternedLayer * patternedRibbonLayer;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)updateViewDependentStateIfNecessaryWithContext:(NSObject *)arg0;
- (VKRoadTile *)initWithKey:(struct VKTileKey *)arg0 modelTile:(struct VKTileKey)arg1 styleManager:(VKStyleManager *)arg2 sharedResources:(VKSharedResources *)arg3 contentScale:(float)arg4 device:(float)arg5;
- (struct RoadLayer *)roadLayer;
- (struct PatternedLayer *)patternedRibbonLayer;
- (VKTrafficTile *)trafficTile;
- (void)setTrafficTile:(VKTrafficTile *)arg0;
- (void)buildGglMeshesWithDevice:(struct Device *)arg0;
- (void)addPatternedRibbonTo:(struct /* ? */ *)arg0 styleQuery:(struct /* ? */)arg1 painterZ:(id)arg2 numPoints:(id)arg3 points:(struct CGPoint *)arg4;
- (void)addRoadRibbonTo:(struct /* ? */ *)arg0 styleQuery:(struct /* ? */)arg1 painterZ:(id)arg2 numPoints:(id)arg3 points:(struct CGPoint *)arg4 startCap:(struct /* ? */)arg5 endCap:(char)arg6;

@end
