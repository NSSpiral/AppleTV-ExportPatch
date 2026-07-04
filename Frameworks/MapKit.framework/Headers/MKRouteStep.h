/* Runtime dump - MKRouteStep
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRouteStep : NSObject
{
    GEOStep * _geoStep;
    NSString * _instructions;
    unsigned int _transportType;
    MKRouteStepPolyline * _polyline;
}

@property (readonly, nonatomic) NSString * instructions;
@property (readonly, nonatomic) NSString * notice;
@property (readonly, nonatomic) MKPolyline * polyline;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) GEOStep * geoStep;

- (NSObject *)_initWithGEOStep:(NSObject *)arg0 instructions:(NSString *)arg1 transportType:(unsigned int)arg2 polyline:(MKPolyline *)arg3;
- (GEOStep *)_geoStep;
- (void).cxx_destruct;
- (NSString *)instructions;
- (NSString *)notice;
- (double)distance;
- (MKPolyline *)polyline;
- (unsigned int)transportType;

@end
