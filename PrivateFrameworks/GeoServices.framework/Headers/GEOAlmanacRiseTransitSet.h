/* Runtime dump - GEOAlmanacRiseTransitSet
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlmanacRiseTransitSet : NSObject
{
    double _julianDay;
    struct CAARiseTransitSetDetails _riseTransitSet;
    NSDate * _sunrise;
    NSDate * _transit;
    NSDate * _sunset;
}

@property (readonly, nonatomic) double julianDay;
@property (readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet;
@property (readonly, nonatomic) NSDate * sunrise;
@property (readonly, nonatomic) NSDate * transit;
@property (readonly, nonatomic) NSDate * sunset;

- (void)dealloc;
- (void).cxx_construct;
- (NSDate *)transit;
- (NSSet *)_dateFromOffset:(double)arg0 ofJulianDay:(double)arg1;
- (GEOAlmanacRiseTransitSet *)initWithJulianDay:(double)arg0 riseTransitSet:(struct CAARiseTransitSetDetails)arg1;
- (double)julianDay;
- (struct CAARiseTransitSetDetails)riseTransitSet;
- (NSDate *)sunrise;
- (NSDate *)sunset;

@end
