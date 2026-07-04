/* Runtime dump - GEORerouteInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORerouteInfo : NSObject
{
    double _distancePenalty;
    double _throttledReroutesPenalty;
    double _penalty;
    NSDate * _time;
    double _distanceFromDestination;
}

@property (readonly, nonatomic) double penalty;
@property (retain, nonatomic) NSDate * time;
@property (nonatomic) double distanceFromDestination;

- (void)setTime:(NSDate *)arg0;
- (NSDate *)time;
- (void)updateWithCurrentTime:(id)arg0 location:(struct CGPoint)arg1 isMostRecentReroute:(char)arg2 destinationCoordinate:(struct ?)arg3 numThrottledReroutes:(unsigned int)arg4;
- (double)penalty;
- (double)distanceFromDestination;
- (void)setDistanceFromDestination:(double)arg0;

@end
