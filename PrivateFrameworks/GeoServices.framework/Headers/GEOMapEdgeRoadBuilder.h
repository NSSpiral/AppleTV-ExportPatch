/* Runtime dump - GEOMapEdgeRoadBuilder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder
{
    struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> > _edges;
}

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct ? *)_firstJunction;
- (struct Matrix<float, 2, 1>)_firstPoint;
- (id)_firstTile;
- (struct ? *)_lastJunction;
- (struct Matrix<float, 2, 1>)_lastPoint;
- (id)_lastTile;
- (void)_buildCompleteEdge;
- (NSObject *)_tileFinderForMap:(NSObject *)arg0 center:(struct ?)arg1 radius:(double)arg2;
- (char)_findEdgeAheadInTile:(id)arg0;
- (char)_findEdgeBehindInTile:(id)arg0;
- (GEOMapEdgeRoadBuilder *)initWithMap:(GEOMapAccess *)arg0 firstEdge:(struct ? *)arg1;

@end
