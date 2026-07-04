/* Runtime dump - VKLabelModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelModel : VKModelObject <LabelManagerDelegate, GEOResourceManifestTileGroupObserver, VKMapLayer, VKStyleManagerObserver, VKMapModeObserver>
{
    char _debugSkipLabels;
    <VKLabelModelDelegate> * _delegate;
    char _drawLabels;
    id _observerIsReadyHook;
    struct shared_ptr<vk::LabelManager> _labelManager;
    int _layoutStamp;
    struct vector<std::__1::shared_ptr<vk::LabelMapTile>, std::__1::allocator<std::__1::shared_ptr<vk::LabelMapTile> > > _currentTiles;
    BOOL _inRealistic;
    char _shouldModifyLabelsOnRoutes;
}

@property (nonatomic) <VKLabelModelDelegate> * delegate;
@property (nonatomic) char drawLabels;
@property (nonatomic) char localizeLabels;
@property (nonatomic) int labelScaleFactor;
@property (nonatomic) char labelMarkerSelectionEnabled;
@property (readonly, nonatomic) struct shared_ptr<vk::LabelManager> labelManager;
@property (nonatomic) int shieldSize;
@property (nonatomic) int navigationShieldSize;
@property (nonatomic) int shieldIdiom;
@property (nonatomic) char showsPointsOfInterest;
@property (nonatomic) char shouldModifyLabelsOnRoutes;
@property (retain, nonatomic) NSArray * externalTrafficIncidents;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) VKStyleManager * styleManager;

+ (char)reloadOnStylesheetChange;

- (void)dealloc;
- (void)setDelegate:(<VKLabelModelDelegate> *)arg0;
- (<VKLabelModelDelegate> *)delegate;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void)setContentScale:(float)arg0;
- (void).cxx_destruct;
- (char)labelMarkerSelectionEnabled;
- (void)setLabelMarkerSelectionEnabled:(char)arg0;
- (VKStyleManager *)styleManager;
- (void)setStyleManager:(VKStyleManager *)arg0;
- (void)setTrafficEnabled:(char)arg0;
- (char)localizeLabels;
- (void)setLocalizeLabels:(char)arg0;
- (int)labelScaleFactor;
- (void)setLabelScaleFactor:(int)arg0;
- (void)setMapType:(int)arg0;
- (void)clearScene;
- (int)shieldSize;
- (void)setShieldSize:(int)arg0;
- (int)navigationShieldSize;
- (void)setNavigationShieldSize:(int)arg0;
- (int)shieldIdiom;
- (void)setShieldIdiom:(int)arg0;
- (char)showsPointsOfInterest;
- (void)setShowsPointsOfInterest:(char)arg0;
- (struct PolylineCoordinate)routeUserOffset;
- (void)setRouteUserOffset:(struct PolylineCoordinate)arg0;
- (NSArray *)externalTrafficIncidents;
- (void)setExternalTrafficIncidents:(NSArray *)arg0;
- (void)deselectLabelMarker;
- (VKLabelMarker *)labelMarkerForSelectionAtPoint:(struct CGPoint)arg0 selectableLabelsOnly:(char)arg1;
- (void)selectLabelMarker:(VKLabelMarker *)arg0;
- (VKLabelMarker *)selectedLabelMarker;
- (NSArray *)labelMarkers;
- (void)setCurrentLocationText:(NSString *)arg0;
- (void)setNavigationPuckSize:(float)arg0;
- (char)shouldLayoutWithoutStyleManager;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (struct shared_ptr<vk::LabelManager>)labelManager;
- (void)setDrawLabels:(char)arg0;
- (void)prepareForStylesheetTransitionToMapDisplayStyle:(unsigned int)arg0 withReadinessBlock:(id /* block */)arg1;
- (void)stylesheetDidChange;
- (void)setVectorType:(int)arg0;
- (void)setLabelMode:(unsigned char)arg0;
- (void)stylesheetWillTransition:(unsigned int)arg0;
- (void)stylesheetDoneChanging;
- (VKLabelModel *)initWithPurpose:(unsigned int)arg0 sharedResources:(VKSharedResources *)arg1;
- (void)setShouldModifyLabelsOnRoutes:(char)arg0;
- (void)willTapZoom;
- (void)didTapZoom;
- (void)willTransitionFrom:(int)arg0 To:(int)arg1;
- (void)didTransitionFrom:(int)arg0 To:(int)arg1;
- (unsigned long long)mapLayerPosition;
- (void)setIsShowingRoute:(char)arg0;
- (id)focusedPolylinePainter;
- (void)setFocusedPolylinePainter:(id)arg0;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint)arg0;
- (NSString *)labelDebugString;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)updateLabelMapTiles:(id)arg0;
- (char)shouldModifyLabelsOnRoutes;
- (void)labelManager:(struct LabelManager *)arg0 setNeedsLayout:(struct __shared_weak_count *)arg1;
- (void)labelManager:(struct LabelManager *)arg0 setNeedsDisplay:(struct __shared_weak_count *)arg1;
- (void)labelManager:(struct LabelManager *)arg0 selectedLabelMarkerWillDisappear:(struct __shared_weak_count *)arg1;
- (void)labelManager:(struct LabelManager *)arg0 pendingArtworkIsReady:(struct __shared_weak_count *)arg1;
- (char)drawLabels;

@end
