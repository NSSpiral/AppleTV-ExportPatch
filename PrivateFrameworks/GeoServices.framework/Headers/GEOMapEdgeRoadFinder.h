/* Runtime dump - GEOMapEdgeRoadFinder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder
{
    struct unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> > _roadsConsidered;
}

- (void).cxx_construct;
- (void).cxx_destruct;
- (char)_checkEdgeForDuplicates:(struct shared_ptr<geo::MapEdge> *)arg0;
- (void)_buildersInTile:(id)arg0 localPoint:(struct Matrix<float, 2, 1> *)arg1 localRadiusSqr:(struct Matrix<float, 2, 1>)arg2 localSearch:(float)arg3 handler:(struct Box<float, 2> *)arg4;
- (GEOMapEdgeRoadFinder *)initWithMap:(GEOMapAccess *)arg0 center:(struct ?)arg1 radius:(double)arg2;

@end
