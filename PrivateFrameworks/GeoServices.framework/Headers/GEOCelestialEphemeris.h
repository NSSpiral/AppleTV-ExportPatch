/* Runtime dump - GEOCelestialEphemeris
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCelestialEphemeris : NSObject
{
    NSDate * _date;
    struct ? _coordinate;
    int _body;
    GEOSolarEclipticCelestialBodyData * _eclipticCoord;
    GEOEquatorialCelestialBodyData * _equatorialCoord;
    GEOHorizontalCelestialBodyData * _horizontalCoord;
    NSDate * _rise;
    NSDate * _transit;
    NSDate * _set;
    double _phaseAngle;
    double _illuminatedFraction;
    double _elongation;
    double _parallacticAngle;
}

@property (readonly, nonatomic) NSDate * rise;
@property (readonly, nonatomic) NSDate * transit;
@property (readonly, nonatomic) NSDate * set;
@property (readonly, nonatomic) double phaseAngle;
@property (readonly, nonatomic) double illuminatedFraction;
@property (readonly, nonatomic) double elongation;
@property (readonly, nonatomic) double parallacticAngle;
@property (readonly, nonatomic) GEOSolarEclipticCelestialBodyData * eclipticCoord;
@property (readonly, nonatomic) GEOEquatorialCelestialBodyData * equatorialCoord;
@property (readonly, nonatomic) GEOHorizontalCelestialBodyData * horizontalCoord;

- (void)dealloc;
- (NSDate *)set;
- (void).cxx_construct;
- (GEOCelestialEphemeris *)initWithLocation:(struct ?)arg0 date:(NSDate *)arg1 body:(int)arg2;
- (struct CAARiseTransitSetDetails)_riseTransitSetForBody:(int)arg0;
- (void)_getRightAscension:(double *)arg0 declination:(double *)arg1 forJulianDay:(double)arg2 forBody:(int)arg3;
- (GEOSolarEclipticCelestialBodyData *)eclipticCoord;
- (GEOEquatorialCelestialBodyData *)equatorialCoord;
- (GEOHorizontalCelestialBodyData *)horizontalCoord;
- (NSDate *)rise;
- (NSDate *)transit;
- (double)elongation;
- (double)phaseAngle;
- (double)illuminatedFraction;
- (double)parallacticAngle;

@end
