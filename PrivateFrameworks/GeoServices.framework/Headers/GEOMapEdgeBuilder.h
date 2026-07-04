/* Runtime dump - GEOMapEdgeBuilder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeBuilder : GEOMapRequest
{
    char _buildAhead;
    char _buildBehind;
    struct Matrix<float, 2, 1> _firstTilePoint;
    struct Matrix<float, 2, 1> _lastTilePoint;
    GEOMapTileFinder * _currentTileFinder;
    id _edgeHandler;
    struct unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > _tileKeysSeen;
    char _searchDirection;
}

@property (copy, nonatomic) id edgeHandler;
@property (readonly, nonatomic) GEOMapAccess * map;

- (void)cancel;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setEdgeHandler:(id /* block */)arg0;
- (struct ? *)_firstJunction;
- (struct Matrix<float, 2, 1>)_firstPoint;
- (id)_firstTile;
- (void)_findTilesAdjacentToTile:(struct _GEOTileKey *)arg0 containingPoint:(struct _GEOTileKey)arg1 findAhead:(struct Matrix<float, 2, 1> *)arg2;
- (struct ? *)_lastJunction;
- (struct Matrix<float, 2, 1>)_lastPoint;
- (id)_lastTile;
- (char)_findEdgeAhead;
- (char)_findEdgeBehind;
- (void)_buildCompleteEdge;
- (char)_findNextEdge;
- (NSObject *)_tileFinderForMap:(NSObject *)arg0 center:(struct ?)arg1 radius:(double)arg2;
- (char)_findEdgeAheadInTile:(id)arg0;
- (char)_findEdgeBehindInTile:(id)arg0;
- (GEOMapEdgeBuilder *)initWithMap:(GEOMapAccess *)arg0;
- (void)buildEdge:(id)arg0;
- (char)_pointConnects:(struct Matrix<float, 2, 1> *)arg0 rect:(struct Matrix<float, 2, 1>)arg1 to:(struct ? *)arg2;
- (char)_edgeStart:(struct Matrix<float, 2, 1> *)arg0 end:(struct Matrix<float, 2, 1>)arg1 connectsTo:(struct Matrix<float, 2, 1> *)arg2 rect:(struct Matrix<float, 2, 1>)arg3;
- (id /* block */)edgeHandler;
- (GEOMapAccess *)map;

@end
