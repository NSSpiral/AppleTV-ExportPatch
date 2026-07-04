/* Runtime dump - VKRealisticMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRealisticMapModel : VKVectorMapModel <VKMapLayer>
{
    double _fade;
    float _sceneAlpha;
    <GEORoutePreloadSession> * _routePreloadSession;
    char _disableRealisticRoads;
    char _disableRealisticLand;
    VKSkyModel * _skyModel;
    struct unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem> > _clearItem;
    struct shared_ptr<ggl::AnimatableTexture::VariantUniformData> _variantData;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> > > _roadStencilShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticTexture::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticTexture::Shader::Setup> > > _texturedShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup> > > _animatableTexturedShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticRoad::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticRoad::Shader::Setup> > > _roadShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup> > > _animatableRoadShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup> > > _casingShadowShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup> > > _casingFacadeShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> > > _casingSidewalkShadowShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> > > _casingTopShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup> > > _roadShadowShaderSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _roadStencilRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _landRenderStateWithoutBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _landRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _coastlineRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _waterRenderStateWithoutBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _waterRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _roadRenderStateWithoutBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _roadRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _casingShadowRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _casingFacadeRenderStateWithoutBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _casingFacadeRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _casingSidewalkShadowRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _casingTopRenderStateWithoutBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _casingTopRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _roadShadowRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _roadStencilRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _texturedRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _roadRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _casingShadowRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _casingFacadeRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _casingTopRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _sidewalkShadowRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _roadShadowRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> > > _debugShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _debugRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _debugRenderState;
    BOOL _needDebugReset;
    struct RenderItemBatcher _batcher;
}

@property (retain, nonatomic) <GEORoutePreloadSession> * routePreloadSession;
@property (nonatomic) char disableRealisticRoads;
@property (nonatomic) char disableRealisticLand;
@property (nonatomic) float sceneAlpha;
@property (retain, nonatomic) VKSkyModel * skyModel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (VKRealisticMapModel *)init;
- (void)reset;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void).cxx_destruct;
- (void)setRoutePreloadSession:(<GEORoutePreloadSession> *)arg0;
- (<GEORoutePreloadSession> *)routePreloadSession;
- (void)setDisableRealisticRoads:(char)arg0;
- (void)setDisableRealisticLand:(char)arg0;
- (char)disableRealisticRoads;
- (char)disableRealisticLand;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)stylesheetTransitionDidProgress;
- (void)stylesheetDidChange;
- (void)gatherRenderingPreloadItems:(struct vector<ggl::ShaderLoadItem, std::__1::allocator<ggl::ShaderLoadItem> > *)arg0;
- (void)stylesheetWillTransition:(unsigned int)arg0;
- (void)stylesheetDoneChanging;
- (void)setSkyModel:(VKSkyModel *)arg0;
- (char)minimumZoomLevelBoundsCamera;
- (void)setSceneAlpha:(float)arg0;
- (float)sceneAlpha;
- (unsigned long long)mapLayerPosition;
- (char)wantsCategorizedSourceTiles;
- (void)willStartDrawingTiles:(id)arg0;
- (void)flushPools;
- (void)resetPools;
- (VKSkyModel *)skyModel;
- (void)resetDebugPools:(id)arg0;
- (void)appendDebugPreloadStatusToBuffer:(struct CommandBuffer *)arg0 inContext:(struct ClearItem *)arg1 forScene:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg2;
- (void)appendDebugPreloadMissesToBuffer:(struct CommandBuffer *)arg0 inContext:(struct ClearItem *)arg1 forScene:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg2;
- (void)appendStencilCommandsToBuffer:(struct CommandBuffer *)arg0 inContext:(struct ClearItem *)arg1;
- (void)appendLandCommandsToBuffer:(struct CommandBuffer *)arg0 inContext:(struct ClearItem *)arg1 skyParameters:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg2;
- (void)appendWaterCommandsToBuffer:(struct CommandBuffer *)arg0 inContext:(struct ClearItem *)arg1 skyParameters:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg2;
- (void)appendRoadCommandsToBuffer:(struct CommandBuffer *)arg0 inContext:(struct ClearItem *)arg1 skyParameters:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg2;
- (void)setupRealisticUniformBuffer:(struct RealisticUniformData *)arg0 forTile:(struct vector<unsigned char, std::__1::allocator<unsigned char> >)arg1;
- (double)_calculateZoomLevelWithContext:(NSObject *)arg0;

@end
