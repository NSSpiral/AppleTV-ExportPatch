/* Runtime dump - CLVehicleHeading
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

@property (readonly, nonatomic) double trueHeading;
@property (readonly, nonatomic) NSDate * timestamp;

+ (char)supportsSecureCoding;

- (CLVehicleHeading *)initWithClientVehicleHeading:(struct ?)arg0;
- (void)dealloc;
- (CLVehicleHeading *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSDate *)timestamp;
- (CLVehicleHeading *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)shortDescription;
- (double)trueHeading;

@end
