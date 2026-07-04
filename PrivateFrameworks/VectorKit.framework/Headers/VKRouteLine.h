/* Runtime dump - VKRouteLine
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteLine : NSObject <GEORouteMapMatchingDataSource>
{
    char _curve;
    char _matchToRoads;
    char _hasNewRoadMatches;
    struct ? _bounds;
    struct ? _inverseMatrix;
    VKPolylineOverlay * _overlay;
    double _boundsUnitsPerMeter;
    double _metersPerPoint;
    double _boundsInWorldUnit;
    double _simplificationEpsilonPoints;
    double _viewUnitsPerPoint;
    struct vector<geo::fast_shared_ptr<vk::RouteLineSection>, std::__1::allocator<geo::fast_shared_ptr<vk::RouteLineSection> > > _sections;
    struct fast_shared_ptr<vk::RouteLineSection> _userLocationSection;
    struct PolylineCoordinate _userLocationIndex;
    struct Matrix<float, 2, 1> _userLocation;
    double _lastUserLocationMatchTimestamp;
    double _lastTrafficTimeStamp;
    NSSet * _retainedTiles;
    VKPolylineOverlayRenderRegion * _renderRegion;
}

@property (nonatomic) VKPolylineOverlay * overlay;
@property (readonly, nonatomic) char needsUpdate;
@property (nonatomic) double simplificationEpsilonPoints;
@property (readonly, nonatomic) struct ? bounds;
@property (readonly, nonatomic) struct fast_shared_ptr<vk::RouteLineSection> userLocationSection;
@property (readonly, nonatomic) struct PolylineCoordinate * userLocationIndex;
@property char hasNewRoadMatches;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (struct ?)bounds;
- (void).cxx_construct;
- (void).cxx_destruct;
- (VKPolylineOverlay *)overlay;
- (void)setSimplificationEpsilonPoints:(double)arg0;
- (void)setOverlay:(VKPolylineOverlay *)arg0;
- (void)forEachSection:(id)arg0;
- (char)needsUpdate;
- (char)buildRouteLineForPainter:(id)arg0 keysInView:(VKTileKeyList *)arg1 tiles:(struct ClearItem *)arg2 containerModel:(VKOverlayContainerModel *)arg3 viewUnitsPerPoint:(double)arg4 force:(char)arg5 curve:(char)arg6 selected:(char)arg7;
- (void)generateArrowsForManeuverDisplayMode:(int)arg0 routeLineWidth:(float)arg1;
- (void)createMeshIfNecessary:(int)arg0;
- (void)splitRouteLineAtAnnotation:(NSObject *)arg0;
- (struct fast_shared_ptr<vk::RouteLineSection>)userLocationSection;
- (struct PolylineCoordinate *)userLocationIndex;
- (void)setHasNewRoadMatches:(char)arg0;
- (void)_updateBounds:(id)arg0;
- (void)_updateTilesCovered:(id)arg0;
- (char)isTrafficUpToDate;
- (char)hasNewRoadMatches;
- (void)forEachMapMatchingSection:(id)arg0;
- (char)isTrafficUptoDate:(double)arg0;
- (double)simplificationEpsilonPoints;

@end
