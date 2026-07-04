/* Runtime dump - GEOMapFeatureFinder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureFinder : GEOMapRequest
{
    struct ? _coordinate;
    GEOMapTileFinder * _tileFinder;
    id _roadHandler;
    id _pointHandler;
    id _polygonHandler;
    char _ignoreUnnamedFeatures;
}

@property (nonatomic) char ignoreUnnamedFeatures;
@property (copy, nonatomic) id roadHandler;
@property (copy, nonatomic) id pointHandler;
@property (copy, nonatomic) id polygonHandler;
@property (readonly, nonatomic) GEOMapAccess * map;

- (void)cancel;
- (void)dealloc;
- (void).cxx_construct;
- (GEOMapFeatureFinder *)initWithMap:(GEOMapAccess *)arg0 center:(struct ?)arg1;
- (void)setIgnoreUnnamedFeatures:(char)arg0;
- (void)findFeatures:(id)arg0 pointHandler:(/* block */ id)arg1 polygonHandler:(id /* block */)arg2 completionHandler:(/* block */ id)arg3;
- (void)setRoadHandler:(id /* block */)arg0;
- (void)setPointHandler:(id /* block */)arg0;
- (void)setPolygonHandler:(id /* block */)arg0;
- (void)_pickRoadInTile:(id)arg0 tileRect:(struct ? *)arg1 localPoint:(struct ?)arg2;
- (id /* block */)roadHandler;
- (id /* block */)pointHandler;
- (id /* block */)polygonHandler;
- (char)ignoreUnnamedFeatures;
- (GEOMapAccess *)map;

@end
