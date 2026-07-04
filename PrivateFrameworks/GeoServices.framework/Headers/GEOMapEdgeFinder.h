/* Runtime dump - GEOMapEdgeFinder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeFinder : GEOMapRequest
{
    GEOMapTileFinder * _tileFinder;
    struct ? _centerPoint;
    double _mapRadius;
    id _edgeHandler;
    NSMutableSet * _edgeBuilders;
}

@property (readonly, nonatomic) GEOMapAccess * map;
@property (copy, nonatomic) id edgeHandler;

- (void)cancel;
- (void)dealloc;
- (void).cxx_construct;
- (void)setEdgeHandler:(id /* block */)arg0;
- (id /* block */)edgeHandler;
- (char)_checkEdgeForDuplicates:(struct shared_ptr<geo::MapEdge> *)arg0;
- (void)_buildersInTile:(id)arg0 localPoint:(struct Matrix<float, 2, 1> *)arg1 localRadiusSqr:(struct Matrix<float, 2, 1>)arg2 localSearch:(float)arg3 handler:(struct Box<float, 2> *)arg4;
- (GEOMapEdgeFinder *)initWithMap:(GEOMapAccess *)arg0 center:(struct ?)arg1 radius:(double)arg2;
- (void)findEdges:(id)arg0;
- (GEOMapAccess *)map;

@end
