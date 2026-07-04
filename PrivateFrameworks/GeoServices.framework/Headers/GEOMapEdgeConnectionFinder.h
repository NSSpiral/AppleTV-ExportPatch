/* Runtime dump - GEOMapEdgeConnectionFinder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeConnectionFinder : GEOMapRequest
{
    GEOMapAccess * _map;
    GEOMapTileFinder * _tileFinder;
    NSMutableArray * _builders;
    GEOVectorTile * _tile;
    struct ? * _junction;
    struct ? _coordinate;
}

- (void)cancel;
- (void)dealloc;
- (void).cxx_construct;
- (GEOMapEdgeConnectionFinder *)initWithMap:(GEOMapAccess *)arg0 tile:(GEOVectorTile *)arg1 junction:(struct ? *)arg2 coordinate:(struct ?)arg3;
- (void)findConnectionsOut:(id)arg0;
- (void)findConnectionsIn:(id)arg0;
- (void)_findConnections:(NSArray *)arg0 incoming:(/* block */ id)arg1;

@end
