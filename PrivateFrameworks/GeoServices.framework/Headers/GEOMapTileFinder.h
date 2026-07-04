/* Runtime dump - GEOMapTileFinder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapTileFinder : GEOMapRequest
{
    unsigned int _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileStyle;
    struct ? _center;
    double _radius;
    id _tileHandler;
    char _isCanceling;
}

@property (readonly, nonatomic) unsigned int zoomLevel;
@property (readonly, nonatomic) int tileSize;
@property (readonly, nonatomic) int tileScale;
@property (readonly, nonatomic) int tileStyle;
@property (copy, nonatomic) id tileHandler;
@property (readonly, nonatomic) GEOMapAccess * map;

+ (char)supportsRealisticMap;
+ (NSObject *)realisticTileFinderForMap:(NSObject *)arg0 center:(struct ?)arg1 radius:(double)arg2;

- (void)cancel;
- (void)dealloc;
- (void).cxx_construct;
- (int)tileSize;
- (void)findTilesAdjacentToTile:(struct _GEOTileKey *)arg0 containingPoint:(struct _GEOTileKey)arg1 tileHandler:(struct Matrix<float, 2, 1> *)arg2;
- (void)findTiles:(id)arg0;
- (NSObject *)_initWithMap:(GEOMapAccess *)arg0 zoomLevel:(unsigned int)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileStyle:(int)arg4 center:(struct ?)arg5 radius:(double)arg6;
- (void)setTileHandler:(id /* block */)arg0;
- (void)_fetchDataForKeys:(struct unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > *)arg0;
- (struct _GEOTileKey)_adjacentTileKey:(struct _GEOTileKey *)arg0 dirX:(struct _GEOTileKey)arg1 dirY:(int)arg2;
- (void)findTiles:(id)arg0 excludingKey:(/* block */ id)arg1;
- (id /* block */)tileHandler;
- (int)tileScale;
- (GEOMapAccess *)map;
- (unsigned int)zoomLevel;
- (int)tileStyle;

@end
