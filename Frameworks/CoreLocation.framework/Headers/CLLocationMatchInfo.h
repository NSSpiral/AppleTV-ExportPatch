/* Runtime dump - CLLocationMatchInfo
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

@property (readonly, nonatomic) int matchQuality;
@property (readonly, nonatomic) struct ? matchCoordinate;
@property (readonly, nonatomic) double matchCourse;
@property (readonly, nonatomic) int matchFormOfWay;
@property (readonly, nonatomic) int matchRoadClass;
@property (readonly, nonatomic) char matchShifted;

+ (char)supportsSecureCoding;

- (CLLocationMatchInfo *)initWithMatchQuality:(int)arg0 matchCoordinate:(struct ?)arg1 matchCourse:(double)arg2 matchFormOfWay:(int)arg3 matchRoadClass:(int)arg4 matchShifted:(char)arg5;
- (double)matchCourse;
- (int)matchFormOfWay;
- (int)matchRoadClass;
- (char)isMatchShifted;
- (struct ?)matchCoordinate;
- (int)matchQuality;
- (void)dealloc;
- (CLLocationMatchInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CLLocationMatchInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)shortDescription;

@end
