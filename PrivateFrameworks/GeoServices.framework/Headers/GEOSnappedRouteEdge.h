/* Runtime dump - GEOSnappedRouteEdge
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSnappedRouteEdge : NSObject
{
    struct ? _localBounds;
    struct shared_ptr<geo::MapEdgeRoad> _mapEdge;
    struct vector<GEOVectorTilePoint, std::__1::allocator<GEOVectorTilePoint> > _points;
    struct vector<geo::PolylineCoordinate, std::__1::allocator<geo::PolylineCoordinate> > _routeOffsets;
    unsigned long _mapEdgeOffset;
    char _clippedFront;
    char _clippedBack;
}

@property (readonly, nonatomic) struct shared_ptr<geo::MapEdgeRoad> mapEdge;
@property (readonly, nonatomic) struct ? * feature;
@property (readonly, nonatomic) struct ? * points;
@property (readonly, nonatomic) unsigned long pointCount;
@property (readonly, nonatomic) struct PolylineCoordinate routeOffsetA;
@property (readonly, nonatomic) struct PolylineCoordinate routeOffsetB;
@property (readonly, nonatomic) struct PolylineCoordinate * routeOffsets;
@property (readonly, nonatomic) unsigned long mapEdgeOffset;
@property (readonly, nonatomic) char clippedFront;
@property (readonly, nonatomic) char clippedBack;

- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (GEOSnappedRouteEdge *)initWithRoadPath:(struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > *)arg0 sectionRect:(struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge> >)arg1;
- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate)arg0 andB:(struct PolylineCoordinate)arg1 overLength:(float)arg2 onRoute:(char)arg3;
- (struct ? *)feature;
- (struct ? *)points;
- (unsigned long)pointCount;
- (struct shared_ptr<geo::MapEdgeRoad>)mapEdge;
- (struct PolylineCoordinate)routeOffsetB;
- (struct PolylineCoordinate)routeOffsetA;
- (unsigned long)mapEdgeOffset;
- (struct PolylineCoordinate *)routeOffsets;
- (char)clippedFront;
- (char)clippedBack;

@end
