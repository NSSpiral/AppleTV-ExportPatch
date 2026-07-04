/* Runtime dump - GEOAlmanac
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlmanac : NSObject
{
    GEOAlmanacRiseTransitSet * _previousRiseTransitSet;
    GEOAlmanacRiseTransitSet * _currentRiseTransitSet;
    GEOAlmanacRiseTransitSet * _nextRiseTransitSet;
}

@property (readonly, nonatomic) char isDayLight;
@property (readonly, nonatomic) NSDate * previousSunrise;
@property (readonly, nonatomic) NSDate * previousTransit;
@property (readonly, nonatomic) NSDate * previousSunset;
@property (readonly, nonatomic) NSDate * sunrise;
@property (readonly, nonatomic) NSDate * transit;
@property (readonly, nonatomic) NSDate * sunset;
@property (readonly, nonatomic) NSDate * nextSunrise;
@property (readonly, nonatomic) NSDate * nextTransit;
@property (readonly, nonatomic) NSDate * nextSunset;

- (void)dealloc;
- (NSDate *)transit;
- (void)calculateAstronomicalTimeForLocation:(struct ?)arg0 date:(NSDate *)arg1 altitudeInDegrees:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(struct ?)arg0 time:(double)arg1 altitudeInDegrees:(double)arg2;
- (NSObject *)_newRiseTransitSetForLocation:(struct ?)arg0 julianDay:(double)arg1 altitude:(double)arg2;
- (char)isDayLightForDate:(NSDate *)arg0;
- (NSDate *)sortedTimesForDate:(NSDate *)arg0;
- (void)calculateAstronomicalTimeForLocation:(struct ?)arg0;
- (void)calculateAstronomicalTimeForLocation:(struct ?)arg0 time:(double)arg1;
- (NSDate *)previousTransit;
- (NSDate *)nextTransit;
- (char)isDayLight;
- (char)isDayLightForTime:(double)arg0;
- (NSDate *)sunrise;
- (NSDate *)sunset;
- (void)calculateAstronomicalTimeForLocation:(struct ?)arg0 altitudeInDegrees:(double)arg1;
- (NSDate *)previousSunrise;
- (NSDate *)previousSunset;
- (NSDate *)nextSunrise;
- (NSDate *)nextSunset;
- (void)calculateGeocentricDirectionForSunX:(double *)arg0 Y:(double *)arg1 Z:(double *)arg2;

@end
