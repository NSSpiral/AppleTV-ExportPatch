/* Runtime dump - GEOEquatorialCelestialBodyData
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEquatorialCelestialBodyData : NSObject
{
    double _rightAscension;
    double _declination;
}

@property (readonly, nonatomic) double rightAscension;
@property (readonly, nonatomic) double declination;

- (GEOEquatorialCelestialBodyData *)initWithDate:(NSDate *)arg0 body:(int)arg1;
- (double)rightAscension;
- (double)declination;

@end
