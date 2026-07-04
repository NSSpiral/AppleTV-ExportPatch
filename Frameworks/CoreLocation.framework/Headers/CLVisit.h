/* Runtime dump - CLVisit
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLVisit : NSObject <NSSecureCoding, NSCopying>
{
    NSDate * _arrivalDate;
    NSDate * _departureDate;
    NSDate * _detectionDate;
    double _horizontalAccuracy;
    struct ? _coordinate;
}

@property (readonly, copy, nonatomic) NSDate * arrivalDate;
@property (readonly, copy, nonatomic) NSDate * departureDate;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) char hasArrivalDate;
@property (readonly, nonatomic) char hasDepartureDate;
@property (readonly, copy, nonatomic) NSDate * detectionDate;

+ (char)supportsSecureCoding;

- (CLVisit *)initWithCoordinate:(struct ?)arg0 horizontalAccuracy:(double)arg1 arrivalDate:(NSDate *)arg2 departureDate:(NSDate *)arg3 detectionDate:(NSDate *)arg4;
- (NSDate *)detectionDate;
- (char)hasArrivalDate;
- (char)hasDepartureDate;
- (void)dealloc;
- (CLVisit *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CLVisit *)copyWithZone:(struct _NSZone *)arg0;
- (NSDate *)departureDate;
- (NSDate *)arrivalDate;
- (double)horizontalAccuracy;
- (struct ?)coordinate;

@end
