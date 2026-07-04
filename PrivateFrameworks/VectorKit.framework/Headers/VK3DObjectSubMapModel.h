/* Runtime dump - VK3DObjectSubMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VK3DObjectSubMapModel : NSObject
{
    struct unique_ptr<ggl::FragmentedPool<ggl::Building::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup> > > _objectShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup> > > _foggedObjectShaderSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _object2DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _object3DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _object2DRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _object3DRenderStateWithBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _objectRenderItemPool;
    VKBuildingFootprintMapModel * _buildingMapModel;
    int _vectorType;
}

@property (nonatomic) VKBuildingFootprintMapModel * buildingMapModel;
@property (nonatomic) int vectorType;

- (void).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)setVectorType:(int)arg0;
- (int)vectorType;
- (VK3DObjectSubMapModel *)initWithBuildingMapModel:(VKBuildingFootprintMapModel *)arg0;
- (void)flushPools;
- (void)resetPools;
- (VKBuildingFootprintMapModel *)buildingMapModel;
- (void)setBuildingMapModel:(VKBuildingFootprintMapModel *)arg0;

@end
