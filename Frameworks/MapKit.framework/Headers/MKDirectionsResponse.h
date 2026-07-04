/* Runtime dump - MKDirectionsResponse
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDirectionsResponse : NSObject
{
    GEODirectionsResponse * _geoResponse;
    MKMapItem * _source;
    MKMapItem * _destination;
    NSArray * _routes;
    struct CGImage * _routeImage;
    struct CGImage * _incidentImage;
}

@property (readonly, nonatomic) MKMapItem * source;
@property (readonly, nonatomic) MKMapItem * destination;
@property (readonly, nonatomic) NSArray * routes;
@property (readonly, retain, nonatomic) NSURL * _mapsURL;
@property (readonly, retain, nonatomic) GEODirectionsResponse * _geoResponse;
@property (readonly, retain, nonatomic) GEORoute * _route;
@property (readonly, nonatomic) struct CGImage * _incidentImage;
@property (readonly, retain, nonatomic) NSString * _incidentDescription;
@property (readonly, nonatomic) double _typicalTrafficRatio;

+ (NSURLResponse *)_responseWithGEOResponse:(NSURLResponse *)arg0 request:(NSURLRequest *)arg1 origin:(_WKSecurityOrigin *)arg2 destination:(MKMapItem *)arg3 error:(id *)arg4;

- (NSObject *)_completeRoutesFrom:(NSObject *)arg0;
- (id)_stitchRoute:(id)arg0 routesDict:(id)arg1;
- (NSURLResponse *)_initWithGEOResponse:(NSURLResponse *)arg0 request:(NSURLRequest *)arg1 origin:(_WKSecurityOrigin *)arg2 destination:(MKMapItem *)arg3;
- (double)_typicalTrafficRatio;
- (GEORoute *)_route;
- (struct CGImage *)_routeImage;
- (struct CGImage *)_incidentImage;
- (NSString *)_incidentDescription;
- (NSURL *)_mapsURL;
- (GEODirectionsResponse *)_geoResponse;
- (void)dealloc;
- (MKMapItem *)source;
- (MKMapItem *)destination;
- (void).cxx_destruct;
- (NSArray *)routes;

@end
