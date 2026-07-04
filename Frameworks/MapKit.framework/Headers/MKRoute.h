/* Runtime dump - MKRoute
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRoute : NSObject
{
    GEORoute * _geoRoute;
    MKRoutePolyline * _polyline;
    NSArray * _steps;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSArray * advisoryNotices;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) double expectedTravelTime;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) MKPolyline * polyline;
@property (readonly, nonatomic) NSArray * steps;
@property (readonly, nonatomic) GEORoute * geoRoute;

- (double)expectedTravelTime;
- (MKRoute *)_initWithGEORoute:(GEORoute *)arg0;
- (GEORoute *)_geoRoute;
- (NSObject *)_maneuverImageForStep:(NSObject *)arg0 size:(struct CGSize)arg1 scale:(float)arg2;
- (NSString *)name;
- (void).cxx_destruct;
- (NSArray *)advisoryNotices;
- (double)distance;
- (MKPolyline *)polyline;
- (unsigned int)transportType;
- (NSArray *)steps;

@end
