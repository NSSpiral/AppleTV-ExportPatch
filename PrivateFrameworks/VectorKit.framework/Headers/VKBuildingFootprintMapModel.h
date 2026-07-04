/* Runtime dump - VKBuildingFootprintMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingFootprintMapModel : VKVectorMapModel <VKMercatorTerrainHeightProvider, VKMapLayer>
{
    float _brightness;
    int _vectorType;
    int _buildingMode;
    VKAnimation * _styleChangeAnimation;
    VKAnimation * _fadeBuildingAnimation;
    char _fadeTiles;
    VKSkyModel * _skyModel;
    struct unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, std::__1::allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList> > > _currentOccluders;
    struct unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, std::__1::allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList> > > _previousOccluders;
    struct RenderItemBatcher _batcher;
    float _minLayeringHeight;
    float _maxLayeringHeight;
    BOOL _shouldDraw3DBuildingsInVectorBuildingsRenderPass;
    BOOL _shouldDraw3DBuildingsIn3DBuildingsRenderPass;
    char _initializedStyles;
    <VKBuildingFootprintMapModelDelegate> * _delegate;
    int _stencilRef;
    VK3DObjectSubMapModel * _landmarksModel;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup> > > _strokeShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingFlat::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingFlat::Shader::Setup> > > _fillShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingTop::Shader::Setup> > > _topShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedBuildingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedBuildingTop::Shader::Setup> > > _foggedTopShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PrefilteredLine::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PrefilteredLine::Shader::Setup> > > _stroke3DShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::Building::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup> > > _buildingShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup> > > _foggedBuildingShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup> > > _pointyRoofShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingShadow::Shader::Setup> > > _shadowShaderSetupPool;
    struct shared_ptr<ggl::RenderState> _strokeRenderState;
    struct shared_ptr<ggl::RenderState> _fillRenderState;
    struct shared_ptr<ggl::RenderState> _fillRenderStateWithBlending;
    struct shared_ptr<ggl::RenderState> _threeDRenderStateWithoutBlending;
    struct shared_ptr<ggl::RenderState> _threeDRenderStateWithBlending;
    struct shared_ptr<ggl::RenderState> _threeDStrokeRenderState;
    struct shared_ptr<ggl::RenderState> _shadowsRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _stroke3DRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _buildingRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _shadowRenderItemPool;
    char _supportsStrokes;
    char _supports3DStrokes;
    char _supportsBuildingShadows;
    char _supports3DBuildings;
    VKMercatorTerrainHeightCache * _heightCache;
}

@property (readonly, nonatomic) VKMercatorTerrainHeightCache * heightCache;
@property (nonatomic) int vectorType;
@property (nonatomic) char fadeTiles;
@property (nonatomic) int buildingMode;
@property (retain, nonatomic) VKSkyModel * skyModel;
@property (nonatomic) <VKBuildingFootprintMapModelDelegate> * delegate;
@property (retain, nonatomic) VK3DObjectSubMapModel * landmarksModel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<VKBuildingFootprintMapModelDelegate> *)arg0;
- (VKBuildingFootprintMapModel *)init;
- (<VKBuildingFootprintMapModelDelegate> *)delegate;
- (void)reset;
- (void)setActive:(char)arg0;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void).cxx_destruct;
- (double)heightAtPoint:(struct VKPoint)arg0;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (VKMercatorTerrainHeightCache *)heightCache;
- (void)setFadeTiles:(char)arg0;
- (void)stylesheetDidChange;
- (void)setVectorType:(int)arg0;
- (void)setSkyModel:(VKSkyModel *)arg0;
- (double)maxTileHeightAtPoint:(struct VKPoint)arg0;
- (unsigned long long)mapLayerPosition;
- (char)wantsCategorizedSourceTiles;
- (void)removePersistingExitingTiles:(id)arg0;
- (void)willStartDrawingTiles:(id)arg0;
- (void)willStopDrawingTiles:(id)arg0;
- (int)vectorType;
- (void)vectorTypeDidChange;
- (void)_clearOccluders;
- (void)_updateStyles;
- (void)animateTiles:(id)arg0 fromAlpha:(float)arg1 toAlpha:(float)arg2 fromScale:(float)arg3 toScale:(float)arg4;
- (void)flushPools;
- (void)_updateBuildingModeForContext:(NSObject *)arg0;
- (void)resetPools;
- (void)generate2DBuildingRenderItemsIfNecessaryForScene:(NSObject *)arg0 withContext:(NSObject *)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (void)generate3DBuildingRenderItemsIfNecessaryForScene:(NSObject *)arg0 withContext:(NSObject *)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (int)buildingMode;
- (void)setBuildingMode:(int)arg0 animated:(char)arg1;
- (void)generate2DBuildingRenderItemsForScene:(NSObject *)arg0 withContext:(NSObject *)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (void)generate3DBuildingRenderItemsForScene:(NSObject *)arg0 withContext:(NSObject *)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (void)generateRenderItemsForBuildingShadowsInScene:(NSObject *)arg0 withContext:(NSObject *)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (char)fadeTiles;
- (void)setBuildingMode:(int)arg0;
- (VKSkyModel *)skyModel;
- (VK3DObjectSubMapModel *)landmarksModel;
- (void)setLandmarksModel:(VK3DObjectSubMapModel *)arg0;

@end
