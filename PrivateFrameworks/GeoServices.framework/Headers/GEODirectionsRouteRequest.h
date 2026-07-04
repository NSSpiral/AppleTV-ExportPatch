/* Runtime dump - GEODirectionsRouteRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRouteRequest : GEODirectionsRequest

- (void)_commonSetup:(id)arg0;
- (GEODirectionsRouteRequest *)initWithDirectionsRequest:(NSURLRequest *)arg0 origin:(_WKSecurityOrigin *)arg1 destination:(NSObject *)arg2 withFeedback:(GEODirectionsFeedback *)arg3;
- (GEODirectionsRouteRequest *)init;
- (Class)responseClass;
- (GEODirectionsRouteRequest *)initWithFeedback:(GEODirectionsFeedback *)arg0;
- (GEODirectionsRouteRequest *)initWithQuickETARequest:(NSURLRequest *)arg0 withFeedback:(GEODirectionsFeedback *)arg1;

@end
