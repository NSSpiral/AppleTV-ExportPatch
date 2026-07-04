/* Runtime dump - GEOQuickETARequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickETARequester : NSObject
{
    GEOQuickETARequest * _request;
    GEOETARequest * _simpleETARequest;
    GEODirectionsRouteRequest * _directionsETARequest;
    NSString * _loggingFacility;
}

@property (copy, nonatomic) NSString * loggingFacility;

- (void)cancel;
- (void)dealloc;
- (GEOQuickETARequester *)initWithRequest:(GEOQuickETARequest *)arg0;
- (void)_calculateSimpleETAWithHandler:(id /* block */)arg0;
- (void)_calculateRoutingETAWithHandler:(id /* block */)arg0;
- (void)calculateETAWithResponseHandler:(NSObject<OS_xpc_object> *)arg0;
- (NSString *)loggingFacility;
- (void)setLoggingFacility:(NSString *)arg0;

@end
