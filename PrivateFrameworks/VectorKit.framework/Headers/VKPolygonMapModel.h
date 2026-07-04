/* Runtime dump - VKPolygonMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolygonMapModel : VKVectorMapModel <VKStyleManagerObserver>
{
    char _drawShapes;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonStroke::Shader::Setup> > > _strokeShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonAnimatableStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonAnimatableStroke::Shader::Setup> > > _animatableStrokeShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonFill::Shader::Setup> > > _fillShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonAnimatableFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonAnimatableFill::Shader::Setup> > > _animatableFillShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonShadowedStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonShadowedStroke::Shader::Setup> > > _coastlineShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::Glow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Glow::Shader::Setup> > > _glowShaderSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _strokeRenderStateNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _strokeRenderStateGreater;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _strokeRenderStateBlendGreater;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _strokeRenderStateNotEqual;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _fillRenderStateNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _fillRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _fillRenderStateBlendNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _fillRenderStateBlend;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _coastlineRenderStateNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _coastlineRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _coastlineGlowRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _coastlineRenderItemPool;
    struct shared_ptr<ggl::AnimatableTexture::VariantUniformData> _variantData;
    struct shared_ptr<ggl::Tile::ViewUniformData> _groundCoverViewUniformData;
    struct shared_ptr<ggl::PolygonFill::FillUniformData> _groundCoverPolygonUniformData;
    struct shared_ptr<ggl::PolygonBase::MeshMesh> _groundCoverMesh;
    struct unique_ptr<ggl::PolygonFill::Shader::Setup, std::__1::default_delete<ggl::PolygonFill::Shader::Setup> > _groundCoverShaderSetup;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _groundCoverRenderState;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > _groundCoverRenderItem;
    struct shared_ptr<md::StyleQuery> _groundCoverStyle;
    struct RenderItemBatcher _batcher;
}

@property (nonatomic) char drawShapes;
@property (readonly, nonatomic) char shouldEverShowVegetation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) VKStyleManager * styleManager;

- (void)dealloc;
- (VKPolygonMapModel *)init;
- (void)reset;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void).cxx_destruct;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)setDrawShapes:(char)arg0;
- (void)stylesheetWillChange;
- (void)stylesheetDidChange;
- (void)stylesheetDoneChanging;
- (unsigned long long)mapLayerPosition;
- (char)wantsCategorizedSourceTiles;
- (void)willStartDrawingTiles:(id)arg0;
- (void)flushPools;
- (void)resetPools;
- (void)updateGroundCoverStyle;
- (void)generateRenderItemsForScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)generateGroundCoverRenderItemsForScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)generateRenderItemsForOpaquePolygonsInScene:(NSObject *)arg0 context:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)generateCoastlineRenderItemsWithContext:(NSObject *)arg0 commandBuffer:(struct CommandBuffer *)arg1;
- (void)generateRenderItemsForTransparentPolygonsInScene:(NSObject *)arg0 context:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (unsigned int)textureSize;
- (struct Matrix<float, 4, 4>)worldTransformForPolygonGroup:(NSObject *)arg0 atZoom:(float)arg1;
- (struct CommandBuffer *)commandBufferInRenderQueue:(struct RenderItem * *)arg0 forFeatureWithAttributes:(struct RenderItem)arg1;
- (void)updateStylesInTiles:(id)arg0 updateTextures:(char)arg1;
- (char)shouldEverShowVegetation;
- (char)drawShapes;

@end
