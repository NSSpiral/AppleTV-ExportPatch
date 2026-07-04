/* Runtime dump - GEOComposedRouteSection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteSection : NSObject
{
    unsigned int _startPointIndex;
    unsigned int _pointCount;
    struct ? * _points;
    struct ? _bounds;
    int _transportType;
}

@property (readonly, nonatomic) struct ? vkBounds;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) struct ? * points;
@property (readonly, nonatomic) struct ? bounds;
@property (readonly, nonatomic) int transportType;

- (NSObject *)pathsForRenderRegion:(NSObject *)arg0 inOverlay:(NSObject *)arg1;
- (struct ?)vkBounds;
- (void)dealloc;
- (struct ?)bounds;
- (NSString *)description;
- (void).cxx_construct;
- (GEOComposedRouteSection *)initWithRoute:(GEOComposedRoute *)arg0 startPoint:(unsigned int)arg1 pointCount:(unsigned int)arg2 bounds:(struct ?)arg3 transportType:(struct ?)arg4;
- (GEOComposedRouteSection *)initWithRoute:(GEOComposedRoute *)arg0 startPoint:(unsigned int)arg1 pointCount:(unsigned int)arg2 transportType:(int)arg3 fallbackStartCoordinate:(struct ?)arg4 fallbackEndCoordinate:(struct ?)arg5;
- (unsigned int)startPointIndex;
- (struct ? *)points;
- (unsigned int)pointCount;
- (unsigned int)endPointIndex;
- (int)transportType;

@end
