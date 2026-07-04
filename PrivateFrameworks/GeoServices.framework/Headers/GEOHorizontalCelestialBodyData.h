/* Runtime dump - GEOHorizontalCelestialBodyData
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOHorizontalCelestialBodyData : NSObject
{
    double _altitude;
    double _azimuth;
}

@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double azimuth;

- (void)_calcuateAzimuthandAltitudeForCoordiante:(struct ?)arg0 julianDay:(double)arg1 eclipticLongitude:(double)arg2 eclipticLatitude:(double)arg3 radius:(double)arg4;
- (GEOHorizontalCelestialBodyData *)initWithLocation:(struct ?)arg0 date:(NSDate *)arg1 body:(int)arg2;
- (double)altitude;
- (double)azimuth;

@end
