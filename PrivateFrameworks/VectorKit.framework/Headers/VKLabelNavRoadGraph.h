/* Runtime dump - VKLabelNavRoadGraph
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRoadGraph : NSObject
{
    NSMutableSet * _tiles;
    NSMutableSet * _duplicateTiles;
    NSMutableDictionary * _tileDatasByIndex;
    NSMutableArray * _junctions;
    NSMutableArray * _intersections;
    char _oppositeCarriagewayJunctionsValid;
    NSMutableArray * _oppositeCarriagewayJunctions;
    struct Matrix<float, 2, 1> _unitHeading;
    char _offRouteJunctionsValid;
    struct Box<double, 2> _offRouteJunctionSelectRect;
    NSMutableArray * _offRouteJunctions;
    struct PolylineCoordinate _routeUserOffset;
    char _routeFeatureMapValid;
    struct /* ? */ _routeFeatureMap;
    char _simplifiedRouteValid;
    struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > _simplifiedRoutePoints;
    unsigned int _currentRoadStartSimplifiedPointIndex;
    char _screenRouteValid;
    struct vector<RouteSegment, std::__1::allocator<RouteSegment> > _screenRouteSegments;
    unsigned int _firstPOIAligningRouteSegment;
}

@property (retain, nonatomic) NSMutableArray * junctions;

- (void)dealloc;
- (void)reset;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSMutableArray *)junctions;
- (unsigned char)computeRoutePositionForPOIAtPixel:(struct Matrix<float, 2, 1> *)arg0 currentPosition:(struct Matrix<float, 2, 1>)arg1 context:(unsigned char)arg2;
- (id)nextRoadSegmentForRoad:(id)arg0;
- (id)junctionForRoad:(id)arg0 nearJunction:(char)arg1 crossTileEdge:(char)arg2;
- (VKLabelNavRoadGraph *)initWithJunctions:(NSMutableArray *)arg0;
- (void)setTiles:(NSMutableSet *)arg0;
- (void)routeJunctionsHaveChanged;
- (char)isPriorRouteCollinearWithRoad:(struct ? *)arg0 distance:(float)arg1;
- (char)collideRouteWithLabel:(NSString *)arg0 routeCrossProduct:(float *)arg1 context:(struct NavContext *)arg2;
- (char)isOnScreenRouteBackwardsAtJunction:(id)arg0 navContext:(struct NavContext *)arg1;
- (void)startingLabelLayoutWithContext:(struct NavContext *)arg0 routeUserOffset:(struct PolylineCoordinate)arg1;
- (char)prepareOppositeCarriagewayJunctions;
- (NSMutableArray *)oppositeCarriagewayJunctions;
- (unsigned int)countReadyJunctionLists;
- (id)junctionListForDepth:(unsigned int)arg0;
- (NSString *)offRouteGraphJunctionsWithNavContext:(struct NavContext *)arg0 maxJunctions:(id)arg1 isOnRoute:(unsigned int)arg2;
- (void)addRouteRoadEdge:(struct VKLabelNavRouteRoadEdge *)arg0 atA:(struct VKLabelNavRouteRoadEdge)arg1 isRouteRefineJunction:(struct PolylineCoordinate)arg2 tile:(struct ? *)arg3 junctionList:(NSArray *)arg4;
- (id)overpassJunctionForJunction:(id)arg0;
- (void)evaluateDualCarriagewayForJunction:(id)arg0 outputJunctionList:(NSArray *)arg1;
- (id)_junctionForRoadEdge:(struct ? *)arg0 atA:(struct ?)arg1 routeOffset:(unsigned int)arg2 tile:(unsigned int)arg3;
- (id)_findInterTileJunctionForJunction:(id)arg0;
- (id)_nextIntersectionForRoad:(id)arg0;
- (void)setJunctions:(NSMutableArray *)arg0;
- (char)_checkIfDualCarriageWayConnectorRoad:(id)arg0 fromJunction:(MKJunction *)arg1 toJunction:(MKJunction *)arg2 checkShields:(char)arg3;
- (void)_updateIntersectionsForDepth:(unsigned int)arg0;
- (void)_findOffRouteJunctions;
- (void)_updateSimplifiedRoute;
- (void)_transformRouteToScreenWithContext:(struct NavContext *)arg0;

@end
