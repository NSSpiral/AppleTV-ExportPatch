/* Runtime dump - VKRasterMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray * _sortedTiles;
    unsigned long long _mapLayer;
    char _rasterViewer;
    char _showingNoDataPlaceholders;
    struct shared_ptr<md::StyleQuery> _styleQuery;
    struct shared_ptr<ggl::Texture2D> _gglClutTexture;
    struct Pos2DUVMesh * _unitMesh;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _renderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _clutRenderState;
}

@property (nonatomic) unsigned long long mapLayerPosition;
@property (nonatomic) char rasterViewer;
@property (readonly) char showingNoDataPlaceholders;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)reloadOnStylesheetChange;

- (void)dealloc;
- (VKRasterMapModel *)init;
- (void)reset;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)isShowingNoDataPlaceholders;
- (VKStyleManager *)styleManager;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)setMapLayerPosition:(unsigned long long)arg0;
- (void)stylesheetDidChange;
- (void)setRasterViewer:(char)arg0;
- (unsigned long long)mapLayerPosition;
- (char)shouldEnableCLUT;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2 roadAlpha:(struct __shared_weak_count *)arg3;
- (char)rasterViewer;
- (void)gglSetupClutTextureForLevelOfDetail:(unsigned int)arg0 scale:(float)arg1;

@end
