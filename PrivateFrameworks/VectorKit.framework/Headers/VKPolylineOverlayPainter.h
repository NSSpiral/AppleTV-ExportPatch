/* Runtime dump - VKPolylineOverlayPainter
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver>
{
    VKRouteLine * _routeLine;
    double _routeLineWidthScaleRegular;
    double _routeLineHalfWidthRealistic;
    char _selected;
    VKPolylineOverlay * _routeOverlay;
    struct /* ? */ _transportTypeMap;
    struct shared_ptr<ggl::Tile::ViewUniformData> _viewUniforms;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> > _trafficManager;
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer> > _trafficLayer;
    struct unique_ptr<vk::RouteLineArrowManager, std::__1::default_delete<vk::RouteLineArrowManager> > _arrowManager;
    struct /* ? */ _arrowLayers;
    struct unique_ptr<vk::RouteLineManager, std::__1::default_delete<vk::RouteLineManager> > _routeLineManager;
    struct unique_ptr<vk::RouteLineLayer, std::__1::default_delete<vk::RouteLineLayer> > _routeLineLayer;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _debugRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > _debugRenderItems;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > _debugShaderSetups;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _debugLineRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::BaseMesh>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh> > > _debugUnmatchedRouteLineMeshes;
    VKStyleManager * _lastQueriedStyleManager;
    double _previousViewUnitsPerPoint;
    int _styleZ;
    struct unordered_set<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *> > _selectedSections;
    struct ? _matrix;
    NSSet * _previousTilesInView;
    VKTileKeyList * _previousKeysInView;
    double _simplificationEpsilon;
    VKAnimation * _fadeAnimation;
    float _alphaScale;
    VKAnimation * _arrowFadeAnimation;
    float _arrowAlphaScale;
    char _showArrows;
    VKAnimation * _arrowCrossFadeAnimation;
    char _showTraffic;
    char _forceRoutelineUpdate;
    int _stencilValue;
    float _contentScale;
    struct shared_ptr<md::StyleQuery> _trafficStyle;
    unsigned int _targetDisplayStep;
    float _crossfadingDisplayStep;
    char _wasInRealisticMode;
}

@property (nonatomic) char selected;
@property (retain, nonatomic) VKPolylineOverlay * routeOverlay;
@property (nonatomic) char showTraffic;
@property (readonly, nonatomic) VKPolylineOverlay * polyline;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setSelected:(char)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_construct;
- (char)selected;
- (void).cxx_destruct;
- (VKStyleManager *)styleManager;
- (void)stylesheetDidChange;
- (void)flushPools;
- (void)setContainerModel:(VKOverlayContainerModel *)arg0;
- (void)gglLayoutWithContext:(NSObject *)arg0 commandBuffer:(struct CommandBuffer *)arg1 tiles:(struct ClearItem *)arg2;
- (void)layoutWithContext:(NSObject *)arg0 tiles:(struct ClearItem *)arg1 keysInView:(VKTileKeyList *)arg2;
- (char)_shouldShowTraffic;
- (VKPolylineOverlayPainter *)initWithOverlay:(<VKOverlay> *)arg0;
- (void)setRouteOverlay:(VKPolylineOverlay *)arg0;
- (void)_didReceiveMemoryWarning;
- (VKPolylineOverlay *)polyline;
- (void)gglLayoutWithContext:(NSObject *)arg0 commandBuffer:(struct CommandBuffer *)arg1 tiles:(struct ClearItem *)arg2 layer:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg3;
- (void)prepareToDrawWithCanvas:(id)arg0;
- (void)_updateZoomDependentStyleProperties;
- (void)layoutDebugUnmatchedRouteLine:(id)arg0 commandBuffer:(struct CommandBuffer *)arg1;
- (void)prepareDebugLines;
- (float)automobileRouteLineWidthForCamera:(id)arg0 canvasSize:(struct CGSize)arg1;
- (void)setNeedsLayoutForPolyline:(VKPolylineOverlay *)arg0;
- (void)polyline:(VKPolylineOverlay *)arg0 selectedSections:(struct unordered_set<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *> >)arg1 deselectedSections:(NSArray *)arg2;
- (void)updateRouteLineStencilValue:(int)arg0;
- (VKPolylineOverlay *)routeOverlay;
- (char)showTraffic;
- (void)setShowTraffic:(char)arg0;

@end
