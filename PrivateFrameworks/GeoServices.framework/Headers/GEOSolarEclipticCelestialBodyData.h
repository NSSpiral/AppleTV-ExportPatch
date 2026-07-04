/* Runtime dump - GEOSolarEclipticCelestialBodyData
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSolarEclipticCelestialBodyData : NSObject
{
    double _latitude;
    double _longitude;
}

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;

- (double)latitude;
- (double)longitude;
- (GEOSolarEclipticCelestialBodyData *)initWithDate:(NSDate *)arg0 body:(int)arg1;

@end
