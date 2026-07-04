/* Runtime dump - GEOSnappedRoutePath
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSnappedRoutePath : NSObject
{
    GEOComposedRoute * _route;
    GEOComposedRouteSection * _section;
    NSArray * _edges;
    GEOMapRequest * _edgeSearchRequest;
    struct __CFSet * _observers;
    struct unique_ptr<geo::RouteMapMatchingSection, std::__1::default_delete<geo::RouteMapMatchingSection> > _mapMatchingSection;
    char _hasCompletedMapMatching;
    unsigned int _routeStartIndex;
    unsigned int _routeEndIndex;
    unsigned int _unsnappedPointCount;
    struct ? * _unsnappedPoints;
}

@property (readonly) unsigned int routeStartIndex;
@property (readonly) unsigned int routeEndIndex;
@property (readonly) char isMapMatching;
@property (readonly) char isMapMatched;
@property (readonly) char hasCompletedMapMatching;
@property (readonly) NSArray * edges;
@property (readonly) GEOComposedRouteSection * section;
@property (readonly) struct RouteMapMatchingSection * mapMatchingSection;

- (void)dealloc;
- (NSString *)description;
- (GEOComposedRouteSection *)section;
- (char)removeObserver:(NSObject *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSArray *)edges;
- (void)addObserver:(NSObject *)arg0;
- (struct RouteMapMatchingSection *)mapMatchingSection;
- (GEOSnappedRoutePath *)initWithRoute:(GEOComposedRoute *)arg0 section:(GEOComposedRouteSection *)arg1 routeStartIndex:(unsigned int)arg2 routeEndIndex:(unsigned int)arg3;
- (char)isMapMatching;
- (void)matchWithDecoder:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (float)_calculateEdgeLengthFrom:(struct Matrix<float, 2, 1> *)arg0 to:(struct Matrix<float, 2, 1>)arg1 startCoord:(struct Matrix<float, 2, 1> *)arg2 endCoord:(struct Matrix<float, 2, 1>)arg3;
- (void)_debugPrintEdge:(id)arg0;
- (char)hasObserver:(NSObject *)arg0;
- (unsigned int)routeStartIndex;
- (unsigned int)routeEndIndex;
- (char)hasCompletedMapMatching;
- (char)isMapMatched;

@end
