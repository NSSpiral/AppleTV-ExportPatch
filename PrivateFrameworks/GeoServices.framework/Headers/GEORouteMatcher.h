/* Runtime dump - GEORouteMatcher
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteMatcher : NSObject
{
    GEOComposedRoute * _route;
}

- (void)dealloc;
- (GEORouteMatcher *)initWithRoute:(GEOComposedRoute *)arg0;
- (NSObject *)matchToRouteWithLocation:(NSObject *)arg0;
- (NSObject *)matchToClosestPointOnRouteWithLocation:(NSObject *)arg0;

@end
