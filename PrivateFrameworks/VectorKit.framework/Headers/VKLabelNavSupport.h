/* Runtime dump - VKLabelNavSupport
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavSupport : NSObject
{
    char _needsLayout;
    char _drawRoadSigns;
    VKPolylineOverlayPainter * _route;
    NSString * _currentLocationText;
    char _isOnRoute;
    struct PolylineCoordinate _routeUserOffset;
    unsigned int _stepIndex;
    char _checkOnRouteLabelsAlignment;
    char _disableTileParseForOneLayout;
    NSMutableSet * _tiles;
    NSMutableSet * _pendingTiles;
    NSMutableArray * _junctions;
    VKLabelNavRoadGraph * _roadGraph;
    struct vector<std::__1::shared_ptr<vk::NavLabel>, std::__1::allocator<std::__1::shared_ptr<vk::NavLabel> > > _activeSigns;
    NSMutableArray * _fadingLabels;
    NSMutableDictionary * _visibleLabelsByName;
    NSMutableArray * _visibleLabels;
    unsigned int _countVisibleRoadSigns;
    unsigned int _countVisibleOnRouteRoadSigns;
    unsigned int _maxVisibleRoadSigns;
    unsigned int _minVisibleOnRouteRoadSigns;
    unsigned int _maxOnRoadGraphRoadSigns;
    unsigned int _minVisibleRoadSigns;
    unsigned int _minVisibleProceedToRouteRoadSigns;
    char _preferRightSideLabelPlacement;
    float _minSignOffsetDistance;
    NSMutableSet * _roadNamesInGuidance;
    NSMutableArray * _guidanceStepInfos;
    NSMutableArray * _routeRoadInfos;
    NSString * _currentRoadName;
    int _currentRoadNameIndex;
    NSString * _currentShieldGroup;
    char _checkIfRouteSubrangeChanged;
    char _useRouteSubrange;
    struct PolylineCoordinate _routeSubrangeStart;
    struct PolylineCoordinate _routeSubrangeEnd;
}

@property (nonatomic) char drawRoadSigns;
@property (retain, nonatomic) VKPolylineOverlayPainter * route;
@property (retain, nonatomic) NSString * currentLocationText;
@property (retain, nonatomic) NSString * currentRoadName;
@property (retain, nonatomic) NSString * currentShieldGroup;
@property (nonatomic) struct PolylineCoordinate routeUserOffset;
@property (readonly, nonatomic) struct vector<std::__1::shared_ptr<vk::NavLabel>, std::__1::allocator<std::__1::shared_ptr<vk::NavLabel> > > * activeSigns;
@property (readonly, nonatomic) char needsLayout;

- (void)dealloc;
- (VKLabelNavSupport *)init;
- (char)needsLayout;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setStyleManager:(VKStyleManager *)arg0;
- (struct PolylineCoordinate)routeUserOffset;
- (void)setRouteUserOffset:(struct PolylineCoordinate)arg0;
- (void)setCurrentLocationText:(NSString *)arg0;
- (void)setRoute:(VKPolylineOverlayPainter *)arg0;
- (VKPolylineOverlayPainter *)route;
- (void)clearSceneIsMemoryWarning:(char)arg0;
- (void)grabTilesFromScene:(NSObject *)arg0;
- (void)layoutWithNavContext:(struct NavContext *)arg0;
- (struct vector<std::__1::shared_ptr<vk::NavLabel>, std::__1::allocator<std::__1::shared_ptr<vk::NavLabel> > > *)activeSigns;
- (unsigned char)computeRoutePositionForPOIAtPixel:(struct Matrix<float, 2, 1> *)arg0 currentPosition:(struct Matrix<float, 2, 1>)arg1 context:(unsigned char)arg2;
- (void)_refreshGuidanceRoadNames;
- (void)_updateRoadsInGuidance;
- (void)_updateCurrentRoadInfo;
- (void)setCurrentRoadName:(NSString *)arg0;
- (void)setCurrentShieldGroup:(NSString *)arg0;
- (void)_tryAddLabel:(NSString *)arg0 navContext:(struct NavContext *)arg1 labelCollisionEnabled:(char)arg2;
- (void)_createOrUpdateLabelForRoad:(id)arg0 isShield:(char)arg1 navContext:(struct NavContext *)arg2;
- (char)_collideLabel:(NSString *)arg0 activeLabel:(NSString *)arg1 labelsToRemove:(id)arg2;
- (char)_updateActiveRouteRange;
- (void)_reloadRouteJunctions;
- (char)_addJunctionsForTile:(id)arg0;
- (void)_addLabelsAtJunctions:(id)arg0 withContext:(struct NavContext *)arg1 maxVisibleLabels:(id)arg2 minOnRouteVisibleLabels:(unsigned int)arg3;
- (void)_addLabelsForJunctions:(id)arg0 withContext:(struct NavContext *)arg1 maxVisibleLabels:(id)arg2 minOnRouteVisibleLabels:(unsigned int)arg3 useAllJunctions:(unsigned int)arg4 placeShieldsFrontToBack:(char)arg5;
- (void)_tryAddRoadSignForJunction:(id)arg0 navContext:(struct NavContext *)arg1 labelCollisionEnabled:(char)arg2;
- (void)_tryAddRoadSignForRoad:(id)arg0 isShield:(char)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(char)arg3;
- (void)_updateRoadStarts;
- (void)_updatePreferredLabelPlacements;
- (void)_initalizeCurrentRoadInfo;
- (void)_updateUniqueOffRouteRoads;
- (NSString *)currentRoadName;
- (char)_findRouteOverlappingJunctionFrom:(int)arg0 routeJunctions:(struct vector<RouteJunctionInfo, std::__1::allocator<RouteJunctionInfo> > *)arg1 lookBackward:(struct RouteJunctionInfo *)arg2 firstOverlap:(struct __compressed_pair<RouteJunctionInfo *, std::__1::allocator<RouteJunctionInfo> >)arg3 secondOverlap:(id)arg4;
- (char)isNavMode;
- (char)drawRoadSigns;
- (void)setDrawRoadSigns:(char)arg0;
- (NSString *)currentLocationText;
- (NSString *)currentShieldGroup;

@end
