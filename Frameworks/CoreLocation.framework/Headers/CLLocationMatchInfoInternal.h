/* Runtime dump - CLLocationMatchInfoInternal
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationMatchInfoInternal : NSObject <NSCopying>
{
    int fMatchQuality;
    struct ? fMatchCoordinate;
    double fMatchCourse;
    int fMatchFormOfWay;
    int fMatchRoadClass;
    char fMatchShifted;
}

- (CLLocationMatchInfoInternal *)initWithMatchQuality:(int)arg0 matchCoordinate:(struct ?)arg1 matchCourse:(double)arg2 matchFormOfWay:(int)arg3 matchRoadClass:(int)arg4 matchShifted:(char)arg5;
- (CLLocationMatchInfoInternal *)copyWithZone:(struct _NSZone *)arg0;

@end
