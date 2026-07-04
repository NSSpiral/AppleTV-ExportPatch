/* Runtime dump - VKBuildingTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingTile : VKVectorTile
{
    struct vector<std::__1::shared_ptr<ggl::Texture2D>, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > _facadeTextures;
    id _polygonGroups;
    VK3DObjectSubTile * _objectSubTile;
    struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > _shadowTexture;
    struct Matrix<double, 4, 4> _shadowModelMatrix;
    struct shared_ptr<ggl::Tile::ViewUniformData> _shadowViewUniformData;
    float _alpha;
    float _scale;
    float _minLayeringHeight;
    float _maxLayeringHeight;
    double _maxHeight;
    struct CullingGridWithHeight _cullingGrid;
    struct FogInfo _fogInfo;
    VKAnimation * _animation;
    VKAnimation * _animationForPitch;
}

@property (readonly, nonatomic) VK3DObjectSubTile * objectSubTile;
@property (readonly, nonatomic) struct Texture2D * shadowTexture;
@property (readonly, nonatomic) struct shared_ptr<ggl::Tile::ViewUniformData> shadowViewUniformData;
@property (nonatomic) float alpha;
@property (nonatomic) float scale;
@property (readonly, nonatomic) float minLayeringHeight;
@property (readonly, nonatomic) float maxLayeringHeight;
@property (readonly, nonatomic) double maxHeight;
@property (retain, nonatomic) VKAnimation * animation;
@property (retain, nonatomic) VKAnimation * animationForPitch;
@property (readonly, nonatomic) struct CullingGridWithHeight cullingGrid;
@property (readonly, nonatomic) struct FogInfo * fogInfo;

- (void)dealloc;
- (float)alpha;
- (void)setAlpha:(float)arg0;
- (float)scale;
- (VKAnimation *)animation;
- (void)setScale:(float)arg0;
- (void).cxx_construct;
- (void)setAnimation:(VKAnimation *)arg0;
- (void).cxx_destruct;
- (double)maxHeight;
- (void)updateViewDependentStateWithContext:(NSObject *)arg0;
- (void)updateViewDependentStateIfNecessaryWithContext:(NSObject *)arg0;
- (void)updateWithStyleResolutionSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > *)arg0;
- (char)heightAtPoint:(struct Matrix<float, 2, 1> *)arg0 outZ:(struct Matrix<float, 2, 1>)arg1;
- (VKAnimation *)animationForPitch;
- (float)minLayeringHeight;
- (float)maxLayeringHeight;
- (unsigned int)numberOfFacadeTextures;
- (NSObject *)polygonGroupsForTextureAtIndex:(unsigned int)arg0;
- (struct FogInfo *)fogInfo;
- (struct CullingGridWithHeight)cullingGrid;
- (struct vector<std::__1::shared_ptr<ggl::Texture2D>, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > *)facadeTextures;
- (struct shared_ptr<ggl::Tile::ViewUniformData>)shadowViewUniformData;
- (struct Texture2D *)shadowTexture;
- (void)setAnimationForPitch:(VKAnimation *)arg0;
- (VKBuildingTile *)initWithKey:(struct VKTileKey *)arg0 modelTile:(struct VKTileKey)arg1 prepareExtrusion:(char)arg2 styleManager:(char)arg3 sharedResources:(VKSharedResources *)arg4 contentScale:(float)arg5 device:(float)arg6;
- (VK3DObjectSubTile *)objectSubTile;
- (void)buildMeshesWithTriangulator:(id)arg0 device:(struct Device *)arg1 prepareExtrusion:(char)arg2;
- (void)_buildShadowTexture;
- (struct Box<float, 2>)_shadowBounds;
- (void)_fillShadowAreasInContext:(struct CGContext *)arg0 data:(char *)arg1;
- (void)_blurTexture:(char *)arg0;

@end
